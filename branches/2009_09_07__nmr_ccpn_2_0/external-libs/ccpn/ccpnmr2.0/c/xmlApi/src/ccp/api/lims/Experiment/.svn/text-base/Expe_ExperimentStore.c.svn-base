
#include "ccp.h"

/*
  TopObject for Experiment package
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  Impl_ApplicationData value
**/
void *Expe_ExperimentStore_AddApplicationData(Expe_ExperimentStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean complete
**/
void *Expe_ExperimentStore_CheckAllValid(Expe_ExperimentStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean complete
**/
void *Expe_ExperimentStore_CheckValid(Expe_ExperimentStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'checkValid' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllActiveRepositories(Expe_ExperimentStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval0(Expe_ExperimentStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
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
ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllApplicationData(Expe_ExperimentStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllApplicationData_keyval0(Expe_ExperimentStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllApplicationData_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllApplicationData_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ExperimentStore_FindAllApplicationData_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
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
ApiList Expe_ExperimentStore_FindAllApplicationData_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperimentGroups(Expe_ExperimentStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperimentGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findAllExperimentGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findAllExperimentGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval0(Expe_ExperimentStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindAllExperimentGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindAllExperimentGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindAllExperimentGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindAllExperimentGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
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
ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindAllExperimentGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperiments(Expe_ExperimentStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperiments_keyval0(Expe_ExperimentStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperiments_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperiments_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ExperimentStore_FindAllExperiments_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
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
ApiSet Expe_ExperimentStore_FindAllExperiments_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository(Expe_ExperimentStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval0(Expe_ExperimentStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
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
Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData(Expe_ExperimentStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval0(Expe_ExperimentStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
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
Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment(Expe_ExperimentStore self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup(Expe_ExperimentStore self, ApiMap conditions)
{
  
  Expe_ExperimentGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'findFirstExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'findFirstExperimentGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval0(Expe_ExperimentStore self)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindFirstExperimentGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindFirstExperimentGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindFirstExperimentGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindFirstExperimentGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
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
Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindFirstExperimentGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval0(Expe_ExperimentStore self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ExperimentStore_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval1(Expe_ExperimentStore self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ExperimentStore_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ExperimentStore_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ExperimentStore_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
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
Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ExperimentStore_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expe_ExperimentStore_Get(Expe_ExperimentStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Acco_AccessObject Expe_ExperimentStore_GetAccess(Expe_ExperimentStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getAccess' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiList Expe_ExperimentStore_GetActiveRepositories(Expe_ExperimentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiList Expe_ExperimentStore_GetApplicationData(Expe_ExperimentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expe_ExperimentStore Expe_ExperimentStore_GetByKey(Expe_ExperimentStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getByKey' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetClassName(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getClassName' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetCreatedBy(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ExperimentStore.experimentGroups

child link 
to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiSet Expe_ExperimentStore_GetExperimentGroups(Expe_ExperimentStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getExperimentGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getExperimentGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ExperimentStore.experiments

child link to 
class Experiment
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiSet Expe_ExperimentStore_GetExperiments(Expe_ExperimentStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getExperiments' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiList Expe_ExperimentStore_GetFieldNames(Expe_ExperimentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expe_ExperimentStore_GetFullKey(Expe_ExperimentStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getFullKey' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetGuid(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getGuid' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetInConstructor(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getInConstructor' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetIsDeleted(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getIsDeleted' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetIsLoaded(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getIsLoaded' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetIsModifiable(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getIsModifiable' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetIsModified(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getIsModified' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiBoolean Expe_ExperimentStore_GetIsReading(Expe_ExperimentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getIsReading' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetLastUnlockedBy(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @returns  Local object key
**/
ApiObject Expe_ExperimentStore_GetLocalKey(Expe_ExperimentStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ExperimentStore.memopsRoot

parent link
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Impl_MemopsRoot Expe_ExperimentStore_GetMemopsRoot(Expe_ExperimentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ExperimentStore.name

name of 
ExperimentStore - serves as key
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetName(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getName' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Impl_PackageLocator Expe_ExperimentStore_GetPackageLocator(Expe_ExperimentStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getPackageLocator' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetPackageName(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getPackageName' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetPackageShortName(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ExperimentStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Impl_MemopsRoot Expe_ExperimentStore_GetParent(Expe_ExperimentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getParent' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiString Expe_ExperimentStore_GetQualifiedName(Expe_ExperimentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getQualifiedName' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Impl_MemopsRoot Expe_ExperimentStore_GetRoot(Expe_ExperimentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getRoot' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
Impl_TopObject Expe_ExperimentStore_GetTopObject(Expe_ExperimentStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_ExperimentStore Expe_ExperimentStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewExperimentStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Expe_ExperimentStore Expe_ExperimentStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Expe_ExperimentStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Expe_ExperimentStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_Experiment Expe_ExperimentStore_NewExperiment(Expe_ExperimentStore self, ApiMap attrlinks)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'newExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'newExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_ExperimentGroup Expe_ExperimentStore_NewExperimentGroup(Expe_ExperimentStore self, ApiMap attrlinks)
{
  
  Expe_ExperimentGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'newExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'newExperimentGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * name
  @param  char * purpose
  @returns  the new object
**/
Expe_ExperimentGroup Expe_ExperimentStore_NewExperimentGroup_reqd(Expe_ExperimentStore self, char * name, char * purpose)
{
  
  Expe_ExperimentGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);
  ApiString api__purpose = ApiString_New(purpose);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "purpose", api__purpose);
  
  obj = Expe_ExperimentStore_NewExperimentGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  Py_DECREF(api__purpose);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore self
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @returns  the new object
**/
Expe_Experiment Expe_ExperimentStore_NewExperiment_reqd(Expe_ExperimentStore self, char * endDate, Clas_ExperimentType experimentType, char * startDate)
{
  
  Expe_Experiment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__endDate = ApiString_New(endDate);
  ApiString api__startDate = ApiString_New(startDate);

  PyDict_SetItemString(attrlinks, "endDate", api__endDate);
  PyDict_SetItemString(attrlinks, "experimentType", experimentType);
  PyDict_SetItemString(attrlinks, "startDate", api__startDate);
  
  obj = Expe_ExperimentStore_NewExperiment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__endDate);
  Py_DECREF(api__startDate);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_ImportSample Expe_ExperimentStore_NewImportSample(Expe_ExperimentStore self, ApiMap attrlinks)
{
  
  Expe_ImportSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newImportSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'newImportSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'newImportSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore self
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @param  Affi_Organisation supplier
  @returns  the new object
**/
Expe_ImportSample Expe_ExperimentStore_NewImportSample_reqd(Expe_ExperimentStore self, char * endDate, Clas_ExperimentType experimentType, char * startDate, Affi_Organisation supplier)
{
  
  Expe_ImportSample  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__endDate = ApiString_New(endDate);
  ApiString api__startDate = ApiString_New(startDate);

  PyDict_SetItemString(attrlinks, "endDate", api__endDate);
  PyDict_SetItemString(attrlinks, "experimentType", experimentType);
  PyDict_SetItemString(attrlinks, "startDate", api__startDate);
  PyDict_SetItemString(attrlinks, "supplier", supplier);
  
  obj = Expe_ExperimentStore_NewImportSample(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__endDate);
  Py_DECREF(api__startDate);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  Impl_ApplicationData value
**/
void *Expe_ExperimentStore_RemoveApplicationData(Expe_ExperimentStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expe_ExperimentStore_Set(Expe_ExperimentStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentStore self
  @param  Acco_AccessObject value
**/
void *Expe_ExperimentStore_SetAccess(Expe_ExperimentStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setAccess' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiList values
**/
void *Expe_ExperimentStore_SetApplicationData(Expe_ExperimentStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setApplicationData' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
void *Expe_ExperimentStore_SetCreatedBy(Expe_ExperimentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setCreatedBy' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
void *Expe_ExperimentStore_SetGuid(Expe_ExperimentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setGuid' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiBoolean value
**/
void *Expe_ExperimentStore_SetIsModifiable(Expe_ExperimentStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setIsModifiable' is not callable");
  
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
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
void *Expe_ExperimentStore_SetLastUnlockedBy(Expe_ExperimentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.ExperimentStore.name

name of 
ExperimentStore - serves as key
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
void *Expe_ExperimentStore_SetName(Expe_ExperimentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiList Expe_ExperimentStore_SortedExperimentGroups(Expe_ExperimentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperimentGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'sortedExperimentGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'sortedExperimentGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @returns   the result
**/
ApiList Expe_ExperimentStore_SortedExperiments(Expe_ExperimentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ExperimentStore: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
