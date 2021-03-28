
#include "ccp.h"

/*
  Grouping of NmrSim data.The package describes simulations, structure generations etc. taht use NMR data.
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  Impl_ApplicationData value
**/
void *Nsim_NmrSimStore_AddApplicationData(Nsim_NmrSimStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiBoolean complete
**/
void *Nsim_NmrSimStore_CheckAllValid(Nsim_NmrSimStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiBoolean complete
**/
void *Nsim_NmrSimStore_CheckValid(Nsim_NmrSimStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'checkValid' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllActiveRepositories(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllActiveRepositories_keyval0(Nsim_NmrSimStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllActiveRepositories_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllActiveRepositories_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllActiveRepositories_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
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
ApiList Nsim_NmrSimStore_FindAllActiveRepositories_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllApplicationData(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllApplicationData_keyval0(Nsim_NmrSimStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllApplicationData_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllApplicationData_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimStore_FindAllApplicationData_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
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
ApiList Nsim_NmrSimStore_FindAllApplicationData_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimStore_FindAllRuns(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRuns");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findAllRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findAllRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimStore_FindAllRuns_keyval0(Nsim_NmrSimStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimStore_FindAllRuns_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimStore_FindAllRuns_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimStore_FindAllRuns_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
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
ApiSet Nsim_NmrSimStore_FindAllRuns_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository_keyval0(Nsim_NmrSimStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nsim_NmrSimStore self
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
Impl_Repository Nsim_NmrSimStore_FindFirstActiveRepository_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData_keyval0(Nsim_NmrSimStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
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
Impl_ApplicationData Nsim_NmrSimStore_FindFirstApplicationData_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nsim_NmrSimStore_FindFirstRun(Nsim_NmrSimStore self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRun");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'findFirstRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'findFirstRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nsim_NmrSimStore_FindFirstRun_keyval0(Nsim_NmrSimStore self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nsim_NmrSimStore_FindFirstRun_keyval1(Nsim_NmrSimStore self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nsim_NmrSimStore_FindFirstRun_keyval2(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nsim_NmrSimStore_FindFirstRun_keyval3(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
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
Nsim_Run Nsim_NmrSimStore_FindFirstRun_keyval4(Nsim_NmrSimStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimStore_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nsim_NmrSimStore_Get(Nsim_NmrSimStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Acco_AccessObject Nsim_NmrSimStore_GetAccess(Nsim_NmrSimStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getAccess' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Acco_AccessObject Nsim_NmrSimStore_GetActiveAccess(Nsim_NmrSimStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getActiveAccess' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiList Nsim_NmrSimStore_GetActiveRepositories(Nsim_NmrSimStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimStore.application

Name of application that 
uses NmrSim data. NB consistency is not enforced.
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetApplication(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getApplication' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiList Nsim_NmrSimStore_GetApplicationData(Nsim_NmrSimStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nsim_NmrSimStore Nsim_NmrSimStore_GetByKey(Nsim_NmrSimStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getByKey' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetClassName(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getClassName' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetCreatedBy(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getCreatedBy' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiList Nsim_NmrSimStore_GetFieldNames(Nsim_NmrSimStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nsim_NmrSimStore_GetFullKey(Nsim_NmrSimStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getFullKey' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetGuid(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getGuid' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetInConstructor(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getInConstructor' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetIsDeleted(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getIsDeleted' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetIsLoaded(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getIsLoaded' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetIsModifiable(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getIsModifiable' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetIsModified(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getIsModified' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimStore_GetIsReading(Nsim_NmrSimStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getIsReading' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetLastUnlockedBy(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @returns  Local object key
**/
ApiObject Nsim_NmrSimStore_GetLocalKey(Nsim_NmrSimStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimStore.memopsRoot

parent link
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Impl_MemopsRoot Nsim_NmrSimStore_GetMemopsRoot(Nsim_NmrSimStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimStore.name

Name of NmrSimStore
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetName(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getName' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Impl_PackageLocator Nsim_NmrSimStore_GetPackageLocator(Nsim_NmrSimStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getPackageLocator' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetPackageName(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getPackageName' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetPackageShortName(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Impl_MemopsRoot Nsim_NmrSimStore_GetParent(Nsim_NmrSimStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getParent' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiString Nsim_NmrSimStore_GetQualifiedName(Nsim_NmrSimStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getQualifiedName' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Impl_MemopsRoot Nsim_NmrSimStore_GetRoot(Nsim_NmrSimStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiSet Nsim_NmrSimStore_GetRuns(Nsim_NmrSimStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRuns");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getRuns' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
Impl_TopObject Nsim_NmrSimStore_GetTopObject(Nsim_NmrSimStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.NmrSim.NmrSimStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_NmrSimStore Nsim_NmrSimStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNmrSimStore(parent, attrlinks);
}

/**
  Constructor for molsim.NmrSim.NmrSimStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Nsim_NmrSimStore Nsim_NmrSimStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Nsim_NmrSimStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nsim_NmrSimStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.Run
  @param  Nsim_NmrSimStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_Run Nsim_NmrSimStore_NewRun(Nsim_NmrSimStore self, ApiMap attrlinks)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRun");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'newRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'newRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.Run
  @param  Nsim_NmrSimStore self
  @param  Anpr_AnnealProtocol annealProtocol
  @param  Nmrc_NmrConstraintStore inputConstraintStore
  @param  Mols_MolSystem molSystem
  @returns  the new object
**/
Nsim_Run Nsim_NmrSimStore_NewRun_reqd(Nsim_NmrSimStore self, Anpr_AnnealProtocol annealProtocol, Nmrc_NmrConstraintStore inputConstraintStore, Mols_MolSystem molSystem)
{
  
  Nsim_Run  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "annealProtocol", annealProtocol);
  PyDict_SetItemString(attrlinks, "inputConstraintStore", inputConstraintStore);
  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  
  obj = Nsim_NmrSimStore_NewRun(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimStore self
  @param  Impl_ApplicationData value
**/
void *Nsim_NmrSimStore_RemoveApplicationData(Nsim_NmrSimStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.NmrSim.NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nsim_NmrSimStore_Set(Nsim_NmrSimStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_NmrSimStore self
  @param  Acco_AccessObject value
**/
void *Nsim_NmrSimStore_SetAccess(Nsim_NmrSimStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimStore.application

Name of application that 
uses NmrSim data. NB consistency is not enforced.
  @param  Nsim_NmrSimStore self
  @param  ApiString value
**/
void *Nsim_NmrSimStore_SetApplication(Nsim_NmrSimStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setApplication' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiList values
**/
void *Nsim_NmrSimStore_SetApplicationData(Nsim_NmrSimStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setApplicationData' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiString value
**/
void *Nsim_NmrSimStore_SetCreatedBy(Nsim_NmrSimStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setCreatedBy' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiString value
**/
void *Nsim_NmrSimStore_SetGuid(Nsim_NmrSimStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setGuid' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiBoolean value
**/
void *Nsim_NmrSimStore_SetIsModifiable(Nsim_NmrSimStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setIsModifiable' is not callable");
  
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
  @param  Nsim_NmrSimStore self
  @param  ApiString value
**/
void *Nsim_NmrSimStore_SetLastUnlockedBy(Nsim_NmrSimStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimStore.name

Name of NmrSimStore
  @param  Nsim_NmrSimStore self
  @param  ApiString value
**/
void *Nsim_NmrSimStore_SetName(Nsim_NmrSimStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.NmrSimStore.runs

child link to class Run
  @param  Nsim_NmrSimStore self
  @returns   the result
**/
ApiList Nsim_NmrSimStore_SortedRuns(Nsim_NmrSimStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRuns");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimStore: cannot find method 'sortedRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimStore: method 'sortedRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
