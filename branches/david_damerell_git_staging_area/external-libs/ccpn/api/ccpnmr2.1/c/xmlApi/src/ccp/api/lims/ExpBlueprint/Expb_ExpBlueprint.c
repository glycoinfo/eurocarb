
#include "ccp.h"

/*
  The information on the ExpBlueprint that represents well defined experimental objectives. The ExpBlueprint groups wish targets or domain of wish targets and non-polymer molecules.
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  Impl_ApplicationData value
**/
void *Expb_ExpBlueprint_AddApplicationData(Expb_ExpBlueprint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  Expe_Experiment value
**/
void *Expb_ExpBlueprint_AddExperiment(Expb_ExpBlueprint self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean complete
**/
void *Expb_ExpBlueprint_CheckAllValid(Expb_ExpBlueprint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean complete
**/
void *Expb_ExpBlueprint_CheckValid(Expb_ExpBlueprint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'checkValid' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprint_FindAllApplicationData(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findAllApplicationData' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval0(Expb_ExpBlueprint self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
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
ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findAllBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findAllBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval0(Expb_ExpBlueprint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
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
ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findAllBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findAllBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval0(Expb_ExpBlueprint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
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
ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintStatuses");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findAllBlueprintStatuses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findAllBlueprintStatuses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval0(Expb_ExpBlueprint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindAllBlueprintStatuses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintStatuses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintStatuses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintStatuses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
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
ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindAllBlueprintStatuses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllExperiments(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval0(Expb_ExpBlueprint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
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
ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval0(Expb_ExpBlueprint self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
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
Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findFirstBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findFirstBlueprintComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval0(Expb_ExpBlueprint self)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
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
Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  Expb_BlueprintDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findFirstBlueprintDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findFirstBlueprintDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval0(Expb_ExpBlueprint self)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
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
Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findFirstBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findFirstBlueprintStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval0(Expb_ExpBlueprint self)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
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
Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment(Expb_ExpBlueprint self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval0(Expb_ExpBlueprint self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_ExpBlueprint_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_ExpBlueprint_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_ExpBlueprint_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_ExpBlueprint_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
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
Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_ExpBlueprint_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expb_ExpBlueprint_Get(Expb_ExpBlueprint self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Acco_AccessObject Expb_ExpBlueprint_GetAccess(Expb_ExpBlueprint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getAccess' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Acco_AccessObject Expb_ExpBlueprint_GetActiveAccess(Expb_ExpBlueprint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getActiveAccess' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_GetApplicationData(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.biochemicalFunction

The 
biochemical function within the biological pathway of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetBiochemicalFunction(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBiochemicalFunction");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getBiochemicalFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getBiochemicalFunction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.biologicalProcess

The 
biological process where the ExpBlueprint is involved. e.g. 'Unknown'.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetBiologicalProcess(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBiologicalProcess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getBiologicalProcess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getBiologicalProcess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child 
link to class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiSet Expb_ExpBlueprint_GetBlueprintComponents(Expb_ExpBlueprint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child link 
to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiSet Expb_ExpBlueprint_GetBlueprintDbRefs(Expb_ExpBlueprint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link 
to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiSet Expb_ExpBlueprint_GetBlueprintStatuses(Expb_ExpBlueprint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintStatuses");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getBlueprintStatuses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getBlueprintStatuses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expb_ExpBlueprint Expb_ExpBlueprint_GetByKey(Expb_ExpBlueprint self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.catalyticActivity

The 
official statement of catalytic activity.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetCatalyticActivity(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCatalyticActivity");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getCatalyticActivity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getCatalyticActivity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.cellLocation

The typical 
location of ExpBlueprint within a cell.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetCellLocation(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCellLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getCellLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getCellLocation' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetClassName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.commonName

The common name 
of ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetCommonName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCommonName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getCommonName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.details

Detail field for 
comments.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetDetails(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.expBlueprintStore

parent 
link
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Expb_ExpBlueprintStore Expb_ExpBlueprint_GetExpBlueprintStore(Expb_ExpBlueprint self)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprintStore");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getExpBlueprintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getExpBlueprintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiSet Expb_ExpBlueprint_GetExperiments(Expb_ExpBlueprint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getExperiments' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_GetFieldNames(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expb_ExpBlueprint_GetFullKey(Expb_ExpBlueprint self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.functionDescription

The 
function description is an human-readable description of the biochemical 
function.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetFunctionDescription(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunctionDescription");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getFunctionDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getFunctionDescription' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprint_GetInConstructor(Expb_ExpBlueprint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getInConstructor' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiBoolean Expb_ExpBlueprint_GetIsDeleted(Expb_ExpBlueprint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @returns  Local object key
**/
ApiObject Expb_ExpBlueprint_GetLocalKey(Expb_ExpBlueprint self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.localName

The local name of 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetLocalName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getLocalName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getLocalName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.owner

Person who owns the 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Affi_Person Expb_ExpBlueprint_GetOwner(Expb_ExpBlueprint self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOwner");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getOwner'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getOwner' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetPackageName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getPackageName' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetPackageShortName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.parent

link to parent object 
- synonym for expBlueprintStore
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Expb_ExpBlueprintStore Expb_ExpBlueprint_GetParent(Expb_ExpBlueprint self)
{
  
  Expb_ExpBlueprintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.pathway

The description of 
the biological processes this ExpBlueprint is related to.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetPathway(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPathway");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getPathway'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getPathway' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetQualifiedName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getQualifiedName' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Impl_MemopsRoot Expb_ExpBlueprint_GetRoot(Expb_ExpBlueprint self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.serial

Unique identifier.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiInteger Expb_ExpBlueprint_GetSerial(Expb_ExpBlueprint self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.similarityDetails

The 
information relating this ExpBlueprint to other 
organisms/genes/proteins.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetSimilarityDetails(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSimilarityDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getSimilarityDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getSimilarityDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.systematicName

The 
systematic name of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetSystematicName(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSystematicName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getSystematicName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getSystematicName' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
Impl_TopObject Expb_ExpBlueprint_GetTopObject(Expb_ExpBlueprint self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.whyChosen

Details of the 
basis for the selection of this ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiString Expb_ExpBlueprint_GetWhyChosen(Expb_ExpBlueprint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWhyChosen");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'getWhyChosen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'getWhyChosen' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_ExpBlueprint Expb_ExpBlueprint_Init(Expb_ExpBlueprintStore parent, ApiMap attrlinks)
{
  
  return Expb_ExpBlueprintStore_NewExpBlueprint(parent, attrlinks);
}

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore parent
  @param  char * commonName
  @param  char * whyChosen
  @returns  the new object
**/
Expb_ExpBlueprint Expb_ExpBlueprint_Init_reqd(Expb_ExpBlueprintStore parent, char * commonName, char * whyChosen)
{
  
  Expb_ExpBlueprint  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__commonName = ApiString_New(commonName);
  ApiString api__whyChosen = ApiString_New(whyChosen);

  PyDict_SetItemString(attrlinks, "commonName", api__commonName);
  PyDict_SetItemString(attrlinks, "whyChosen", api__whyChosen);
  
  obj = Expb_ExpBlueprint_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__commonName);
  Py_DECREF(api__whyChosen);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintComponent Expb_ExpBlueprint_NewBlueprintComponent(Expb_ExpBlueprint self, ApiMap attrlinks)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'newBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'newBlueprintComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * componentType
  @param  char * whyChosen
  @returns  the new object
**/
Expb_BlueprintComponent Expb_ExpBlueprint_NewBlueprintComponent_reqd(Expb_ExpBlueprint self, char * componentType, char * whyChosen)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__componentType = ApiString_New(componentType);
  ApiString api__whyChosen = ApiString_New(whyChosen);

  PyDict_SetItemString(attrlinks, "componentType", api__componentType);
  PyDict_SetItemString(attrlinks, "whyChosen", api__whyChosen);
  
  obj = Expb_ExpBlueprint_NewBlueprintComponent(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__componentType);
  Py_DECREF(api__whyChosen);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_NewBlueprintDbRef(Expb_ExpBlueprint self, ApiMap attrlinks)
{
  
  Expb_BlueprintDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newBlueprintDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'newBlueprintDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'newBlueprintDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Expb_BlueprintDbRef Expb_ExpBlueprint_NewBlueprintDbRef_reqd(Expb_ExpBlueprint self, Dbr_Entry dbRef)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Expb_ExpBlueprint_NewBlueprintDbRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintStatus Expb_ExpBlueprint_NewBlueprintStatus(Expb_ExpBlueprint self, ApiMap attrlinks)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'newBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'newBlueprintStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  Clas_TargetStatus code
  @returns  the new object
**/
Expb_BlueprintStatus Expb_ExpBlueprint_NewBlueprintStatus_reqd(Expb_ExpBlueprint self, Clas_TargetStatus code)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "code", code);
  
  obj = Expb_ExpBlueprint_NewBlueprintStatus(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  Impl_ApplicationData value
**/
void *Expb_ExpBlueprint_RemoveApplicationData(Expb_ExpBlueprint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  Expe_Experiment value
**/
void *Expb_ExpBlueprint_RemoveExperiment(Expb_ExpBlueprint self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expb_ExpBlueprint_Set(Expb_ExpBlueprint self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprint self
  @param  Acco_AccessObject value
**/
void *Expb_ExpBlueprint_SetAccess(Expb_ExpBlueprint self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setAccess' is not callable");
  
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
  @param  Expb_ExpBlueprint self
  @param  ApiList values
**/
void *Expb_ExpBlueprint_SetApplicationData(Expb_ExpBlueprint self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.biochemicalFunction

The 
biochemical function within the biological pathway of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetBiochemicalFunction(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBiochemicalFunction");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setBiochemicalFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setBiochemicalFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.biologicalProcess

The 
biological process where the ExpBlueprint is involved. e.g. 'Unknown'.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetBiologicalProcess(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBiologicalProcess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setBiologicalProcess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setBiologicalProcess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.catalyticActivity

The 
official statement of catalytic activity.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetCatalyticActivity(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCatalyticActivity");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setCatalyticActivity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setCatalyticActivity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.cellLocation

The typical 
location of ExpBlueprint within a cell.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetCellLocation(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCellLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setCellLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setCellLocation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.commonName

The common name 
of ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetCommonName(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCommonName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setCommonName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.details

Detail field for 
comments.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetDetails(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiSet values
**/
void *Expb_ExpBlueprint_SetExperiments(Expb_ExpBlueprint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.functionDescription

The 
function description is an human-readable description of the biochemical 
function.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetFunctionDescription(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunctionDescription");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setFunctionDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setFunctionDescription' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.localName

The local name of 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetLocalName(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocalName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setLocalName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setLocalName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.owner

Person who owns the 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  Affi_Person value
**/
void *Expb_ExpBlueprint_SetOwner(Expb_ExpBlueprint self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOwner");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setOwner'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setOwner' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.pathway

The description of 
the biological processes this ExpBlueprint is related to.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetPathway(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPathway");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setPathway'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setPathway' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.serial

Unique identifier.
  @param  Expb_ExpBlueprint self
  @param  ApiInteger value
**/
void *Expb_ExpBlueprint_SetSerial(Expb_ExpBlueprint self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.similarityDetails

The 
information relating this ExpBlueprint to other 
organisms/genes/proteins.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetSimilarityDetails(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSimilarityDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setSimilarityDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setSimilarityDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.systematicName

The 
systematic name of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetSystematicName(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSystematicName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setSystematicName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setSystematicName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.whyChosen

Details of the 
basis for the selection of this ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
void *Expb_ExpBlueprint_SetWhyChosen(Expb_ExpBlueprint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWhyChosen");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'setWhyChosen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'setWhyChosen' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child 
link to class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_SortedBlueprintComponents(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'sortedBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'sortedBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_SortedBlueprintDbRefs(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'sortedBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'sortedBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_SortedBlueprintStatuses(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintStatuses");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'sortedBlueprintStatuses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'sortedBlueprintStatuses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
ApiList Expb_ExpBlueprint_SortedExperiments(Expb_ExpBlueprint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.ExpBlueprint: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
