
#include "ccp.h"

/*
  TopObject for Holder package
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderStore_AddApplicationData(Hold_HolderStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean complete
**/
void *Hold_HolderStore_CheckAllValid(Hold_HolderStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean complete
**/
void *Hold_HolderStore_CheckValid(Hold_HolderStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'checkValid' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllActiveRepositories(Hold_HolderStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllActiveRepositories_keyval0(Hold_HolderStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllActiveRepositories_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllActiveRepositories_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllActiveRepositories_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
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
ApiList Hold_HolderStore_FindAllActiveRepositories_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllApplicationData(Hold_HolderStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllApplicationData_keyval0(Hold_HolderStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllApplicationData_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllApplicationData_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderStore_FindAllApplicationData_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
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
ApiList Hold_HolderStore_FindAllApplicationData_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolderTypes(Hold_HolderStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findAllHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findAllHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolderTypes_keyval0(Hold_HolderStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindAllHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolderTypes_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindAllHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolderTypes_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindAllHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolderTypes_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindAllHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
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
ApiSet Hold_HolderStore_FindAllHolderTypes_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindAllHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolders(Hold_HolderStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findAllHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findAllHolders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolders_keyval0(Hold_HolderStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolders_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolders_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderStore_FindAllHolders_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
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
ApiSet Hold_HolderStore_FindAllHolders_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Hold_HolderStore_FindFirstActiveRepository(Hold_HolderStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval0(Hold_HolderStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
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
Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData(Hold_HolderStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval0(Hold_HolderStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
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
Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_HolderStore_FindFirstHolder(Hold_HolderStore self, ApiMap conditions)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findFirstHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findFirstHolder' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType(Hold_HolderStore self, ApiMap conditions)
{
  
  Hold_AbstractHolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'findFirstHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'findFirstHolderType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval0(Hold_HolderStore self)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindFirstHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindFirstHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindFirstHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindFirstHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
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
Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindFirstHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_HolderStore_FindFirstHolder_keyval0(Hold_HolderStore self)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderStore_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_HolderStore_FindFirstHolder_keyval1(Hold_HolderStore self, char * key, ApiObject value)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderStore_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_HolderStore_FindFirstHolder_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderStore_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_HolderStore_FindFirstHolder_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderStore_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
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
Hold_Holder Hold_HolderStore_FindFirstHolder_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderStore_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_HolderStore_Get(Hold_HolderStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderStore self
  @returns   the result
**/
Acco_AccessObject Hold_HolderStore_GetAccess(Hold_HolderStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getAccess' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiList Hold_HolderStore_GetActiveRepositories(Hold_HolderStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiList Hold_HolderStore_GetApplicationData(Hold_HolderStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_HolderStore Hold_HolderStore_GetByKey(Hold_HolderStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getByKey' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetClassName(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getClassName' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetCreatedBy(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getCreatedBy' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiList Hold_HolderStore_GetFieldNames(Hold_HolderStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Hold_HolderStore_GetFullKey(Hold_HolderStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getFullKey' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetGuid(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiSet Hold_HolderStore_GetHolderTypes(Hold_HolderStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderStore.holders

child link to class Holder
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiSet Hold_HolderStore_GetHolders(Hold_HolderStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getHolders' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetInConstructor(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getInConstructor' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetIsDeleted(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getIsDeleted' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetIsLoaded(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getIsLoaded' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetIsModifiable(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getIsModifiable' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetIsModified(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getIsModified' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiBoolean Hold_HolderStore_GetIsReading(Hold_HolderStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getIsReading' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetLastUnlockedBy(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @returns  Local object key
**/
ApiObject Hold_HolderStore_GetLocalKey(Hold_HolderStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderStore.memopsRoot

parent link
  @param  Hold_HolderStore self
  @returns   the result
**/
Impl_MemopsRoot Hold_HolderStore_GetMemopsRoot(Hold_HolderStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderStore.name

name of HolderStore
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetName(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getName' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
Impl_PackageLocator Hold_HolderStore_GetPackageLocator(Hold_HolderStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getPackageLocator' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetPackageName(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getPackageName' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetPackageShortName(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Hold_HolderStore self
  @returns   the result
**/
Impl_MemopsRoot Hold_HolderStore_GetParent(Hold_HolderStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getParent' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiString Hold_HolderStore_GetQualifiedName(Hold_HolderStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getQualifiedName' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
Impl_MemopsRoot Hold_HolderStore_GetRoot(Hold_HolderStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getRoot' is not callable");
  
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
  @param  Hold_HolderStore self
  @returns   the result
**/
Impl_TopObject Hold_HolderStore_GetTopObject(Hold_HolderStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderStore Hold_HolderStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewHolderStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Hold_HolderStore Hold_HolderStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Hold_HolderStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_HolderStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.Holder
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_Holder Hold_HolderStore_NewHolder(Hold_HolderStore self, ApiMap attrlinks)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'newHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'newHolder' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderType
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderType Hold_HolderStore_NewHolderType(Hold_HolderStore self, ApiMap attrlinks)
{
  
  Hold_HolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'newHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'newHolderType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderType
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_HolderType Hold_HolderStore_NewHolderType_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name)
{
  
  Hold_HolderType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_HolderStore_NewHolderType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.Holder
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_Holder Hold_HolderStore_NewHolder_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name)
{
  
  Hold_Holder  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_HolderStore_NewHolder(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.PinType
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_PinType Hold_HolderStore_NewPinType(Hold_HolderStore self, ApiMap attrlinks)
{
  
  Hold_PinType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPinType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'newPinType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'newPinType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.PinType
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_PinType Hold_HolderStore_NewPinType_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name)
{
  
  Hold_PinType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_HolderStore_NewPinType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderStore_RemoveApplicationData(Hold_HolderStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_HolderStore_Set(Hold_HolderStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderStore self
  @param  Acco_AccessObject value
**/
void *Hold_HolderStore_SetAccess(Hold_HolderStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setAccess' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiList values
**/
void *Hold_HolderStore_SetApplicationData(Hold_HolderStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setApplicationData' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiString value
**/
void *Hold_HolderStore_SetCreatedBy(Hold_HolderStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setCreatedBy' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiString value
**/
void *Hold_HolderStore_SetGuid(Hold_HolderStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setGuid' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiBoolean value
**/
void *Hold_HolderStore_SetIsModifiable(Hold_HolderStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setIsModifiable' is not callable");
  
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
  @param  Hold_HolderStore self
  @param  ApiString value
**/
void *Hold_HolderStore_SetLastUnlockedBy(Hold_HolderStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderStore.name

name of HolderStore
  @param  Hold_HolderStore self
  @param  ApiString value
**/
void *Hold_HolderStore_SetName(Hold_HolderStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiList Hold_HolderStore_SortedHolderTypes(Hold_HolderStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'sortedHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'sortedHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns   the result
**/
ApiList Hold_HolderStore_SortedHolders(Hold_HolderStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderStore: cannot find method 'sortedHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderStore: method 'sortedHolders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
