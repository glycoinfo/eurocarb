
#include "ccp.h"

/*
  Collection of Dangle prediction data, and associated information. This class serves as TopObject. 
*/

/* package cambridge.api.Dangle */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleStore_AddApplicationData(Dang_DangleStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  ApiBoolean complete
**/
void *Dang_DangleStore_CheckAllValid(Dang_DangleStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  ApiBoolean complete
**/
void *Dang_DangleStore_CheckValid(Dang_DangleStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'checkValid' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllActiveRepositories(Dang_DangleStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllActiveRepositories_keyval0(Dang_DangleStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllActiveRepositories_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllActiveRepositories_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllActiveRepositories_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
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
ApiList Dang_DangleStore_FindAllActiveRepositories_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllApplicationData(Dang_DangleStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllApplicationData_keyval0(Dang_DangleStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllApplicationData_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllApplicationData_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleStore_FindAllApplicationData_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
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
ApiList Dang_DangleStore_FindAllApplicationData_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleStore_FindAllDangleChains(Dang_DangleStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleChains");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findAllDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findAllDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleStore_FindAllDangleChains_keyval0(Dang_DangleStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleStore_FindAllDangleChains_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleStore_FindAllDangleChains_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleStore_FindAllDangleChains_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
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
ApiSet Dang_DangleStore_FindAllDangleChains_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dang_DangleStore_FindFirstActiveRepository(Dang_DangleStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dang_DangleStore_FindFirstActiveRepository_keyval0(Dang_DangleStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dang_DangleStore_FindFirstActiveRepository_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dang_DangleStore_FindFirstActiveRepository_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dang_DangleStore_FindFirstActiveRepository_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dang_DangleStore self
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
Impl_Repository Dang_DangleStore_FindFirstActiveRepository_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData(Dang_DangleStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData_keyval0(Dang_DangleStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
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
Impl_ApplicationData Dang_DangleStore_FindFirstApplicationData_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain(Dang_DangleStore self, ApiMap conditions)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleChain");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'findFirstDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'findFirstDangleChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain_keyval0(Dang_DangleStore self)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleStore_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain_keyval1(Dang_DangleStore self, char * key, ApiObject value)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleStore_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain_keyval2(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleStore_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain_keyval3(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleStore_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
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
Dang_DangleChain Dang_DangleStore_FindFirstDangleChain_keyval4(Dang_DangleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleStore_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dang_DangleStore_Get(Dang_DangleStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleStore self
  @returns   the result
**/
Acco_AccessObject Dang_DangleStore_GetAccess(Dang_DangleStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getAccess' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
Acco_AccessObject Dang_DangleStore_GetActiveAccess(Dang_DangleStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getActiveAccess' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiList Dang_DangleStore_GetActiveRepositories(Dang_DangleStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiList Dang_DangleStore_GetApplicationData(Dang_DangleStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dang_DangleStore Dang_DangleStore_GetByKey(Dang_DangleStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getByKey' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetClassName(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.colorScheme

Color scheme used in 
Dangle
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetColorScheme(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColorScheme");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getColorScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getColorScheme' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetCreatedBy(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.dangleChains

child link to class 
DangleChain
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiSet Dang_DangleStore_GetDangleChains(Dang_DangleStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleChains");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.dbLocation

Location (directory) of 
Dangle database files
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_Url Dang_DangleStore_GetDbLocation(Dang_DangleStore self)
{
  
  Impl_Url obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbLocation");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getDbLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getDbLocation' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiList Dang_DangleStore_GetFieldNames(Dang_DangleStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dang_DangleStore_GetFullKey(Dang_DangleStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getFullKey' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetGuid(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getGuid' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetInConstructor(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getInConstructor' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetIsDeleted(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getIsDeleted' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetIsLoaded(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getIsLoaded' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetIsModifiable(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getIsModifiable' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetIsModified(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getIsModified' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiBoolean Dang_DangleStore_GetIsReading(Dang_DangleStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getIsReading' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetLastUnlockedBy(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @returns  Local object key
**/
ApiObject Dang_DangleStore_GetLocalKey(Dang_DangleStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.memopsRoot

parent link
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_MemopsRoot Dang_DangleStore_GetMemopsRoot(Dang_DangleStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.name

Name of DangleStore. Serves 
as key
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetName(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getName' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_PackageLocator Dang_DangleStore_GetPackageLocator(Dang_DangleStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getPackageLocator' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetPackageName(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getPackageName' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetPackageShortName(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_MemopsRoot Dang_DangleStore_GetParent(Dang_DangleStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getParent' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiString Dang_DangleStore_GetQualifiedName(Dang_DangleStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getQualifiedName' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_MemopsRoot Dang_DangleStore_GetRoot(Dang_DangleStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getRoot' is not callable");
  
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
  @param  Dang_DangleStore self
  @returns   the result
**/
Impl_TopObject Dang_DangleStore_GetTopObject(Dang_DangleStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for cambridge.Dangle.DangleStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleStore Dang_DangleStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewDangleStore(parent, attrlinks);
}

/**
  Constructor for cambridge.Dangle.DangleStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Dang_DangleStore Dang_DangleStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Dang_DangleStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Dang_DangleStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleChain
  @param  Dang_DangleStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleChain Dang_DangleStore_NewDangleChain(Dang_DangleStore self, ApiMap attrlinks)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDangleChain");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'newDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'newDangleChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleChain
  @param  Dang_DangleStore self
  @param  Mols_Chain chain
  @returns  the new object
**/
Dang_DangleChain Dang_DangleStore_NewDangleChain_reqd(Dang_DangleStore self, Mols_Chain chain)
{
  
  Dang_DangleChain  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chain", chain);
  
  obj = Dang_DangleStore_NewDangleChain(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleStore self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleStore_RemoveApplicationData(Dang_DangleStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for cambridge.Dangle.DangleStore
  @param  Dang_DangleStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dang_DangleStore_Set(Dang_DangleStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleStore self
  @param  Acco_AccessObject value
**/
void *Dang_DangleStore_SetAccess(Dang_DangleStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setAccess' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiList values
**/
void *Dang_DangleStore_SetApplicationData(Dang_DangleStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleStore.colorScheme

Color scheme used in 
Dangle
  @param  Dang_DangleStore self
  @param  ApiString value
**/
void *Dang_DangleStore_SetColorScheme(Dang_DangleStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColorScheme");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setColorScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setColorScheme' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiString value
**/
void *Dang_DangleStore_SetCreatedBy(Dang_DangleStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleStore.dbLocation

Location (directory) of 
Dangle database files
  @param  Dang_DangleStore self
  @param  Impl_Url value
**/
void *Dang_DangleStore_SetDbLocation(Dang_DangleStore self, Impl_Url value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbLocation");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setDbLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setDbLocation' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiString value
**/
void *Dang_DangleStore_SetGuid(Dang_DangleStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setGuid' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiBoolean value
**/
void *Dang_DangleStore_SetIsModifiable(Dang_DangleStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setIsModifiable' is not callable");
  
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
  @param  Dang_DangleStore self
  @param  ApiString value
**/
void *Dang_DangleStore_SetLastUnlockedBy(Dang_DangleStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleStore.name

Name of DangleStore. Serves 
as key
  @param  Dang_DangleStore self
  @param  ApiString value
**/
void *Dang_DangleStore_SetName(Dang_DangleStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for cambridge.Dangle.DangleStore.dangleChains

child link to 
class DangleChain
  @param  Dang_DangleStore self
  @returns   the result
**/
ApiList Dang_DangleStore_SortedDangleChains(Dang_DangleStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleChains");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleStore: cannot find method 'sortedDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleStore: method 'sortedDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
