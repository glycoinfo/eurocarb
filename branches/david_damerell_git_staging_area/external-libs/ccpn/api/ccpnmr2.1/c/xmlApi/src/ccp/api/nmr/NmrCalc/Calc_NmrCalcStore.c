
#include "ccp.h"

/*
  TopObject for NmrCalc package
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  Impl_ApplicationData value
**/
void *Calc_NmrCalcStore_AddApplicationData(Calc_NmrCalcStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiBoolean complete
**/
void *Calc_NmrCalcStore_CheckAllValid(Calc_NmrCalcStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiBoolean complete
**/
void *Calc_NmrCalcStore_CheckValid(Calc_NmrCalcStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'checkValid' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllActiveRepositories(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllActiveRepositories_keyval0(Calc_NmrCalcStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllActiveRepositories_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllActiveRepositories_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllActiveRepositories_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
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
ApiList Calc_NmrCalcStore_FindAllActiveRepositories_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllApplicationData(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllApplicationData_keyval0(Calc_NmrCalcStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllApplicationData_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllApplicationData_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_NmrCalcStore_FindAllApplicationData_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
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
ApiList Calc_NmrCalcStore_FindAllApplicationData_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDefaultParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findAllDefaultParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findAllDefaultParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters_keyval0(Calc_NmrCalcStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindAllDefaultParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindAllDefaultParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindAllDefaultParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindAllDefaultParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
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
ApiSet Calc_NmrCalcStore_FindAllDefaultParameters_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindAllDefaultParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllRuns(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findAllRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findAllRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllRuns_keyval0(Calc_NmrCalcStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllRuns_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllRuns_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_NmrCalcStore_FindAllRuns_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
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
ApiSet Calc_NmrCalcStore_FindAllRuns_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository_keyval0(Calc_NmrCalcStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Calc_NmrCalcStore self
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
Impl_Repository Calc_NmrCalcStore_FindFirstActiveRepository_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData_keyval0(Calc_NmrCalcStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
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
Impl_ApplicationData Calc_NmrCalcStore_FindFirstApplicationData_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  Calc_DefaultParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDefaultParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findFirstDefaultParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findFirstDefaultParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @returns  the first value that satisfies the conditions 
**/
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter_keyval0(Calc_NmrCalcStore self)
{
  
  Calc_DefaultParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindFirstDefaultParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  Calc_DefaultParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindFirstDefaultParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_DefaultParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindFirstDefaultParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_DefaultParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindFirstDefaultParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link 
to class DefaultParameter
  @param  Calc_NmrCalcStore self
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
Calc_DefaultParameter Calc_NmrCalcStore_FindFirstDefaultParameter_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_DefaultParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindFirstDefaultParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Calc_NmrCalcStore_FindFirstRun(Calc_NmrCalcStore self, ApiMap conditions)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'findFirstRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'findFirstRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Calc_NmrCalcStore_FindFirstRun_keyval0(Calc_NmrCalcStore self)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_NmrCalcStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Calc_NmrCalcStore_FindFirstRun_keyval1(Calc_NmrCalcStore self, char * key, ApiObject value)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_NmrCalcStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Calc_NmrCalcStore_FindFirstRun_keyval2(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_NmrCalcStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Calc_NmrCalcStore_FindFirstRun_keyval3(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_NmrCalcStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
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
Calc_Run Calc_NmrCalcStore_FindFirstRun_keyval4(Calc_NmrCalcStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_NmrCalcStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Calc_NmrCalcStore_Get(Calc_NmrCalcStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Acco_AccessObject Calc_NmrCalcStore_GetAccess(Calc_NmrCalcStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getAccess' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Acco_AccessObject Calc_NmrCalcStore_GetActiveAccess(Calc_NmrCalcStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getActiveAccess' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiList Calc_NmrCalcStore_GetActiveRepositories(Calc_NmrCalcStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiList Calc_NmrCalcStore_GetApplicationData(Calc_NmrCalcStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Calc_NmrCalcStore Calc_NmrCalcStore_GetByKey(Calc_NmrCalcStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getByKey' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetClassName(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getClassName' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetCreatedBy(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link to 
class DefaultParameter
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiSet Calc_NmrCalcStore_GetDefaultParameters(Calc_NmrCalcStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDefaultParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getDefaultParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getDefaultParameters' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiList Calc_NmrCalcStore_GetFieldNames(Calc_NmrCalcStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Calc_NmrCalcStore_GetFullKey(Calc_NmrCalcStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getFullKey' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetGuid(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getGuid' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetInConstructor(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getInConstructor' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetIsDeleted(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getIsDeleted' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetIsLoaded(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getIsLoaded' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetIsModifiable(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getIsModifiable' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetIsModified(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getIsModified' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiBoolean Calc_NmrCalcStore_GetIsReading(Calc_NmrCalcStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getIsReading' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetLastUnlockedBy(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @returns  Local object key
**/
ApiObject Calc_NmrCalcStore_GetLocalKey(Calc_NmrCalcStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.memopsRoot

parent link
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Impl_MemopsRoot Calc_NmrCalcStore_GetMemopsRoot(Calc_NmrCalcStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.name

name (part of key) for 
NmrCalcStore
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetName(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.nmrProject

NMR project that 
calculation refers to. Part of key
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Nmr_NmrProject Calc_NmrCalcStore_GetNmrProject(Calc_NmrCalcStore self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getNmrProject' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Impl_PackageLocator Calc_NmrCalcStore_GetPackageLocator(Calc_NmrCalcStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getPackageLocator' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetPackageName(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getPackageName' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetPackageShortName(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Impl_MemopsRoot Calc_NmrCalcStore_GetParent(Calc_NmrCalcStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getParent' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiString Calc_NmrCalcStore_GetQualifiedName(Calc_NmrCalcStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getQualifiedName' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Impl_MemopsRoot Calc_NmrCalcStore_GetRoot(Calc_NmrCalcStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiSet Calc_NmrCalcStore_GetRuns(Calc_NmrCalcStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.software

Software used for NMR 
calculation
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Meth_Software Calc_NmrCalcStore_GetSoftware(Calc_NmrCalcStore self)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getSoftware' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Impl_TopObject Calc_NmrCalcStore_GetTopObject(Calc_NmrCalcStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.NmrCalcStore.validationStore

Validation store 
that stores calculation result
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
Vald_ValidationStore Calc_NmrCalcStore_GetValidationStore(Calc_NmrCalcStore self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_NmrCalcStore Calc_NmrCalcStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNmrCalcStore(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @param  Nmr_NmrProject nmrProject
  @returns  the new object
**/
Calc_NmrCalcStore Calc_NmrCalcStore_Init_reqd(Impl_MemopsRoot parent, char * name, Nmr_NmrProject nmrProject)
{
  
  Calc_NmrCalcStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "nmrProject", nmrProject);
  
  obj = Calc_NmrCalcStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_DefaultParameter Calc_NmrCalcStore_NewDefaultParameter(Calc_NmrCalcStore self, ApiMap attrlinks)
{
  
  Calc_DefaultParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDefaultParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'newDefaultParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'newDefaultParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.DefaultParameter
  @param  Calc_NmrCalcStore self
  @param  char * code
  @returns  the new object
**/
Calc_DefaultParameter Calc_NmrCalcStore_NewDefaultParameter_reqd(Calc_NmrCalcStore self, char * code)
{
  
  Calc_DefaultParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  
  obj = Calc_NmrCalcStore_NewDefaultParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_Run Calc_NmrCalcStore_NewRun(Calc_NmrCalcStore self, ApiMap attrlinks)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'newRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'newRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore self
  @returns  the new object
**/
Calc_Run Calc_NmrCalcStore_NewRun_reqd(Calc_NmrCalcStore self)
{
  
  Calc_Run  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Calc_NmrCalcStore_NewRun(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_NmrCalcStore self
  @param  Impl_ApplicationData value
**/
void *Calc_NmrCalcStore_RemoveApplicationData(Calc_NmrCalcStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrCalc.NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Calc_NmrCalcStore_Set(Calc_NmrCalcStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_NmrCalcStore self
  @param  Acco_AccessObject value
**/
void *Calc_NmrCalcStore_SetAccess(Calc_NmrCalcStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setAccess' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiList values
**/
void *Calc_NmrCalcStore_SetApplicationData(Calc_NmrCalcStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setApplicationData' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiString value
**/
void *Calc_NmrCalcStore_SetCreatedBy(Calc_NmrCalcStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setCreatedBy' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiString value
**/
void *Calc_NmrCalcStore_SetGuid(Calc_NmrCalcStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setGuid' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiBoolean value
**/
void *Calc_NmrCalcStore_SetIsModifiable(Calc_NmrCalcStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setIsModifiable' is not callable");
  
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
  @param  Calc_NmrCalcStore self
  @param  ApiString value
**/
void *Calc_NmrCalcStore_SetLastUnlockedBy(Calc_NmrCalcStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.NmrCalcStore.name

name (part of key) for 
NmrCalcStore
  @param  Calc_NmrCalcStore self
  @param  ApiString value
**/
void *Calc_NmrCalcStore_SetName(Calc_NmrCalcStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.NmrCalcStore.nmrProject

NMR project that 
calculation refers to. Part of key
  @param  Calc_NmrCalcStore self
  @param  Nmr_NmrProject value
**/
void *Calc_NmrCalcStore_SetNmrProject(Calc_NmrCalcStore self, Nmr_NmrProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setNmrProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.NmrCalcStore.software

Software used for NMR 
calculation
  @param  Calc_NmrCalcStore self
  @param  Meth_Software value
**/
void *Calc_NmrCalcStore_SetSoftware(Calc_NmrCalcStore self, Meth_Software value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.NmrCalcStore.validationStore

Validation store 
that stores calculation result
  @param  Calc_NmrCalcStore self
  @param  Vald_ValidationStore value
**/
void *Calc_NmrCalcStore_SetValidationStore(Calc_NmrCalcStore self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValidationStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'setValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'setValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.NmrCalcStore.defaultParameters

child link to 
class DefaultParameter
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiList Calc_NmrCalcStore_SortedDefaultParameters(Calc_NmrCalcStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDefaultParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'sortedDefaultParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'sortedDefaultParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.NmrCalcStore.runs

child link to class Run
  @param  Calc_NmrCalcStore self
  @returns   the result
**/
ApiList Calc_NmrCalcStore_SortedRuns(Calc_NmrCalcStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: cannot find method 'sortedRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.NmrCalcStore: method 'sortedRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
