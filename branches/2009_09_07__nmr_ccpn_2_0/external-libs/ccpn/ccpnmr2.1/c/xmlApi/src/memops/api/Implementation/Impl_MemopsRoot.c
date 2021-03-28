
#include "ccp.h"

/*
  Unique root class, located at the top of the parent-child tree of objects. The  attributes adn operations are different in the File and Db Implementations
*/

/* package memops.api.Implementation */

/**
  back up TopObject to current backup location
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_Backup(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "backup");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'backup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'backup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  back up memopsRoot and all known top objects
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_BackupAll(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "backupAll");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'backupAll'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'backupAll' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @param  ApiBoolean complete
**/
void *Impl_MemopsRoot_CheckAllValid(Impl_MemopsRoot self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @param  ApiBoolean complete
**/
void *Impl_MemopsRoot_CheckValid(Impl_MemopsRoot self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAccessControlStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAccessControlStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAccessControlStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAccessControlStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAccessControlStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAccessControlStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAccessControlStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAccessControlStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAccessControlStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAccessControlStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAccessControlStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAccessControlStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAccessControlStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAccessControlStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_MemopsRoot_FindAllActiveRepositories(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_MemopsRoot_FindAllActiveRepositories_keyval0(Impl_MemopsRoot self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_MemopsRoot_FindAllActiveRepositories_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_MemopsRoot_FindAllActiveRepositories_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_MemopsRoot_FindAllActiveRepositories_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
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
ApiList Impl_MemopsRoot_FindAllActiveRepositories_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAffiliationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAffiliationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAffiliationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAffiliationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAffiliationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAffiliationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAffiliationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAffiliationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAffiliationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAffiliationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAffiliationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAffiliationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAffiliationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAffiliationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisProfiles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAnalysisProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAnalysisProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAnalysisProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAnalysisProfiles_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAnalysisProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAnalysisProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAnalysisProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAnalysisProjects_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAnalysisProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnealProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAnnealProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAnnealProtocolStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAnnealProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAnnealProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAnnealProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAnnealProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAnnealProtocolStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAnnealProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnotationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllAnnotationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllAnnotationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnotationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllAnnotationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnotationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllAnnotationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnotationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllAnnotationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllAnnotationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllAnnotationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllAnnotationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllAnnotationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCharges(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompCharges");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllChemCompCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllChemCompCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCharges_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllChemCompCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCharges_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllChemCompCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCharges_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllChemCompCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCharges_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllChemCompCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllChemCompCharges_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllChemCompCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCoords(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompCoords");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllChemCompCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllChemCompCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCoords_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllChemCompCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCoords_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllChemCompCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCoords_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllChemCompCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemCompCoords_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllChemCompCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllChemCompCoords_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllChemCompCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemComps(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemComps");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllChemComps'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllChemComps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemComps_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllChemComps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemComps_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllChemComps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemComps_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllChemComps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemComps_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllChemComps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllChemComps_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllChemComps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemElementStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemElementStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllChemElementStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllChemElementStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemElementStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllChemElementStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemElementStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllChemElementStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemElementStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllChemElementStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllChemElementStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllChemElementStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllChemElementStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllChemElementStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCitationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllCitationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllCitationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCitationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllCitationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCitationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllCitationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCitationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllCitationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCitationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllCitationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllCitationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllCitationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllClassifications(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllClassifications");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllClassifications'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllClassifications' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllClassifications_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllClassifications(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllClassifications_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllClassifications(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllClassifications_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllClassifications(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllClassifications_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllClassifications(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllClassifications_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllClassifications(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCrystallizationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllCrystallizationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllCrystallizationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllCrystallizationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllCrystallizationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllCrystallizationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllCrystallizationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllCrystallizationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllCrystallizationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDangleStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllDangleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllDangleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDangleStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllDangleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDangleStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllDangleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDangleStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllDangleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDangleStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllDangleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllDangleStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllDangleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDataLocationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllDataLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllDataLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDataLocationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllDataLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDataLocationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllDataLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDataLocationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllDataLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDataLocationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllDataLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllDataLocationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllDataLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDatabases(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDatabases");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllDatabases'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllDatabases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDatabases_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllDatabases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDatabases_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllDatabases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDatabases_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllDatabases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllDatabases_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllDatabases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllDatabases_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllDatabases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpBlueprintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllExpBlueprintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllExpBlueprintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllExpBlueprintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllExpBlueprintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllExpBlueprintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllExpBlueprintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllExpBlueprintStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllExpBlueprintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExperimentStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperimentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllExperimentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllExperimentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExperimentStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllExperimentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExperimentStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllExperimentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExperimentStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllExperimentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllExperimentStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllExperimentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllExperimentStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllExperimentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllHolderStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllHolderStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllHolderStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllHolderStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllHolderStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllHolderStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllHolderStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllHolderStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllHolderStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllHolderStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllHolderStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllHolderStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllHolderStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllInstrumentStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstrumentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllInstrumentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllInstrumentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllInstrumentStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllInstrumentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllInstrumentStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllInstrumentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllInstrumentStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllInstrumentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllInstrumentStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllInstrumentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllInstrumentStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllInstrumentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllKeywordDefinitionStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllKeywordDefinitionStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllKeywordDefinitionStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllKeywordDefinitionStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllKeywordDefinitionStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllKeywordDefinitionStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllKeywordDefinitionStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllKeywordDefinitionStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllKeywordDefinitionStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabeledMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllLabeledMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllLabeledMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllLabeledMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllLabeledMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllLabeledMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllLabeledMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllLabeledMolecules_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllLabeledMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabelingSchemes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllLabelingSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllLabelingSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllLabelingSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllLabelingSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllLabelingSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllLabelingSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllLabelingSchemes_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllLabelingSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLocationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLocationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLocationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLocationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllLocationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllLocationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllLocationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMethodStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMethodStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllMethodStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllMethodStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMethodStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllMethodStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMethodStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllMethodStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMethodStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllMethodStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMethodStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllMethodStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllMethodStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllMethodStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystemSymmetrySets");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllMolSystemSymmetrySets'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllMolSystemSymmetrySets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllMolSystemSymmetrySets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllMolSystemSymmetrySets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllMolSystemSymmetrySets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllMolSystemSymmetrySets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllMolSystemSymmetrySets_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllMolSystemSymmetrySets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystems(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystems_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystems_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystems_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolSystems_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllMolSystems_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolecules(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolecules_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolecules_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolecules_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllMolecules_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllMolecules_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNameMappingStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNameMappingStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNameMappingStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNameMappingStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNameMappingStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNameMappingStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNameMappingStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNameMappingStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNameMappingStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNameMappingStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNameMappingStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNameMappingStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNameMappingStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNameMappingStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrCalcStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrCalcStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrCalcStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrCalcStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrCalcStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrCalcStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrCalcStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrCalcStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrCalcStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrConstraintStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrEntryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrEntryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrEntryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrEntryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrEntryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrEntryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrEntryStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrEntryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrExpPrototypes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrExpPrototypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrExpPrototypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrExpPrototypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrExpPrototypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrExpPrototypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrExpPrototypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrExpPrototypes_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrExpPrototypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrProjects(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrProjects_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrProjects_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrProjects_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrProjects_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrProjects_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrReferenceStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrReferenceStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrReferenceStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrReferenceStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrReferenceStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrReferenceStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrReferenceStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrReferenceStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrReferenceStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrSimStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSimStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllNmrSimStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllNmrSimStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrSimStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllNmrSimStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrSimStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllNmrSimStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrSimStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllNmrSimStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllNmrSimStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllNmrSimStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllNmrSimStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllNmrSimStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllPackageLocators(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPackageLocators");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllPackageLocators'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllPackageLocators' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllPackageLocators_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllPackageLocators(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllPackageLocators_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllPackageLocators(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllPackageLocators_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllPackageLocators(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllPackageLocators_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllPackageLocators(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllPackageLocators_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllPackageLocators(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllProtocolStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllProtocolStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllProtocolStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllProtocolStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllProtocolStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllProtocolStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllProtocolStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllProtocolStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefSampleComponentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllRefSampleComponentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllRefSampleComponentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllRefSampleComponentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllRefSampleComponentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllRefSampleComponentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllRefSampleComponentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllRefSampleComponentStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllRefSampleComponentStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRepositories(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRepositories_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRepositories_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRepositories_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllRepositories_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllRepositories_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllSampleStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllSampleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllSampleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllSampleStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllSampleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllSampleStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllSampleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllSampleStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllSampleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllSampleStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllSampleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllSampleStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllSampleStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllStereochemistryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllStereochemistryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllStereochemistryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllStereochemistryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllStereochemistryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllStereochemistryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllStereochemistryStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllStereochemistryStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureEnsembles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllStructureEnsembles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllStructureEnsembles_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTargetStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllTargetStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllTargetStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTargetStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllTargetStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTargetStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllTargetStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTargetStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllTargetStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTargetStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllTargetStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllTargetStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllTargetStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTaxonomies(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTaxonomies");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllTaxonomies'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllTaxonomies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTaxonomies_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllTaxonomies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTaxonomies_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllTaxonomies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTaxonomies_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllTaxonomies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTaxonomies_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllTaxonomies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllTaxonomies_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllTaxonomies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTopObjects(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTopObjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllTopObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllTopObjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTopObjects_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllTopObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTopObjects_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllTopObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTopObjects_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllTopObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllTopObjects_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllTopObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllTopObjects_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllTopObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllValidationStores(Impl_MemopsRoot self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllValidationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findAllValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findAllValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllValidationStores_keyval0(Impl_MemopsRoot self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllValidationStores_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllValidationStores_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_MemopsRoot_FindAllValidationStores_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
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
ApiSet Impl_MemopsRoot_FindAllValidationStores_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAccessControlStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore_keyval0(Impl_MemopsRoot self)
{
  
  Acco_AccessControlStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAccessControlStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Acco_AccessControlStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAccessControlStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_AccessControlStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAccessControlStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_AccessControlStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAccessControlStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
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
Acco_AccessControlStore Impl_MemopsRoot_FindFirstAccessControlStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_AccessControlStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAccessControlStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository_keyval0(Impl_MemopsRoot self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
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
Impl_Repository Impl_MemopsRoot_FindFirstActiveRepository_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Affi_AffiliationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAffiliationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAffiliationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAffiliationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore_keyval0(Impl_MemopsRoot self)
{
  
  Affi_AffiliationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAffiliationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Affi_AffiliationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAffiliationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_AffiliationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAffiliationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_AffiliationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAffiliationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
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
Affi_AffiliationStore Impl_MemopsRoot_FindFirstAffiliationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_AffiliationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAffiliationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisProfile");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAnalysisProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile_keyval0(Impl_MemopsRoot self)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProfiles

child 
link
  @param  Impl_MemopsRoot self
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
Anap_AnalysisProfile Impl_MemopsRoot_FindFirstAnalysisProfile_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAnalysisProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject_keyval0(Impl_MemopsRoot self)
{
  
  Anal_AnalysisProject  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Anal_AnalysisProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AnalysisProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AnalysisProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.analysisProjects

child 
link
  @param  Impl_MemopsRoot self
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
Anal_AnalysisProject Impl_MemopsRoot_FindFirstAnalysisProject_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AnalysisProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAnalysisProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAnnealProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore_keyval0(Impl_MemopsRoot self)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAnnealProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAnnealProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAnnealProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAnnealProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.annealProtocolStores

child link
  @param  Impl_MemopsRoot self
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
Anpr_AnnealProtocolStore Impl_MemopsRoot_FindFirstAnnealProtocolStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAnnealProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstAnnotationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore_keyval0(Impl_MemopsRoot self)
{
  
  Anno_AnnotationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstAnnotationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Anno_AnnotationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstAnnotationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_AnnotationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstAnnotationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_AnnotationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstAnnotationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.annotationStores

child 
link
  @param  Impl_MemopsRoot self
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
Anno_AnnotationStore Impl_MemopsRoot_FindFirstAnnotationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_AnnotationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstAnnotationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemComp");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompCharge");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstChemCompCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge_keyval0(Impl_MemopsRoot self)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstChemCompCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCharges

child 
link
  @param  Impl_MemopsRoot self
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
Ccca_ChemCompCharge Impl_MemopsRoot_FindFirstChemCompCharge_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompCoord");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstChemCompCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord_keyval0(Impl_MemopsRoot self)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstChemCompCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemCompCoords

child 
link
  @param  Impl_MemopsRoot self
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
Ccco_ChemCompCoord Impl_MemopsRoot_FindFirstChemCompCoord_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstChemCompCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp_keyval0(Impl_MemopsRoot self)
{
  
  Chem_ChemComp  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstChemComp(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Chem_ChemComp  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstChemComp(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemComp  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstChemComp(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemComp  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstChemComp(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
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
Chem_ChemComp Impl_MemopsRoot_FindFirstChemComp_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemComp  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstChemComp(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Chel_ChemElementStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemElementStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstChemElementStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstChemElementStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore_keyval0(Impl_MemopsRoot self)
{
  
  Chel_ChemElementStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstChemElementStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Chel_ChemElementStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstChemElementStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chel_ChemElementStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstChemElementStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chel_ChemElementStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstChemElementStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
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
Chel_ChemElementStore Impl_MemopsRoot_FindFirstChemElementStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chel_ChemElementStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstChemElementStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstCitationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore_keyval0(Impl_MemopsRoot self)
{
  
  Cita_CitationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstCitationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Cita_CitationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstCitationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_CitationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstCitationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_CitationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstCitationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.citationStores

child 
link
  @param  Impl_MemopsRoot self
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
Cita_CitationStore Impl_MemopsRoot_FindFirstCitationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_CitationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstCitationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_Classification Impl_MemopsRoot_FindFirstClassification(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstClassification");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Clas_Classification Impl_MemopsRoot_FindFirstClassification_keyval0(Impl_MemopsRoot self)
{
  
  Clas_Classification  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstClassification(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_Classification Impl_MemopsRoot_FindFirstClassification_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Clas_Classification  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstClassification(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_Classification Impl_MemopsRoot_FindFirstClassification_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_Classification  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstClassification(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_Classification Impl_MemopsRoot_FindFirstClassification_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_Classification  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstClassification(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.classifications

child 
link
  @param  Impl_MemopsRoot self
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
Clas_Classification Impl_MemopsRoot_FindFirstClassification_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_Classification  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstClassification(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCrystallizationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore_keyval0(Impl_MemopsRoot self)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstCrystallizationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstCrystallizationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstCrystallizationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstCrystallizationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.crystallizationStores

child link
  @param  Impl_MemopsRoot self
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
Cryz_CrystallizationStore Impl_MemopsRoot_FindFirstCrystallizationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstCrystallizationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstDangleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstDangleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore_keyval0(Impl_MemopsRoot self)
{
  
  Dang_DangleStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstDangleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Dang_DangleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstDangleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstDangleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstDangleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
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
Dang_DangleStore Impl_MemopsRoot_FindFirstDangleStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstDangleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore_keyval0(Impl_MemopsRoot self)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstDataLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstDataLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstDataLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstDataLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
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
Dloc_DataLocationStore Impl_MemopsRoot_FindFirstDataLocationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstDataLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dbr_Database Impl_MemopsRoot_FindFirstDatabase(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Dbr_Database obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDatabase");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstDatabase'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstDatabase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Dbr_Database Impl_MemopsRoot_FindFirstDatabase_keyval0(Impl_MemopsRoot self)
{
  
  Dbr_Database  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstDatabase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dbr_Database Impl_MemopsRoot_FindFirstDatabase_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Dbr_Database  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstDatabase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dbr_Database Impl_MemopsRoot_FindFirstDatabase_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dbr_Database  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstDatabase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dbr_Database Impl_MemopsRoot_FindFirstDatabase_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dbr_Database  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstDatabase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
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
Dbr_Database Impl_MemopsRoot_FindFirstDatabase_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dbr_Database  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstDatabase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpBlueprintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstExpBlueprintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstExpBlueprintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore_keyval0(Impl_MemopsRoot self)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstExpBlueprintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstExpBlueprintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstExpBlueprintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstExpBlueprintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
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
Expb_ExpBlueprintStore Impl_MemopsRoot_FindFirstExpBlueprintStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstExpBlueprintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperimentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstExperimentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore_keyval0(Impl_MemopsRoot self)
{
  
  Expe_ExperimentStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstExperimentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Expe_ExperimentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstExperimentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_ExperimentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstExperimentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_ExperimentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstExperimentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.experimentStores

child 
link
  @param  Impl_MemopsRoot self
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
Expe_ExperimentStore Impl_MemopsRoot_FindFirstExperimentStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_ExperimentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstExperimentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstHolderStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore_keyval0(Impl_MemopsRoot self)
{
  
  Hold_HolderStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstHolderStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Hold_HolderStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstHolderStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_HolderStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstHolderStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_HolderStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstHolderStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
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
Hold_HolderStore Impl_MemopsRoot_FindFirstHolderStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_HolderStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstHolderStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrumentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore_keyval0(Impl_MemopsRoot self)
{
  
  Inst_InstrumentStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstInstrumentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Inst_InstrumentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstInstrumentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_InstrumentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstInstrumentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_InstrumentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstInstrumentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.instrumentStores

child 
link
  @param  Impl_MemopsRoot self
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
Inst_InstrumentStore Impl_MemopsRoot_FindFirstInstrumentStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_InstrumentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstInstrumentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstKeywordDefinitionStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstKeywordDefinitionStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstKeywordDefinitionStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore_keyval0(Impl_MemopsRoot self)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstKeywordDefinitionStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstKeywordDefinitionStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstKeywordDefinitionStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstKeywordDefinitionStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
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
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_FindFirstKeywordDefinitionStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstKeywordDefinitionStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabeledMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstLabeledMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule_keyval0(Impl_MemopsRoot self)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstLabeledMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstLabeledMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstLabeledMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstLabeledMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labeledMolecules

child 
link
  @param  Impl_MemopsRoot self
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
Lmol_LabeledMolecule Impl_MemopsRoot_FindFirstLabeledMolecule_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstLabeledMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabelingScheme");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstLabelingScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme_keyval0(Impl_MemopsRoot self)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstLabelingScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstLabelingScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstLabelingScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstLabelingScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.labelingSchemes

child 
link
  @param  Impl_MemopsRoot self
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
Cclb_LabelingScheme Impl_MemopsRoot_FindFirstLabelingScheme_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstLabelingScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Loca_LocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore_keyval0(Impl_MemopsRoot self)
{
  
  Loca_LocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Loca_LocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Loca_LocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Loca_LocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.locationStores

child 
link
  @param  Impl_MemopsRoot self
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
Loca_LocationStore Impl_MemopsRoot_FindFirstLocationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Loca_LocationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstLocationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Meth_MethodStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMethodStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstMethodStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstMethodStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore_keyval0(Impl_MemopsRoot self)
{
  
  Meth_MethodStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstMethodStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Meth_MethodStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstMethodStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_MethodStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstMethodStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_MethodStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstMethodStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
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
Meth_MethodStore Impl_MemopsRoot_FindFirstMethodStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_MethodStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstMethodStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystemSymmetrySet");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstMolSystemSymmetrySet'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstMolSystemSymmetrySet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet_keyval0(Impl_MemopsRoot self)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.molSystemSymmetrySets

child link
  @param  Impl_MemopsRoot self
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
Symm_MolSystemSymmetrySet Impl_MemopsRoot_FindFirstMolSystemSymmetrySet_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstMolSystemSymmetrySet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem_keyval0(Impl_MemopsRoot self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
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
Mols_MolSystem Impl_MemopsRoot_FindFirstMolSystem_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule_keyval0(Impl_MemopsRoot self)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
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
Mole_Molecule Impl_MemopsRoot_FindFirstMolecule_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nmap_NameMappingStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNameMappingStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNameMappingStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNameMappingStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore_keyval0(Impl_MemopsRoot self)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNameMappingStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNameMappingStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNameMappingStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNameMappingStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
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
Nmap_NameMappingStore Impl_MemopsRoot_FindFirstNameMappingStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNameMappingStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrCalcStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrCalcStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrCalcStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore_keyval0(Impl_MemopsRoot self)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrCalcStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrCalcStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrCalcStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrCalcStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrCalcStores

child link 
to class NmrCalcStore
  @param  Impl_MemopsRoot self
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
Calc_NmrCalcStore Impl_MemopsRoot_FindFirstNmrCalcStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrCalcStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore_keyval0(Impl_MemopsRoot self)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
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
Nmrc_NmrConstraintStore Impl_MemopsRoot_FindFirstNmrConstraintStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrEntryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore_keyval0(Impl_MemopsRoot self)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrEntryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrEntryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrEntryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrEntryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrEntryStores

child 
link
  @param  Impl_MemopsRoot self
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
Entr_NmrEntryStore Impl_MemopsRoot_FindFirstNmrEntryStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrEntryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrExpPrototype");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrExpPrototype' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype_keyval0(Impl_MemopsRoot self)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrExpPrototype(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrExpPrototype(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrExpPrototype(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrExpPrototype(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrExpPrototypes

child 
link
  @param  Impl_MemopsRoot self
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
Nmrx_NmrExpPrototype Impl_MemopsRoot_FindFirstNmrExpPrototype_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrExpPrototype(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject_keyval0(Impl_MemopsRoot self)
{
  
  Nmr_NmrProject  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nmr_NmrProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_NmrProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_NmrProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
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
Nmr_NmrProject Impl_MemopsRoot_FindFirstNmrProject_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_NmrProject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrReferenceStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrReferenceStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrReferenceStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore_keyval0(Impl_MemopsRoot self)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrReferenceStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrReferenceStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrReferenceStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrReferenceStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
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
Nmrr_NmrReferenceStore Impl_MemopsRoot_FindFirstNmrReferenceStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrReferenceStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSimStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstNmrSimStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstNmrSimStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore_keyval0(Impl_MemopsRoot self)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstNmrSimStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstNmrSimStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstNmrSimStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstNmrSimStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
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
Nsim_NmrSimStore Impl_MemopsRoot_FindFirstNmrSimStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstNmrSimStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPackageLocator");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstPackageLocator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator_keyval0(Impl_MemopsRoot self)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstPackageLocator(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstPackageLocator(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstPackageLocator(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstPackageLocator(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.packageLocators

child 
link to class PackageLocator
  @param  Impl_MemopsRoot self
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
Impl_PackageLocator Impl_MemopsRoot_FindFirstPackageLocator_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstPackageLocator(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Prot_ProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore_keyval0(Impl_MemopsRoot self)
{
  
  Prot_ProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Prot_ProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_ProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_ProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.protocolStores

child 
link
  @param  Impl_MemopsRoot self
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
Prot_ProtocolStore Impl_MemopsRoot_FindFirstProtocolStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_ProtocolStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstProtocolStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstRefSampleComponentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore_keyval0(Impl_MemopsRoot self)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstRefSampleComponentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstRefSampleComponentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstRefSampleComponentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstRefSampleComponentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
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
Refs_RefSampleComponentStore Impl_MemopsRoot_FindFirstRefSampleComponentStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstRefSampleComponentStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstRepository(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstRepository_keyval0(Impl_MemopsRoot self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstRepository_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstRepository_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_MemopsRoot_FindFirstRepository_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.repositories

child link 
to class Repository
  @param  Impl_MemopsRoot self
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
Impl_Repository Impl_MemopsRoot_FindFirstRepository_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstSampleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore_keyval0(Impl_MemopsRoot self)
{
  
  Sam_SampleStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstSampleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Sam_SampleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstSampleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstSampleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstSampleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
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
Sam_SampleStore Impl_MemopsRoot_FindFirstSampleStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstSampleStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Ster_StereochemistryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstStereochemistryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstStereochemistryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore_keyval0(Impl_MemopsRoot self)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstStereochemistryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstStereochemistryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstStereochemistryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstStereochemistryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.MemopsRoot.stereochemistryStores

child link
  @param  Impl_MemopsRoot self
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
Ster_StereochemistryStore Impl_MemopsRoot_FindFirstStereochemistryStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstStereochemistryStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureEnsemble");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstStructureEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble_keyval0(Impl_MemopsRoot self)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
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
Coor_StructureEnsemble Impl_MemopsRoot_FindFirstStructureEnsemble_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstTargetStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore_keyval0(Impl_MemopsRoot self)
{
  
  Targ_TargetStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstTargetStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Targ_TargetStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstTargetStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstTargetStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstTargetStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
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
Targ_TargetStore Impl_MemopsRoot_FindFirstTargetStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstTargetStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTaxonomy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstTaxonomy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstTaxonomy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy_keyval0(Impl_MemopsRoot self)
{
  
  Taxo_Taxonomy  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstTaxonomy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Taxo_Taxonomy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstTaxonomy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Taxo_Taxonomy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstTaxonomy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Taxo_Taxonomy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstTaxonomy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
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
Taxo_Taxonomy Impl_MemopsRoot_FindFirstTaxonomy_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Taxo_Taxonomy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstTaxonomy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTopObject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject_keyval0(Impl_MemopsRoot self)
{
  
  Impl_TopObject  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstTopObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Impl_TopObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstTopObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_TopObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstTopObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_TopObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstTopObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.topObjects

All 
TopObjects of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
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
Impl_TopObject Impl_MemopsRoot_FindFirstTopObject_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_TopObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstTopObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore(Impl_MemopsRoot self, ApiMap conditions)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstValidationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'findFirstValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'findFirstValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore_keyval0(Impl_MemopsRoot self)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_MemopsRoot_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore_keyval1(Impl_MemopsRoot self, char * key, ApiObject value)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_MemopsRoot_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore_keyval2(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_MemopsRoot_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore_keyval3(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_MemopsRoot_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.MemopsRoot.validationStores

child 
link
  @param  Impl_MemopsRoot self
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
Vald_ValidationStore Impl_MemopsRoot_FindFirstValidationStore_keyval4(Impl_MemopsRoot self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_MemopsRoot_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_MemopsRoot_Get(Impl_MemopsRoot self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.MemopsRoot.accessControlOn

Is access 
control active?
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetAccessControlOn(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessControlOn");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAccessControlOn'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAccessControlOn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.accessControlStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAccessControlStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessControlStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAccessControlStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAccessControlStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.MemopsRoot.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_GetActiveRepositories(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.affiliationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAffiliationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAffiliationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAffiliationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAffiliationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.analysisProfiles

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAnalysisProfiles(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProfiles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAnalysisProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAnalysisProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.analysisProjects

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAnalysisProjects(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAnalysisProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAnalysisProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAnnealProtocolStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAnnealProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAnnealProtocolStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.annotationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetAnnotationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getAnnotationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getAnnotationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetChemCompCharges(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCharges");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getChemCompCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getChemCompCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetChemCompCoords(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCoords");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getChemCompCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getChemCompCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetChemComps(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComps");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getChemComps'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getChemComps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.chemElementStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetChemElementStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemElementStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getChemElementStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getChemElementStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetCitationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCitationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCitationStores' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetClassName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetClassifications(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassifications");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getClassifications'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getClassifications' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.createdBy

user who created 
TopObject.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetCreatedBy(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.crystallizationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetCrystallizationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCrystallizationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCrystallizationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCrystallizationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAccessControlStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Acco_AccessControlStore Impl_MemopsRoot_GetCurrentAccessControlStore(Impl_MemopsRoot self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAccessControlStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAffiliationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Affi_AffiliationStore Impl_MemopsRoot_GetCurrentAffiliationStore(Impl_MemopsRoot self)
{
  
  Affi_AffiliationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAffiliationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAffiliationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAffiliationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAnalysisProfile
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Anap_AnalysisProfile Impl_MemopsRoot_GetCurrentAnalysisProfile(Impl_MemopsRoot self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAnalysisProfile");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAnalysisProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAnalysisProject
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Anal_AnalysisProject Impl_MemopsRoot_GetCurrentAnalysisProject(Impl_MemopsRoot self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAnalysisProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAnalysisProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAnnealProtocolStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_GetCurrentAnnealProtocolStore(Impl_MemopsRoot self)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAnnealProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentAnnotationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Anno_AnnotationStore Impl_MemopsRoot_GetCurrentAnnotationStore(Impl_MemopsRoot self)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAnnotationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentAnnotationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentChemComp
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Chem_ChemComp Impl_MemopsRoot_GetCurrentChemComp(Impl_MemopsRoot self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentChemComp");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentChemCompCharge
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Ccca_ChemCompCharge Impl_MemopsRoot_GetCurrentChemCompCharge(Impl_MemopsRoot self)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentChemCompCharge");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentChemCompCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentChemCompCoord
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Ccco_ChemCompCoord Impl_MemopsRoot_GetCurrentChemCompCoord(Impl_MemopsRoot self)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentChemCompCoord");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentChemCompCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentChemElementStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Chel_ChemElementStore Impl_MemopsRoot_GetCurrentChemElementStore(Impl_MemopsRoot self)
{
  
  Chel_ChemElementStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentChemElementStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentChemElementStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentChemElementStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentCitationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Cita_CitationStore Impl_MemopsRoot_GetCurrentCitationStore(Impl_MemopsRoot self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentCitationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentCitationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentClassification
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Clas_Classification Impl_MemopsRoot_GetCurrentClassification(Impl_MemopsRoot self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentClassification");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentCrystallizationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Cryz_CrystallizationStore Impl_MemopsRoot_GetCurrentCrystallizationStore(Impl_MemopsRoot self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentCrystallizationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentDangleStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Dang_DangleStore Impl_MemopsRoot_GetCurrentDangleStore(Impl_MemopsRoot self)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentDangleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentDangleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentDangleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentDataLocationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Dloc_DataLocationStore Impl_MemopsRoot_GetCurrentDataLocationStore(Impl_MemopsRoot self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentDataLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentDatabase
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Dbr_Database Impl_MemopsRoot_GetCurrentDatabase(Impl_MemopsRoot self)
{
  
  Dbr_Database obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentDatabase");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentDatabase'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentDatabase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentExpBlueprintStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_GetCurrentExpBlueprintStore(Impl_MemopsRoot self)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentExpBlueprintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentExpBlueprintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentExpBlueprintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentExperimentStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Expe_ExperimentStore Impl_MemopsRoot_GetCurrentExperimentStore(Impl_MemopsRoot self)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentExperimentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentExperimentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentGroupName

name of 
current group. Used for access control, record of who creates and 
modifies objects, etc.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetCurrentGroupName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentGroupName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentGroupName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentGroupName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentHolderStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Hold_HolderStore Impl_MemopsRoot_GetCurrentHolderStore(Impl_MemopsRoot self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentHolderStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentHolderStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentInstrumentStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Inst_InstrumentStore Impl_MemopsRoot_GetCurrentInstrumentStore(Impl_MemopsRoot self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentInstrumentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentKeywordDefinitionStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_GetCurrentKeywordDefinitionStore(Impl_MemopsRoot self)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentKeywordDefinitionStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentKeywordDefinitionStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentKeywordDefinitionStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentLabeledMolecule
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Lmol_LabeledMolecule Impl_MemopsRoot_GetCurrentLabeledMolecule(Impl_MemopsRoot self)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentLabeledMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentLabeledMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentLabelingScheme
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Cclb_LabelingScheme Impl_MemopsRoot_GetCurrentLabelingScheme(Impl_MemopsRoot self)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentLabelingScheme");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentLabelingScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentLocationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Loca_LocationStore Impl_MemopsRoot_GetCurrentLocationStore(Impl_MemopsRoot self)
{
  
  Loca_LocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentMethodStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Meth_MethodStore Impl_MemopsRoot_GetCurrentMethodStore(Impl_MemopsRoot self)
{
  
  Meth_MethodStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentMethodStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentMethodStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentMethodStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentMolSystem
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Mols_MolSystem Impl_MemopsRoot_GetCurrentMolSystem(Impl_MemopsRoot self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentMolSystem");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentMolSystemSymmetrySet
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_GetCurrentMolSystemSymmetrySet(Impl_MemopsRoot self)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentMolSystemSymmetrySet");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentMolSystemSymmetrySet'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentMolSystemSymmetrySet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentMolecule
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Mole_Molecule Impl_MemopsRoot_GetCurrentMolecule(Impl_MemopsRoot self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNameMappingStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nmap_NameMappingStore Impl_MemopsRoot_GetCurrentNameMappingStore(Impl_MemopsRoot self)
{
  
  Nmap_NameMappingStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNameMappingStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNameMappingStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNameMappingStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrCalcStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Calc_NmrCalcStore Impl_MemopsRoot_GetCurrentNmrCalcStore(Impl_MemopsRoot self)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrCalcStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrCalcStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrCalcStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrConstraintStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_GetCurrentNmrConstraintStore(Impl_MemopsRoot self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrConstraintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrEntryStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Entr_NmrEntryStore Impl_MemopsRoot_GetCurrentNmrEntryStore(Impl_MemopsRoot self)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrEntryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrEntryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrExpPrototype
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_GetCurrentNmrExpPrototype(Impl_MemopsRoot self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrExpPrototype");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrExpPrototype' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrProject
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nmr_NmrProject Impl_MemopsRoot_GetCurrentNmrProject(Impl_MemopsRoot self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrReferenceStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_GetCurrentNmrReferenceStore(Impl_MemopsRoot self)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrReferenceStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrReferenceStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrReferenceStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentNmrSimStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Nsim_NmrSimStore Impl_MemopsRoot_GetCurrentNmrSimStore(Impl_MemopsRoot self)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentNmrSimStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentNmrSimStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentNmrSimStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentProtocolStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Prot_ProtocolStore Impl_MemopsRoot_GetCurrentProtocolStore(Impl_MemopsRoot self)
{
  
  Prot_ProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentRefSampleComponentStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_GetCurrentRefSampleComponentStore(Impl_MemopsRoot self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentRefSampleComponentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentSampleStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Sam_SampleStore Impl_MemopsRoot_GetCurrentSampleStore(Impl_MemopsRoot self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentSampleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentSampleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentStereochemistryStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Ster_StereochemistryStore Impl_MemopsRoot_GetCurrentStereochemistryStore(Impl_MemopsRoot self)
{
  
  Ster_StereochemistryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentStereochemistryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentStereochemistryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentStereochemistryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentStructureEnsemble
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Coor_StructureEnsemble Impl_MemopsRoot_GetCurrentStructureEnsemble(Impl_MemopsRoot self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentStructureEnsemble");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentStructureEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentTargetStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Targ_TargetStore Impl_MemopsRoot_GetCurrentTargetStore(Impl_MemopsRoot self)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentTargetStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentTargetStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentTaxonomy
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Taxo_Taxonomy Impl_MemopsRoot_GetCurrentTaxonomy(Impl_MemopsRoot self)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentTaxonomy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentTaxonomy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentTaxonomy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentUserId

user Id for 
current user. Used for access control, record of who creates and 
modifies objects, etc.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetCurrentUserId(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentUserId");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentUserId'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentUserId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.currentValidationStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Vald_ValidationStore Impl_MemopsRoot_GetCurrentValidationStore(Impl_MemopsRoot self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentValidationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getCurrentValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getCurrentValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetDangleStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getDangleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getDangleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.dataLocationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetDataLocationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getDataLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getDataLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetDatabases(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDatabases");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getDatabases'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getDatabases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.expBlueprintStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetExpBlueprintStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getExpBlueprintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getExpBlueprintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.experimentStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetExperimentStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getExperimentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getExperimentStores' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_GetFieldNames(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Impl_MemopsRoot_GetFullKey(Impl_MemopsRoot self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetHolderStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getHolderStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getHolderStores' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetInConstructor(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.instrumentStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetInstrumentStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getInstrumentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getInstrumentStores' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetIsDeleted(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetIsLoaded(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.isModifiable

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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetIsModifiable(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetIsModified(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetIsReading(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.keywordDefinitionStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetKeywordDefinitionStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinitionStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getKeywordDefinitionStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getKeywordDefinitionStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.labeledMolecules

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetLabeledMolecules(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getLabeledMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getLabeledMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetLabelingSchemes(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabelingSchemes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getLabelingSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getLabelingSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetLastUnlockedBy(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @returns  Local object key
**/
ApiObject Impl_MemopsRoot_GetLocalKey(Impl_MemopsRoot self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetLocationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetMethodStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethodStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getMethodStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getMethodStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.molSystemSymmetrySets

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetMolSystemSymmetrySets(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemSymmetrySets");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getMolSystemSymmetrySets'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getMolSystemSymmetrySets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetMolSystems(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetMolecules(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.name

Memops root name - used 
in naming files etc
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nameMappingStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNameMappingStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNameMappingStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNameMappingStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNameMappingStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrCalcStores

child link to 
class NmrCalcStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrCalcStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrCalcStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrCalcStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrCalcStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrConstraintStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrConstraintStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrEntryStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrEntryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrEntryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrExpPrototypes

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrExpPrototypes(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpPrototypes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrExpPrototypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrExpPrototypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrProjects(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrReferenceStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrReferenceStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrReferenceStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrReferenceStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrReferenceStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetNmrSimStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getNmrSimStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getNmrSimStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.override

Override switch - 
switches off validity and constraint checking. NB anyone setting 
override takes reponsibility for unsetting it again and ensuring that 
the final result is valid. It is strongly recommended to check the 
validity of any changes afterwards. NBNB TBD we need to prevent the 
storing of override=True data somehow.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiBoolean Impl_MemopsRoot_GetOverride(Impl_MemopsRoot self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getOverride' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link packageLocator
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Impl_PackageLocator Impl_MemopsRoot_GetPackageLocator(Impl_MemopsRoot self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getPackageLocator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.packageLocators

child link to 
class PackageLocator
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetPackageLocators(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocators");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getPackageLocators'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getPackageLocators' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetPackageName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getPackageName' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetPackageShortName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.parent

link to parent object - 
returns None
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Impl_MemopsRoot Impl_MemopsRoot_GetParent(Impl_MemopsRoot self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetProtocolStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getProtocolStores' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiString Impl_MemopsRoot_GetQualifiedName(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.refSampleComponentStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetRefSampleComponentStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleComponentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getRefSampleComponentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getRefSampleComponentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetRepositories(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getRepositories' is not callable");
  
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
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Impl_MemopsRoot Impl_MemopsRoot_GetRoot(Impl_MemopsRoot self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetSampleStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getSampleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getSampleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.stereochemistryStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetStereochemistryStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getStereochemistryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getStereochemistryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.structureEnsembles

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetStructureEnsembles(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsembles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getStructureEnsembles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetTargetStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getTargetStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getTargetStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.taxonomies

child link to class 
Taxonomy
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetTaxonomies(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTaxonomies");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getTaxonomies'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getTaxonomies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ImplementationObject.topObject

TopObject 
- topmost parent in package.
  @param  Impl_MemopsRoot self
  @returns   the result
**/
Impl_MemopsRoot Impl_MemopsRoot_GetTopObject(Impl_MemopsRoot self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.topObjects

All TopObjects of 
whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetTopObjects(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getTopObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getTopObjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsRoot.validationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiSet Impl_MemopsRoot_GetValidationStores(Impl_MemopsRoot self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'getValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'getValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Load data from file, without triggering any other loads. If the guid or 
code of the file TopObject are already in memory you will get an error. 
The loaded file will be saved in the first repository on the search 
path, overriding anything that might be there already
  @param  Impl_MemopsRoot self
  @param  ApiString filePath
  @returns  
**/
Impl_TopObject Impl_MemopsRoot_ImportData(Impl_MemopsRoot self, ApiString filePath)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "importData");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'importData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'importData' is not callable");
  
  args = PyTuple_Pack(1, filePath);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.MemopsRoot
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_MemopsRoot Impl_MemopsRoot_Init(ApiMap attrlinks)
{
  
  Impl_MemopsRoot  obj;
  PyObject *module, *moduleDict, *clazz, *args;
  
  if (!Py_IsInitialized())
    Py_Initialize();
  
  module = PyImport_ImportModule("memops.api.Implementation");
  if (!module)
    return raiseApiException("memops.Implementation.MemopsRoot.init: cannot find module memops.api.Implementation");
  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("memops.Implementation.MemopsRoot.init: cannot find dict for memops.api.Implementation");
  clazz = PyDict_GetItemString(moduleDict, "MemopsRoot");
  if (!clazz)
    return raiseApiException("memops.Implementation.MemopsRoot.init: cannot find memops.api.Implementation.MemopsRoot");
  
  args = PyTuple_Pack(0);
  obj = PyObject_Call(clazz, args, attrlinks);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.MemopsRoot
  @param  char * name
  @returns  the new object
**/
Impl_MemopsRoot Impl_MemopsRoot_Init_reqd(char * name)
{
  
  Impl_MemopsRoot  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_Init(attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.AccessControlStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_AccessControlStore Impl_MemopsRoot_NewAccessControlStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAccessControlStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.AccessControlStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Acco_AccessControlStore Impl_MemopsRoot_NewAccessControlStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Acco_AccessControlStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewAccessControlStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Affiliation.AffiliationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Affi_AffiliationStore Impl_MemopsRoot_NewAffiliationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Affi_AffiliationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAffiliationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAffiliationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAffiliationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Affiliation.AffiliationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Affi_AffiliationStore Impl_MemopsRoot_NewAffiliationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Affi_AffiliationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewAffiliationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_AnalysisProfile Impl_MemopsRoot_NewAnalysisProfile(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisProfile");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAnalysisProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Anap_AnalysisProfile Impl_MemopsRoot_NewAnalysisProfile_reqd(Impl_MemopsRoot self, char * name)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewAnalysisProfile(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisProject
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisProject Impl_MemopsRoot_NewAnalysisProject(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAnalysisProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisProject
  @param  Impl_MemopsRoot self
  @param  char * name
  @param  Nmr_NmrProject nmrProject
  @returns  the new object
**/
Anal_AnalysisProject Impl_MemopsRoot_NewAnalysisProject_reqd(Impl_MemopsRoot self, char * name, Nmr_NmrProject nmrProject)
{
  
  Anal_AnalysisProject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "nmrProject", nmrProject);
  
  obj = Impl_MemopsRoot_NewAnalysisProject(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_NewAnnealProtocolStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAnnealProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Anpr_AnnealProtocolStore Impl_MemopsRoot_NewAnnealProtocolStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewAnnealProtocolStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.AnnotationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_AnnotationStore Impl_MemopsRoot_NewAnnotationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnnotationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newAnnotationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.AnnotationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Anno_AnnotationStore Impl_MemopsRoot_NewAnnotationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Anno_AnnotationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewAnnotationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemCompCharge Impl_MemopsRoot_NewChemCompCharge(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompCharge");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newChemCompCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Impl_MemopsRoot self
  @param  char * ccpCode
  @param  char * molType
  @param  char * sourceName
  @returns  the new object
**/
Ccca_ChemCompCharge Impl_MemopsRoot_NewChemCompCharge_reqd(Impl_MemopsRoot self, char * ccpCode, char * molType, char * sourceName)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Impl_MemopsRoot_NewChemCompCharge(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemCompCoord Impl_MemopsRoot_NewChemCompCoord(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompCoord");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newChemCompCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot self
  @param  char * ccpCode
  @param  char * molType
  @param  char * sourceName
  @returns  the new object
**/
Ccco_ChemCompCoord Impl_MemopsRoot_NewChemCompCoord_reqd(Impl_MemopsRoot self, char * ccpCode, char * molType, char * sourceName)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Impl_MemopsRoot_NewChemCompCoord(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemElement.ChemElementStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chel_ChemElementStore Impl_MemopsRoot_NewChemElementStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Chel_ChemElementStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemElementStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newChemElementStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newChemElementStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemElement.ChemElementStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Chel_ChemElementStore Impl_MemopsRoot_NewChemElementStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Chel_ChemElementStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewChemElementStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Citation.CitationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cita_CitationStore Impl_MemopsRoot_NewCitationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCitationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newCitationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Citation.CitationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Cita_CitationStore Impl_MemopsRoot_NewCitationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Cita_CitationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewCitationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.Classification
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_Classification Impl_MemopsRoot_NewClassification(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newClassification");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.Classification
  @param  Impl_MemopsRoot self
  @param  char * namingSystem
  @returns  the new object
**/
Clas_Classification Impl_MemopsRoot_NewClassification_reqd(Impl_MemopsRoot self, char * namingSystem)
{
  
  Clas_Classification  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__namingSystem = ApiString_New(namingSystem);

  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  
  obj = Impl_MemopsRoot_NewClassification(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__namingSystem);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_CrystallizationStore Impl_MemopsRoot_NewCrystallizationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCrystallizationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Cryz_CrystallizationStore Impl_MemopsRoot_NewCrystallizationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewCrystallizationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleStore Impl_MemopsRoot_NewDangleStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDangleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newDangleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newDangleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Dang_DangleStore Impl_MemopsRoot_NewDangleStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Dang_DangleStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewDangleStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.DataLocationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_DataLocationStore Impl_MemopsRoot_NewDataLocationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.DataLocationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Dloc_DataLocationStore Impl_MemopsRoot_NewDataLocationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewDataLocationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.DbRef.Database
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dbr_Database Impl_MemopsRoot_NewDatabase(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Dbr_Database obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDatabase");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newDatabase'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newDatabase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DbRef.Database
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Dbr_Database Impl_MemopsRoot_NewDatabase_reqd(Impl_MemopsRoot self, char * name)
{
  
  Dbr_Database  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewDatabase(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_NewExpBlueprintStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpBlueprintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newExpBlueprintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newExpBlueprintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Expb_ExpBlueprintStore Impl_MemopsRoot_NewExpBlueprintStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewExpBlueprintStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_ExperimentStore Impl_MemopsRoot_NewExperimentStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExperimentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newExperimentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Expe_ExperimentStore Impl_MemopsRoot_NewExperimentStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Expe_ExperimentStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewExperimentStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  get new globally unique identifier
  @param  Impl_MemopsRoot self
  @returns  
**/
ApiString Impl_MemopsRoot_NewGuid(Impl_MemopsRoot self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newGuid");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderStore Impl_MemopsRoot_NewHolderStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolderStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newHolderStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Hold_HolderStore Impl_MemopsRoot_NewHolderStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Hold_HolderStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewHolderStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Instrument.InstrumentStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Inst_InstrumentStore Impl_MemopsRoot_NewInstrumentStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newInstrumentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Instrument.InstrumentStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Inst_InstrumentStore Impl_MemopsRoot_NewInstrumentStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Inst_InstrumentStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewInstrumentStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create 
ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_NewKeywordDefinitionStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newKeywordDefinitionStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newKeywordDefinitionStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newKeywordDefinitionStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Impl_MemopsRoot self
  @param  char * context
  @returns  the new object
**/
Kwdf_KeywordDefinitionStore Impl_MemopsRoot_NewKeywordDefinitionStore_reqd(Impl_MemopsRoot self, char * context)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);

  PyDict_SetItemString(attrlinks, "context", api__context);
  
  obj = Impl_MemopsRoot_NewKeywordDefinitionStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.LabeledMolecule
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_LabeledMolecule Impl_MemopsRoot_NewLabeledMolecule(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLabeledMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newLabeledMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.LabeledMolecule
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Lmol_LabeledMolecule Impl_MemopsRoot_NewLabeledMolecule_reqd(Impl_MemopsRoot self, char * name)
{
  
  Lmol_LabeledMolecule  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewLabeledMolecule(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.LabelingScheme
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cclb_LabelingScheme Impl_MemopsRoot_NewLabelingScheme(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLabelingScheme");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newLabelingScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.LabelingScheme
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Cclb_LabelingScheme Impl_MemopsRoot_NewLabelingScheme_reqd(Impl_MemopsRoot self, char * name)
{
  
  Cclb_LabelingScheme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewLabelingScheme(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Location.LocationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Loca_LocationStore Impl_MemopsRoot_NewLocationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Loca_LocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Location.LocationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Loca_LocationStore Impl_MemopsRoot_NewLocationStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Loca_LocationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewLocationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Method.MethodStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Meth_MethodStore Impl_MemopsRoot_NewMethodStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Meth_MethodStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMethodStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newMethodStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newMethodStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Method.MethodStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Meth_MethodStore Impl_MemopsRoot_NewMethodStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Meth_MethodStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewMethodStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.MolSystem
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_MolSystem Impl_MemopsRoot_NewMolSystem(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolSystem");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.MolSystemSymmetrySet
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_NewMolSystemSymmetrySet(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolSystemSymmetrySet");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newMolSystemSymmetrySet'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newMolSystemSymmetrySet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.MolSystemSymmetrySet
  @param  Impl_MemopsRoot self
  @param  Mols_MolSystem molSystem
  @param  ApiInteger symmetrySetId
  @returns  the new object
**/
Symm_MolSystemSymmetrySet Impl_MemopsRoot_NewMolSystemSymmetrySet_reqd(Impl_MemopsRoot self, Mols_MolSystem molSystem, ApiInteger symmetrySetId)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  PyDict_SetItemString(attrlinks, "symmetrySetId", symmetrySetId);
  
  obj = Impl_MemopsRoot_NewMolSystemSymmetrySet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.MolSystem
  @param  Impl_MemopsRoot self
  @param  char * code
  @returns  the new object
**/
Mols_MolSystem Impl_MemopsRoot_NewMolSystem_reqd(Impl_MemopsRoot self, char * code)
{
  
  Mols_MolSystem  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  
  obj = Impl_MemopsRoot_NewMolSystem(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_Molecule Impl_MemopsRoot_NewMolecule(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Mole_Molecule Impl_MemopsRoot_NewMolecule_reqd(Impl_MemopsRoot self, char * name)
{
  
  Mole_Molecule  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewMolecule(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.NameMappingStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_NameMappingStore Impl_MemopsRoot_NewNameMappingStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nmap_NameMappingStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNameMappingStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNameMappingStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNameMappingStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.NameMappingStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Nmap_NameMappingStore Impl_MemopsRoot_NewNameMappingStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Nmap_NameMappingStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewNameMappingStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_NmrCalcStore Impl_MemopsRoot_NewNmrCalcStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrCalcStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrCalcStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrCalcStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.NmrCalcStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @param  Nmr_NmrProject nmrProject
  @returns  the new object
**/
Calc_NmrCalcStore Impl_MemopsRoot_NewNmrCalcStore_reqd(Impl_MemopsRoot self, char * name, Nmr_NmrProject nmrProject)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "nmrProject", nmrProject);
  
  obj = Impl_MemopsRoot_NewNmrCalcStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.NmrConstraintStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_NewNmrConstraintStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrConstraintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.NmrConstraintStore
  @param  Impl_MemopsRoot self
  @param  Nmr_NmrProject nmrProject
  @returns  the new object
**/
Nmrc_NmrConstraintStore Impl_MemopsRoot_NewNmrConstraintStore_reqd(Impl_MemopsRoot self, Nmr_NmrProject nmrProject)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "nmrProject", nmrProject);
  
  obj = Impl_MemopsRoot_NewNmrConstraintStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.NmrEntryStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_NmrEntryStore Impl_MemopsRoot_NewNmrEntryStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrEntryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrEntryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.NmrEntryStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Entr_NmrEntryStore Impl_MemopsRoot_NewNmrEntryStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Entr_NmrEntryStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewNmrEntryStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_NewNmrExpPrototype(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrExpPrototype");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrExpPrototype' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Impl_MemopsRoot self
  @param  char * category
  @param  char * name
  @returns  the new object
**/
Nmrx_NmrExpPrototype Impl_MemopsRoot_NewNmrExpPrototype_reqd(Impl_MemopsRoot self, char * category, char * name)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__category = ApiString_New(category);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "category", api__category);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewNmrExpPrototype(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__category);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NmrProject
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_NmrProject Impl_MemopsRoot_NewNmrProject(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NmrProject
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Nmr_NmrProject Impl_MemopsRoot_NewNmrProject_reqd(Impl_MemopsRoot self, char * name)
{
  
  Nmr_NmrProject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewNmrProject(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.NmrReferenceStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_NewNmrReferenceStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrReferenceStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrReferenceStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrReferenceStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.NmrReferenceStore
  @param  Impl_MemopsRoot self
  @param  char * ccpCode
  @param  char * molType
  @returns  the new object
**/
Nmrr_NmrReferenceStore Impl_MemopsRoot_NewNmrReferenceStore_reqd(Impl_MemopsRoot self, char * ccpCode, char * molType)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Impl_MemopsRoot_NewNmrReferenceStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.NmrSimStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_NmrSimStore Impl_MemopsRoot_NewNmrSimStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrSimStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNmrSimStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNmrSimStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.NmrSimStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Nsim_NmrSimStore Impl_MemopsRoot_NewNmrSimStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewNmrSimStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_NonStdChemComp Impl_MemopsRoot_NewNonStdChemComp(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Chem_NonStdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNonStdChemComp");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newNonStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newNonStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot self
  @returns  the new object
**/
Chem_NonStdChemComp Impl_MemopsRoot_NewNonStdChemComp_reqd(Impl_MemopsRoot self)
{
  
  Chem_NonStdChemComp  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Impl_MemopsRoot_NewNonStdChemComp(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create memops.Implementation.PackageLocator
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_PackageLocator Impl_MemopsRoot_NewPackageLocator(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPackageLocator");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newPackageLocator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.Implementation.PackageLocator
  @param  Impl_MemopsRoot self
  @param  ApiList repositories
  @returns  the new object
**/
Impl_PackageLocator Impl_MemopsRoot_NewPackageLocator_reqd(Impl_MemopsRoot self, ApiList repositories)
{
  
  Impl_PackageLocator  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "repositories", repositories);
  
  obj = Impl_MemopsRoot_NewPackageLocator(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.ProtocolStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_ProtocolStore Impl_MemopsRoot_NewProtocolStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Prot_ProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.ProtocolStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Prot_ProtocolStore Impl_MemopsRoot_NewProtocolStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Prot_ProtocolStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewProtocolStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_NewRefSampleComponentStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newRefSampleComponentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Refs_RefSampleComponentStore Impl_MemopsRoot_NewRefSampleComponentStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewRefSampleComponentStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.Implementation.Repository
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_Repository Impl_MemopsRoot_NewRepository(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.Implementation.Repository
  @param  Impl_MemopsRoot self
  @param  char * name
  @param  Impl_Url url
  @returns  the new object
**/
Impl_Repository Impl_MemopsRoot_NewRepository_reqd(Impl_MemopsRoot self, char * name, Impl_Url url)
{
  
  Impl_Repository  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "url", url);
  
  obj = Impl_MemopsRoot_NewRepository(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.SampleStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_SampleStore Impl_MemopsRoot_NewSampleStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newSampleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.SampleStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Sam_SampleStore Impl_MemopsRoot_NewSampleStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Sam_SampleStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewSampleStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.StdChemComp
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_StdChemComp Impl_MemopsRoot_NewStdChemComp(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Chem_StdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStdChemComp");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.StdChemComp
  @param  Impl_MemopsRoot self
  @param  char * code1Letter
  @param  char * stdChemCompCode
  @returns  the new object
**/
Chem_StdChemComp Impl_MemopsRoot_NewStdChemComp_reqd(Impl_MemopsRoot self, char * code1Letter, char * stdChemCompCode)
{
  
  Chem_StdChemComp  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code1Letter = ApiString_New(code1Letter);
  ApiString api__stdChemCompCode = ApiString_New(stdChemCompCode);

  PyDict_SetItemString(attrlinks, "code1Letter", api__code1Letter);
  PyDict_SetItemString(attrlinks, "stdChemCompCode", api__stdChemCompCode);
  
  obj = Impl_MemopsRoot_NewStdChemComp(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code1Letter);
  Py_DECREF(api__stdChemCompCode);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.Stereochemistry.StereochemistryStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ster_StereochemistryStore Impl_MemopsRoot_NewStereochemistryStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Ster_StereochemistryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStereochemistryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newStereochemistryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newStereochemistryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.Stereochemistry.StereochemistryStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Ster_StereochemistryStore Impl_MemopsRoot_NewStereochemistryStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Ster_StereochemistryStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewStereochemistryStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.StructureEnsemble
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_StructureEnsemble Impl_MemopsRoot_NewStructureEnsemble(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStructureEnsemble");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newStructureEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.StructureEnsemble
  @param  Impl_MemopsRoot self
  @param  ApiInteger ensembleId
  @param  Mols_MolSystem molSystem
  @returns  the new object
**/
Coor_StructureEnsemble Impl_MemopsRoot_NewStructureEnsemble_reqd(Impl_MemopsRoot self, ApiInteger ensembleId, Mols_MolSystem molSystem)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "ensembleId", ensembleId);
  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  
  obj = Impl_MemopsRoot_NewStructureEnsemble(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_TargetStore Impl_MemopsRoot_NewTargetStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTargetStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newTargetStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Targ_TargetStore Impl_MemopsRoot_NewTargetStore_reqd(Impl_MemopsRoot self, char * name)
{
  
  Targ_TargetStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewTargetStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Taxo_Taxonomy Impl_MemopsRoot_NewTaxonomy(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTaxonomy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newTaxonomy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newTaxonomy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot self
  @param  char * name
  @returns  the new object
**/
Taxo_Taxonomy Impl_MemopsRoot_NewTaxonomy_reqd(Impl_MemopsRoot self, char * name)
{
  
  Taxo_Taxonomy  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Impl_MemopsRoot_NewTaxonomy(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Validation.ValidationStore
  @param  Impl_MemopsRoot self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_ValidationStore Impl_MemopsRoot_NewValidationStore(Impl_MemopsRoot self, ApiMap attrlinks)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newValidationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'newValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'newValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Validation.ValidationStore
  @param  Impl_MemopsRoot self
  @param  char * name
  @param  Meth_Software software
  @returns  the new object
**/
Vald_ValidationStore Impl_MemopsRoot_NewValidationStore_reqd(Impl_MemopsRoot self, char * name, Meth_Software software)
{
  
  Vald_ValidationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "software", software);
  
  obj = Impl_MemopsRoot_NewValidationStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Check on disk to make sure all topObjects in package packageName are 
present.
  @param  Impl_MemopsRoot self
  @param  ApiString packageName
**/
void *Impl_MemopsRoot_RefreshTopObjects(Impl_MemopsRoot self, ApiString packageName)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "refreshTopObjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'refreshTopObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'refreshTopObjects' is not callable");
  
  args = PyTuple_Pack(1, packageName);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove data from specified repository. Will remove from disk. NB This 
operation is marked as a query because this means it may be executed on 
a deleted object. It does have the lasting side effect of changing the 
contents of the repository.
  @param  Impl_MemopsRoot self
  @param  Impl_Repository repository
**/
void *Impl_MemopsRoot_RemoveFrom(Impl_MemopsRoot self, Impl_Repository repository)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFrom");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'removeFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'removeFrom' is not callable");
  
  args = PyTuple_Pack(1, repository);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Save data corresponding to TopObject
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_Save(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "save");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'save'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'save' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  force save of all data
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_SaveAll(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "saveAll");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'saveAll'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'saveAll' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Save all modified data
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_SaveModified(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "saveModified");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'saveModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'saveModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Save topObject to specified repository
  @param  Impl_MemopsRoot self
  @param  Impl_Repository repository
**/
void *Impl_MemopsRoot_SaveTo(Impl_MemopsRoot self, Impl_Repository repository)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "saveTo");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'saveTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'saveTo' is not callable");
  
  args = PyTuple_Pack(1, repository);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.MemopsRoot
  @param  Impl_MemopsRoot self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_MemopsRoot_Set(Impl_MemopsRoot self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.MemopsRoot.accessControlOn

Is access 
control active?
  @param  Impl_MemopsRoot self
  @param  ApiBoolean value
**/
void *Impl_MemopsRoot_SetAccessControlOn(Impl_MemopsRoot self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccessControlOn");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setAccessControlOn'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setAccessControlOn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.createdBy

user who created 
TopObject.
  @param  Impl_MemopsRoot self
  @param  ApiString value
**/
void *Impl_MemopsRoot_SetCreatedBy(Impl_MemopsRoot self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentAccessControlStore

current 
accessControlStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Acco_AccessControlStore value
**/
void *Impl_MemopsRoot_SetCurrentAccessControlStore(Impl_MemopsRoot self, Acco_AccessControlStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAccessControlStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentAffiliationStore

current 
affiliationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Affi_AffiliationStore value
**/
void *Impl_MemopsRoot_SetCurrentAffiliationStore(Impl_MemopsRoot self, Affi_AffiliationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAffiliationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAffiliationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAffiliationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentAnalysisProfile

current 
analysisProfile - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Anap_AnalysisProfile value
**/
void *Impl_MemopsRoot_SetCurrentAnalysisProfile(Impl_MemopsRoot self, Anap_AnalysisProfile value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAnalysisProfile");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAnalysisProfile' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentAnalysisProject

current 
analysisProject - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Anal_AnalysisProject value
**/
void *Impl_MemopsRoot_SetCurrentAnalysisProject(Impl_MemopsRoot self, Anal_AnalysisProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAnalysisProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAnalysisProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentAnnealProtocolStore

current 
annealProtocolStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Anpr_AnnealProtocolStore value
**/
void *Impl_MemopsRoot_SetCurrentAnnealProtocolStore(Impl_MemopsRoot self, Anpr_AnnealProtocolStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAnnealProtocolStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentAnnotationStore

current 
annotationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Anno_AnnotationStore value
**/
void *Impl_MemopsRoot_SetCurrentAnnotationStore(Impl_MemopsRoot self, Anno_AnnotationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAnnotationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentAnnotationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentChemComp

current 
chemComp - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Chem_ChemComp value
**/
void *Impl_MemopsRoot_SetCurrentChemComp(Impl_MemopsRoot self, Chem_ChemComp value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentChemComp");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentChemComp' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentChemCompCharge

current 
chemCompCharge - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Ccca_ChemCompCharge value
**/
void *Impl_MemopsRoot_SetCurrentChemCompCharge(Impl_MemopsRoot self, Ccca_ChemCompCharge value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentChemCompCharge");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentChemCompCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentChemCompCoord

current 
chemCompCoord - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Ccco_ChemCompCoord value
**/
void *Impl_MemopsRoot_SetCurrentChemCompCoord(Impl_MemopsRoot self, Ccco_ChemCompCoord value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentChemCompCoord");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentChemCompCoord' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentChemElementStore

current 
chemElementStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Chel_ChemElementStore value
**/
void *Impl_MemopsRoot_SetCurrentChemElementStore(Impl_MemopsRoot self, Chel_ChemElementStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentChemElementStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentChemElementStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentChemElementStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentCitationStore

current 
citationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Cita_CitationStore value
**/
void *Impl_MemopsRoot_SetCurrentCitationStore(Impl_MemopsRoot self, Cita_CitationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentCitationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentCitationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentClassification

current 
classification - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Clas_Classification value
**/
void *Impl_MemopsRoot_SetCurrentClassification(Impl_MemopsRoot self, Clas_Classification value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentClassification");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentClassification' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentCrystallizationStore

current 
crystallizationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Cryz_CrystallizationStore value
**/
void *Impl_MemopsRoot_SetCurrentCrystallizationStore(Impl_MemopsRoot self, Cryz_CrystallizationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentCrystallizationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentCrystallizationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentDangleStore

current 
dangleStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Dang_DangleStore value
**/
void *Impl_MemopsRoot_SetCurrentDangleStore(Impl_MemopsRoot self, Dang_DangleStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentDangleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentDangleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentDangleStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentDataLocationStore

current 
dataLocationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Dloc_DataLocationStore value
**/
void *Impl_MemopsRoot_SetCurrentDataLocationStore(Impl_MemopsRoot self, Dloc_DataLocationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentDataLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentDataLocationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentDatabase

current 
database - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Dbr_Database value
**/
void *Impl_MemopsRoot_SetCurrentDatabase(Impl_MemopsRoot self, Dbr_Database value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentDatabase");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentDatabase'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentDatabase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentExpBlueprintStore

current 
expBlueprintStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Expb_ExpBlueprintStore value
**/
void *Impl_MemopsRoot_SetCurrentExpBlueprintStore(Impl_MemopsRoot self, Expb_ExpBlueprintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentExpBlueprintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentExpBlueprintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentExpBlueprintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentExperimentStore

current 
experimentStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Expe_ExperimentStore value
**/
void *Impl_MemopsRoot_SetCurrentExperimentStore(Impl_MemopsRoot self, Expe_ExperimentStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentExperimentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentExperimentStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentGroupName

name of 
current group. Used for access control, record of who creates and 
modifies objects, etc.
  @param  Impl_MemopsRoot self
  @param  ApiString value
**/
void *Impl_MemopsRoot_SetCurrentGroupName(Impl_MemopsRoot self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentGroupName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentGroupName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentGroupName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentHolderStore

current 
holderStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Hold_HolderStore value
**/
void *Impl_MemopsRoot_SetCurrentHolderStore(Impl_MemopsRoot self, Hold_HolderStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentHolderStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentHolderStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentInstrumentStore

current 
instrumentStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Inst_InstrumentStore value
**/
void *Impl_MemopsRoot_SetCurrentInstrumentStore(Impl_MemopsRoot self, Inst_InstrumentStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentInstrumentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentInstrumentStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentKeywordDefinitionStore

current 
keywordDefinitionStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Kwdf_KeywordDefinitionStore value
**/
void *Impl_MemopsRoot_SetCurrentKeywordDefinitionStore(Impl_MemopsRoot self, Kwdf_KeywordDefinitionStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentKeywordDefinitionStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentKeywordDefinitionStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentKeywordDefinitionStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentLabeledMolecule

current 
labeledMolecule - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Lmol_LabeledMolecule value
**/
void *Impl_MemopsRoot_SetCurrentLabeledMolecule(Impl_MemopsRoot self, Lmol_LabeledMolecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentLabeledMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentLabeledMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentLabelingScheme

current 
labelingScheme - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Cclb_LabelingScheme value
**/
void *Impl_MemopsRoot_SetCurrentLabelingScheme(Impl_MemopsRoot self, Cclb_LabelingScheme value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentLabelingScheme");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentLabelingScheme' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentLocationStore

current 
locationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Loca_LocationStore value
**/
void *Impl_MemopsRoot_SetCurrentLocationStore(Impl_MemopsRoot self, Loca_LocationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentLocationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentLocationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentMethodStore

current 
methodStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Meth_MethodStore value
**/
void *Impl_MemopsRoot_SetCurrentMethodStore(Impl_MemopsRoot self, Meth_MethodStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentMethodStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentMethodStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentMethodStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentMolSystem

current 
molSystem - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Mols_MolSystem value
**/
void *Impl_MemopsRoot_SetCurrentMolSystem(Impl_MemopsRoot self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentMolSystem");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentMolSystemSymmetrySet

current 
molSystemSymmetrySet - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Symm_MolSystemSymmetrySet value
**/
void *Impl_MemopsRoot_SetCurrentMolSystemSymmetrySet(Impl_MemopsRoot self, Symm_MolSystemSymmetrySet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentMolSystemSymmetrySet");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentMolSystemSymmetrySet'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentMolSystemSymmetrySet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentMolecule

current 
molecule - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Mole_Molecule value
**/
void *Impl_MemopsRoot_SetCurrentMolecule(Impl_MemopsRoot self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentMolecule");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentNameMappingStore

current 
nameMappingStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nmap_NameMappingStore value
**/
void *Impl_MemopsRoot_SetCurrentNameMappingStore(Impl_MemopsRoot self, Nmap_NameMappingStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNameMappingStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNameMappingStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNameMappingStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentNmrCalcStore

current 
nmrCalcStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Calc_NmrCalcStore value
**/
void *Impl_MemopsRoot_SetCurrentNmrCalcStore(Impl_MemopsRoot self, Calc_NmrCalcStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrCalcStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrCalcStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrCalcStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentNmrConstraintStore

current 
nmrConstraintStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nmrc_NmrConstraintStore value
**/
void *Impl_MemopsRoot_SetCurrentNmrConstraintStore(Impl_MemopsRoot self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrConstraintStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentNmrEntryStore

current 
nmrEntryStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Entr_NmrEntryStore value
**/
void *Impl_MemopsRoot_SetCurrentNmrEntryStore(Impl_MemopsRoot self, Entr_NmrEntryStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrEntryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrEntryStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentNmrExpPrototype

current 
nmrExpPrototype - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nmrx_NmrExpPrototype value
**/
void *Impl_MemopsRoot_SetCurrentNmrExpPrototype(Impl_MemopsRoot self, Nmrx_NmrExpPrototype value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrExpPrototype");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrExpPrototype' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentNmrProject

current 
nmrProject - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nmr_NmrProject value
**/
void *Impl_MemopsRoot_SetCurrentNmrProject(Impl_MemopsRoot self, Nmr_NmrProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrProject");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentNmrReferenceStore

current 
nmrReferenceStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nmrr_NmrReferenceStore value
**/
void *Impl_MemopsRoot_SetCurrentNmrReferenceStore(Impl_MemopsRoot self, Nmrr_NmrReferenceStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrReferenceStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrReferenceStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrReferenceStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentNmrSimStore

current 
nmrSimStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Nsim_NmrSimStore value
**/
void *Impl_MemopsRoot_SetCurrentNmrSimStore(Impl_MemopsRoot self, Nsim_NmrSimStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentNmrSimStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentNmrSimStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentNmrSimStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentProtocolStore

current 
protocolStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Prot_ProtocolStore value
**/
void *Impl_MemopsRoot_SetCurrentProtocolStore(Impl_MemopsRoot self, Prot_ProtocolStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentProtocolStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentProtocolStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentRefSampleComponentStore

current 
refSampleComponentStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Refs_RefSampleComponentStore value
**/
void *Impl_MemopsRoot_SetCurrentRefSampleComponentStore(Impl_MemopsRoot self, Refs_RefSampleComponentStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentRefSampleComponentStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentSampleStore

current 
sampleStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Sam_SampleStore value
**/
void *Impl_MemopsRoot_SetCurrentSampleStore(Impl_MemopsRoot self, Sam_SampleStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentSampleStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentSampleStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentStereochemistryStore

current 
stereochemistryStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Ster_StereochemistryStore value
**/
void *Impl_MemopsRoot_SetCurrentStereochemistryStore(Impl_MemopsRoot self, Ster_StereochemistryStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentStereochemistryStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentStereochemistryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentStereochemistryStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.MemopsRoot.currentStructureEnsemble

current 
structureEnsemble - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Coor_StructureEnsemble value
**/
void *Impl_MemopsRoot_SetCurrentStructureEnsemble(Impl_MemopsRoot self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentStructureEnsemble");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentStructureEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentTargetStore

current 
targetStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Targ_TargetStore value
**/
void *Impl_MemopsRoot_SetCurrentTargetStore(Impl_MemopsRoot self, Targ_TargetStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentTargetStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentTargetStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentTaxonomy

current 
taxonomy - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Taxo_Taxonomy value
**/
void *Impl_MemopsRoot_SetCurrentTaxonomy(Impl_MemopsRoot self, Taxo_Taxonomy value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentTaxonomy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentTaxonomy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentTaxonomy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentUserId

user Id for 
current user. Used for access control, record of who creates and 
modifies objects, etc.
  @param  Impl_MemopsRoot self
  @param  ApiString value
**/
void *Impl_MemopsRoot_SetCurrentUserId(Impl_MemopsRoot self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentUserId");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentUserId'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentUserId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.currentValidationStore

current 
validationStore - may be reset by implementation.
  @param  Impl_MemopsRoot self
  @param  Vald_ValidationStore value
**/
void *Impl_MemopsRoot_SetCurrentValidationStore(Impl_MemopsRoot self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentValidationStore");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setCurrentValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setCurrentValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Special setter for isModifiable. Sets lastUnlockedBy
  @param  Impl_MemopsRoot self
  @param  ApiBoolean value
**/
void *Impl_MemopsRoot_SetIsModifiable(Impl_MemopsRoot self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Impl_MemopsRoot self
  @param  ApiString value
**/
void *Impl_MemopsRoot_SetLastUnlockedBy(Impl_MemopsRoot self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.name

Memops root name - used 
in naming files etc
  @param  Impl_MemopsRoot self
  @param  ApiString value
**/
void *Impl_MemopsRoot_SetName(Impl_MemopsRoot self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.MemopsRoot.override

Override switch - 
switches off validity and constraint checking. NB anyone setting 
override takes reponsibility for unsetting it again and ensuring that 
the final result is valid. It is strongly recommended to check the 
validity of any changes afterwards. NBNB TBD we need to prevent the 
storing of override=True data somehow.
  @param  Impl_MemopsRoot self
  @param  ApiBoolean value
**/
void *Impl_MemopsRoot_SetOverride(Impl_MemopsRoot self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'setOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'setOverride' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.accessControlStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAccessControlStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAccessControlStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAccessControlStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAccessControlStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.affiliationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAffiliationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAffiliationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAffiliationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAffiliationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.analysisProfiles

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAnalysisProfiles(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisProfiles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAnalysisProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAnalysisProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.analysisProjects

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAnalysisProjects(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAnalysisProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAnalysisProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.annealProtocolStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAnnealProtocolStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnealProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAnnealProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAnnealProtocolStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.annotationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedAnnotationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedAnnotationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedAnnotationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.chemCompCharges

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedChemCompCharges(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompCharges");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedChemCompCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedChemCompCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.chemCompCoords

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedChemCompCoords(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompCoords");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedChemCompCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedChemCompCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.chemComps

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedChemComps(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemComps");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedChemComps'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedChemComps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.chemElementStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedChemElementStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemElementStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedChemElementStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedChemElementStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.citationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedCitationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedCitationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedCitationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.classifications

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedClassifications(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedClassifications");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedClassifications'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedClassifications' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.crystallizationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedCrystallizationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCrystallizationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedCrystallizationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedCrystallizationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.dangleStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedDangleStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedDangleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedDangleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.dataLocationStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedDataLocationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedDataLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedDataLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.databases

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedDatabases(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDatabases");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedDatabases'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedDatabases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.expBlueprintStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedExpBlueprintStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpBlueprintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedExpBlueprintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedExpBlueprintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.experimentStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedExperimentStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperimentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedExperimentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedExperimentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.holderStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedHolderStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedHolderStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedHolderStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.instrumentStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedInstrumentStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstrumentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedInstrumentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedInstrumentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
memops.Implementation.MemopsRoot.keywordDefinitionStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedKeywordDefinitionStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedKeywordDefinitionStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedKeywordDefinitionStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedKeywordDefinitionStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.labeledMolecules

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedLabeledMolecules(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabeledMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedLabeledMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedLabeledMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.labelingSchemes

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedLabelingSchemes(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabelingSchemes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedLabelingSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedLabelingSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.locationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedLocationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLocationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedLocationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedLocationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.methodStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedMethodStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMethodStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedMethodStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedMethodStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.molSystemSymmetrySets

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedMolSystemSymmetrySets(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystemSymmetrySets");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedMolSystemSymmetrySets'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedMolSystemSymmetrySets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.molSystems

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedMolSystems(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.molecules

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedMolecules(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolecules");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nameMappingStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNameMappingStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNameMappingStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNameMappingStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNameMappingStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrCalcStores

child link to 
class NmrCalcStore
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrCalcStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrCalcStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrCalcStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrCalcStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrConstraintStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrConstraintStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrEntryStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrEntryStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrEntryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrEntryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrEntryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrExpPrototypes

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrExpPrototypes(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrExpPrototypes");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrExpPrototypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrExpPrototypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrProjects

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrProjects(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrProjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrReferenceStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrReferenceStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrReferenceStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrReferenceStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrReferenceStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.nmrSimStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedNmrSimStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSimStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedNmrSimStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedNmrSimStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.packageLocators

child link 
to class PackageLocator
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedPackageLocators(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPackageLocators");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedPackageLocators'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedPackageLocators' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.protocolStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedProtocolStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtocolStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedProtocolStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedProtocolStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
memops.Implementation.MemopsRoot.refSampleComponentStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedRefSampleComponentStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefSampleComponentStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedRefSampleComponentStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedRefSampleComponentStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.repositories

child link to 
class Repository
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedRepositories(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.sampleStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedSampleStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedSampleStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedSampleStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.stereochemistryStores

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedStereochemistryStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistryStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedStereochemistryStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedStereochemistryStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.structureEnsembles

child 
link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedStructureEnsembles(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureEnsembles");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedStructureEnsembles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.targetStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedTargetStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedTargetStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedTargetStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.taxonomies

child link to 
class Taxonomy
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedTaxonomies(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTaxonomies");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedTaxonomies'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedTaxonomies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.topObjects

All TopObjects 
of whatever kind (not including MemopsRoot)
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedTopObjects(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTopObjects");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedTopObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedTopObjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.MemopsRoot.validationStores

child link
  @param  Impl_MemopsRoot self
  @returns   the result
**/
ApiList Impl_MemopsRoot_SortedValidationStores(Impl_MemopsRoot self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedValidationStores");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'sortedValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'sortedValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set storage.isModified to True, so that the storage is saved at the next 
saveModified command. Fails if the storage is not loaded or not 
modifiable.
  @param  Impl_MemopsRoot self
**/
void *Impl_MemopsRoot_Touch(Impl_MemopsRoot self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "touch");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsRoot: cannot find method 'touch'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsRoot: method 'touch' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
