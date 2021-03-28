
#include "ccp.h"

/*
  TopObject for ExpBlueprint package
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  Impl_ApplicationData value
**/
void *Expb_ExpBlueprintStore_AddApplicationData(Expb_ExpBlueprintStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean complete
**/
void *Expb_ExpBlueprintStore_CheckAllValid(Expb_ExpBlueprintStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean complete
**/
void *Expb_ExpBlueprintStore_CheckValid(Expb_ExpBlueprintStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'checkValid' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval0(Expb_ExpBlueprintStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
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
ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllApplicationData(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval0(Expb_ExpBlueprintStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
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
ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findAllExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findAllExpBlueprints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval0(Expb_ExpBlueprintStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindAllExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindAllExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindAllExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindAllExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
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
ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindAllExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval0(Expb_ExpBlueprintStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
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
Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval0(Expb_ExpBlueprintStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
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
Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint(Expb_ExpBlueprintStore self, ApiMap conditions)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'findFirstExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'findFirstExpBlueprint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval0(Expb_ExpBlueprintStore self)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprintStore_FindFirstExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprintStore_FindFirstExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprintStore_FindFirstExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprintStore_FindFirstExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
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
Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprintStore_FindFirstExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expb_ExpBlueprintStore_Get(Expb_ExpBlueprintStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Acco_AccessObject Expb_ExpBlueprintStore_GetAccess(Expb_ExpBlueprintStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getAccess' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Acco_AccessObject Expb_ExpBlueprintStore_GetActiveAccess(Expb_ExpBlueprintStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getActiveAccess' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiList Expb_ExpBlueprintStore_GetActiveRepositories(Expb_ExpBlueprintStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiList Expb_ExpBlueprintStore_GetApplicationData(Expb_ExpBlueprintStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expb_ExpBlueprintStore Expb_ExpBlueprintStore_GetByKey(Expb_ExpBlueprintStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getByKey' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetClassName(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getClassName' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetCreatedBy(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiSet Expb_ExpBlueprintStore_GetExpBlueprints(Expb_ExpBlueprintStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getExpBlueprints' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiList Expb_ExpBlueprintStore_GetFieldNames(Expb_ExpBlueprintStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expb_ExpBlueprintStore_GetFullKey(Expb_ExpBlueprintStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getFullKey' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetGuid(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getGuid' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetInConstructor(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getInConstructor' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetIsDeleted(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getIsDeleted' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetIsLoaded(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getIsLoaded' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetIsModifiable(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getIsModifiable' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetIsModified(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getIsModified' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprintStore_GetIsReading(Expb_ExpBlueprintStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getIsReading' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetLastUnlockedBy(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @returns  Local object key
**/
ApiObject Expb_ExpBlueprintStore_GetLocalKey(Expb_ExpBlueprintStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.memopsRoot

parent link
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Impl_MemopsRoot Expb_ExpBlueprintStore_GetMemopsRoot(Expb_ExpBlueprintStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.name

name of 
ExdBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetName(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getName' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Impl_PackageLocator Expb_ExpBlueprintStore_GetPackageLocator(Expb_ExpBlueprintStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getPackageLocator' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetPackageName(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getPackageName' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetPackageShortName(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Impl_MemopsRoot Expb_ExpBlueprintStore_GetParent(Expb_ExpBlueprintStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getParent' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiString Expb_ExpBlueprintStore_GetQualifiedName(Expb_ExpBlueprintStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getQualifiedName' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Impl_MemopsRoot Expb_ExpBlueprintStore_GetRoot(Expb_ExpBlueprintStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getRoot' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
Impl_TopObject Expb_ExpBlueprintStore_GetTopObject(Expb_ExpBlueprintStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_ExpBlueprintStore Expb_ExpBlueprintStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewExpBlueprintStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Expb_ExpBlueprintStore Expb_ExpBlueprintStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Expb_ExpBlueprintStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Expb_ExpBlueprintStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_NewExpBlueprint(Expb_ExpBlueprintStore self, ApiMap attrlinks)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'newExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'newExpBlueprint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * commonName
  @param  char * whyChosen
  @returns  the new object
**/
Expb_ExpBlueprint Expb_ExpBlueprintStore_NewExpBlueprint_reqd(Expb_ExpBlueprintStore self, char * commonName, char * whyChosen)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__commonName = ApiString_New(commonName);
  ApiString api__whyChosen = ApiString_New(whyChosen);

  PyDict_SetItemString(attrlinks, "commonName", api__commonName);
  PyDict_SetItemString(attrlinks, "whyChosen", api__whyChosen);
  
  obj = Expb_ExpBlueprintStore_NewExpBlueprint(self, attrlinks);
  
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
  @param  Expb_ExpBlueprintStore self
  @param  Impl_ApplicationData value
**/
void *Expb_ExpBlueprintStore_RemoveApplicationData(Expb_ExpBlueprintStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expb_ExpBlueprintStore_Set(Expb_ExpBlueprintStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprintStore self
  @param  Acco_AccessObject value
**/
void *Expb_ExpBlueprintStore_SetAccess(Expb_ExpBlueprintStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setAccess' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiList values
**/
void *Expb_ExpBlueprintStore_SetApplicationData(Expb_ExpBlueprintStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setApplicationData' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
void *Expb_ExpBlueprintStore_SetCreatedBy(Expb_ExpBlueprintStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setCreatedBy' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
void *Expb_ExpBlueprintStore_SetGuid(Expb_ExpBlueprintStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setGuid' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean value
**/
void *Expb_ExpBlueprintStore_SetIsModifiable(Expb_ExpBlueprintStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setIsModifiable' is not callable");
  
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
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
void *Expb_ExpBlueprintStore_SetLastUnlockedBy(Expb_ExpBlueprintStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprintStore.name

name of 
ExdBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
void *Expb_ExpBlueprintStore_SetName(Expb_ExpBlueprintStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
ApiList Expb_ExpBlueprintStore_SortedExpBlueprints(Expb_ExpBlueprintStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: cannot find method 'sortedExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprintStore: method 'sortedExpBlueprints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
