
#include "ccp.h"

/*
  Annotation to store file and a description associate to it.
*/

/* package ccp.api.general.Annotation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  Impl_ApplicationData value
**/
void *Anno_Annotation_AddApplicationData(Anno_Annotation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  Expe_Experiment value
**/
void *Anno_Annotation_AddExperiment(Anno_Annotation self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Annotation.Annotation.projects

Annotations relevant 
to Project.
  @param  Anno_Annotation self
  @param  Targ_Project value
**/
void *Anno_Annotation_AddProject(Anno_Annotation self, Targ_Project value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'addProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'addProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Annotation.Annotation.targets

Annotations relevant 
to Target.
  @param  Anno_Annotation self
  @param  Targ_Target value
**/
void *Anno_Annotation_AddTarget(Anno_Annotation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  Targ_TargetGroup value
**/
void *Anno_Annotation_AddTargetGroup(Anno_Annotation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'addTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'addTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  ApiBoolean complete
**/
void *Anno_Annotation_CheckAllValid(Anno_Annotation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  ApiBoolean complete
**/
void *Anno_Annotation_CheckValid(Anno_Annotation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'checkValid' is not callable");
  
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
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_Annotation_FindAllApplicationData(Anno_Annotation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findAllApplicationData' is not callable");
  
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
  @param  Anno_Annotation self
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_Annotation_FindAllApplicationData_keyval0(Anno_Annotation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_Annotation_FindAllApplicationData_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_Annotation_FindAllApplicationData_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_Annotation_FindAllApplicationData_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
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
ApiList Anno_Annotation_FindAllApplicationData_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllExperiments(Anno_Annotation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllExperiments_keyval0(Anno_Annotation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllExperiments_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllExperiments_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllExperiments_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
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
ApiSet Anno_Annotation_FindAllExperiments_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllProjects(Anno_Annotation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProjects");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findAllProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findAllProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllProjects_keyval0(Anno_Annotation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllProjects_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllProjects_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllProjects_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
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
ApiSet Anno_Annotation_FindAllProjects_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargetGroups(Anno_Annotation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargetGroups_keyval0(Anno_Annotation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargetGroups_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargetGroups_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargetGroups_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
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
ApiSet Anno_Annotation_FindAllTargetGroups_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargets(Anno_Annotation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargets_keyval0(Anno_Annotation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargets_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargets_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_Annotation_FindAllTargets_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
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
ApiSet Anno_Annotation_FindAllTargets_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData(Anno_Annotation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anno_Annotation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData_keyval0(Anno_Annotation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
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
Impl_ApplicationData Anno_Annotation_FindFirstApplicationData_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Anno_Annotation_FindFirstExperiment(Anno_Annotation self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Anno_Annotation_FindFirstExperiment_keyval0(Anno_Annotation self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Anno_Annotation_FindFirstExperiment_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Anno_Annotation_FindFirstExperiment_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Anno_Annotation_FindFirstExperiment_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
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
Expe_Experiment Anno_Annotation_FindFirstExperiment_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Anno_Annotation_FindFirstProject(Anno_Annotation self, ApiMap conditions)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findFirstProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findFirstProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Anno_Annotation_FindFirstProject_keyval0(Anno_Annotation self)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Anno_Annotation_FindFirstProject_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Anno_Annotation_FindFirstProject_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Anno_Annotation_FindFirstProject_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
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
Targ_Project Anno_Annotation_FindFirstProject_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Anno_Annotation_FindFirstTarget(Anno_Annotation self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup(Anno_Annotation self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup_keyval0(Anno_Annotation self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
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
Targ_TargetGroup Anno_Annotation_FindFirstTargetGroup_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Anno_Annotation_FindFirstTarget_keyval0(Anno_Annotation self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_Annotation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Anno_Annotation_FindFirstTarget_keyval1(Anno_Annotation self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_Annotation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Anno_Annotation_FindFirstTarget_keyval2(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_Annotation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Anno_Annotation_FindFirstTarget_keyval3(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_Annotation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
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
Targ_Target Anno_Annotation_FindFirstTarget_keyval4(Anno_Annotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_Annotation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anno_Annotation_Get(Anno_Annotation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_Annotation self
  @returns   the result
**/
Acco_AccessObject Anno_Annotation_GetAccess(Anno_Annotation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getAccess' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
Acco_AccessObject Anno_Annotation_GetActiveAccess(Anno_Annotation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.annotationStore

parent link
  @param  Anno_Annotation self
  @returns   the result
**/
Anno_AnnotationStore Anno_Annotation_GetAnnotationStore(Anno_Annotation self)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getAnnotationStore' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_GetApplicationData(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.author

Author of annotation
  @param  Anno_Annotation self
  @returns   the result
**/
Affi_Person Anno_Annotation_GetAuthor(Anno_Annotation self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getAuthor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anno_Annotation Anno_Annotation_GetByKey(Anno_Annotation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getByKey' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetClassName(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.dataUrl

DataUrl under which 
Annotation is stored
  @param  Anno_Annotation self
  @returns   the result
**/
Dloc_DataUrl Anno_Annotation_GetDataUrl(Anno_Annotation self)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getDataUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.date

The date at which the 
annotation is created.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetDate(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDate");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.description

The description 
of the annotation.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetDescription(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescription");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getDescription' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.details

Details field for 
comments.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetDetails(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @returns   the result
**/
ApiSet Anno_Annotation_GetExperiments(Anno_Annotation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getExperiments' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_GetFieldNames(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anno_Annotation_GetFullKey(Anno_Annotation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getFullKey' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiBoolean Anno_Annotation_GetInConstructor(Anno_Annotation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getInConstructor' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiBoolean Anno_Annotation_GetIsDeleted(Anno_Annotation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @returns  Local object key
**/
ApiObject Anno_Annotation_GetLocalKey(Anno_Annotation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.name

The name of the 
annotation.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetName(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getName' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetPackageName(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getPackageName' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetPackageShortName(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.parent

link to parent object 
- synonym for annotationStore
  @param  Anno_Annotation self
  @returns   the result
**/
Anno_AnnotationStore Anno_Annotation_GetParent(Anno_Annotation self)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.path

File name, relative to 
dataUrl, of data.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetPath(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getPath' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.projects

Annotations relevant 
to Project.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiSet Anno_Annotation_GetProjects(Anno_Annotation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProjects");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getProjects' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
ApiString Anno_Annotation_GetQualifiedName(Anno_Annotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getQualifiedName' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
Impl_MemopsRoot Anno_Annotation_GetRoot(Anno_Annotation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.serial

Unique identidier.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiInteger Anno_Annotation_GetSerial(Anno_Annotation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @returns   the result
**/
ApiSet Anno_Annotation_GetTargetGroups(Anno_Annotation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.Annotation.targets

Annotations relevant 
to Target.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiSet Anno_Annotation_GetTargets(Anno_Annotation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getTargets' is not callable");
  
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
  @param  Anno_Annotation self
  @returns   the result
**/
Impl_TopObject Anno_Annotation_GetTopObject(Anno_Annotation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Annotation.Annotation
  @param  Anno_AnnotationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_Annotation Anno_Annotation_Init(Anno_AnnotationStore parent, ApiMap attrlinks)
{
  
  return Anno_AnnotationStore_NewAnnotation(parent, attrlinks);
}

/**
  Constructor for ccp.general.Annotation.Annotation
  @param  Anno_AnnotationStore parent
  @param  Dloc_DataUrl dataUrl
  @param  char * path
  @returns  the new object
**/
Anno_Annotation Anno_Annotation_Init_reqd(Anno_AnnotationStore parent, Dloc_DataUrl dataUrl, char * path)
{
  
  Anno_Annotation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Anno_Annotation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_Annotation self
  @param  Impl_ApplicationData value
**/
void *Anno_Annotation_RemoveApplicationData(Anno_Annotation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  Expe_Experiment value
**/
void *Anno_Annotation_RemoveExperiment(Anno_Annotation self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @param  Targ_Project value
**/
void *Anno_Annotation_RemoveProject(Anno_Annotation self, Targ_Project value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'removeProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'removeProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @param  Targ_Target value
**/
void *Anno_Annotation_RemoveTarget(Anno_Annotation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  Targ_TargetGroup value
**/
void *Anno_Annotation_RemoveTargetGroup(Anno_Annotation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'removeTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'removeTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Annotation.Annotation
  @param  Anno_Annotation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anno_Annotation_Set(Anno_Annotation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_Annotation self
  @param  Acco_AccessObject value
**/
void *Anno_Annotation_SetAccess(Anno_Annotation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setAccess' is not callable");
  
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
  @param  Anno_Annotation self
  @param  ApiList values
**/
void *Anno_Annotation_SetApplicationData(Anno_Annotation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.author

Author of annotation
  @param  Anno_Annotation self
  @param  Affi_Person value
**/
void *Anno_Annotation_SetAuthor(Anno_Annotation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setAuthor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.dataUrl

DataUrl under which 
Annotation is stored
  @param  Anno_Annotation self
  @param  Dloc_DataUrl value
**/
void *Anno_Annotation_SetDataUrl(Anno_Annotation self, Dloc_DataUrl value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setDataUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.date

The date at which the 
annotation is created.
  @param  Anno_Annotation self
  @param  ApiString value
**/
void *Anno_Annotation_SetDate(Anno_Annotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDate");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.description

The description 
of the annotation.
  @param  Anno_Annotation self
  @param  ApiString value
**/
void *Anno_Annotation_SetDescription(Anno_Annotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescription");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setDescription' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.details

Details field for 
comments.
  @param  Anno_Annotation self
  @param  ApiString value
**/
void *Anno_Annotation_SetDetails(Anno_Annotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @param  ApiSet values
**/
void *Anno_Annotation_SetExperiments(Anno_Annotation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.name

The name of the 
annotation.
  @param  Anno_Annotation self
  @param  ApiString value
**/
void *Anno_Annotation_SetName(Anno_Annotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.path

File name, relative to 
dataUrl, of data.
  @param  Anno_Annotation self
  @param  ApiString value
**/
void *Anno_Annotation_SetPath(Anno_Annotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setPath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.projects

Annotations relevant 
to Project.
  @param  Anno_Annotation self
  @param  ApiSet values
**/
void *Anno_Annotation_SetProjects(Anno_Annotation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProjects");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setProjects' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.serial

Unique identidier.
  @param  Anno_Annotation self
  @param  ApiInteger value
**/
void *Anno_Annotation_SetSerial(Anno_Annotation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @param  ApiSet values
**/
void *Anno_Annotation_SetTargetGroups(Anno_Annotation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setTargetGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.Annotation.targets

Annotations relevant 
to Target.
  @param  Anno_Annotation self
  @param  ApiSet values
**/
void *Anno_Annotation_SetTargets(Anno_Annotation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.Annotation.experiments

Experiments 
annotated by Annotation
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_SortedExperiments(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.Annotation.projects

Annotations 
relevant to Project.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_SortedProjects(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProjects");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'sortedProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'sortedProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.Annotation.targetGroups
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_SortedTargetGroups(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'sortedTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.Annotation.targets

Annotations 
relevant to Target.
  @param  Anno_Annotation self
  @returns   the result
**/
ApiList Anno_Annotation_SortedTargets(Anno_Annotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.Annotation: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.Annotation: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
