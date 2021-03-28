
#include "ccp.h"

/*
  The project groups a list of targets together. It may be used to represent a different kind of grouping for targets than TargetGroup. It could groups targets that are not related by their properties.
*/

/* package ccp.api.lims.Target */

/**
  Add for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  Anno_Annotation value
**/
void *Targ_Project_AddAnnotation(Targ_Project self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'addAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'addAnnotation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  Impl_ApplicationData value
**/
void *Targ_Project_AddApplicationData(Targ_Project self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  Targ_Project value
**/
void *Targ_Project_AddSubProject(Targ_Project self, Targ_Project value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSubProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'addSubProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'addSubProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  ApiBoolean complete
**/
void *Targ_Project_CheckAllValid(Targ_Project self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  ApiBoolean complete
**/
void *Targ_Project_CheckValid(Targ_Project self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllAnnotations(Targ_Project self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findAllAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllAnnotations_keyval0(Targ_Project self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllAnnotations_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllAnnotations_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllAnnotations_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
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
ApiSet Targ_Project_FindAllAnnotations_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_Project_FindAllApplicationData(Targ_Project self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findAllApplicationData' is not callable");
  
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
  @param  Targ_Project self
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_Project_FindAllApplicationData_keyval0(Targ_Project self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_Project_FindAllApplicationData_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_Project_FindAllApplicationData_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_Project_FindAllApplicationData_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
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
ApiList Targ_Project_FindAllApplicationData_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllSubProjects(Targ_Project self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSubProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findAllSubProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findAllSubProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllSubProjects_keyval0(Targ_Project self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindAllSubProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllSubProjects_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindAllSubProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllSubProjects_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindAllSubProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllSubProjects_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindAllSubProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
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
ApiSet Targ_Project_FindAllSubProjects_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindAllSubProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllTargets(Targ_Project self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllTargets_keyval0(Targ_Project self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllTargets_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllTargets_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_Project_FindAllTargets_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
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
ApiSet Targ_Project_FindAllTargets_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_Project_FindFirstAnnotation(Targ_Project self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findFirstAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_Project_FindFirstAnnotation_keyval0(Targ_Project self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_Project_FindFirstAnnotation_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_Project_FindFirstAnnotation_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_Project_FindFirstAnnotation_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
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
Anno_Annotation Targ_Project_FindFirstAnnotation_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_Project_FindFirstApplicationData(Targ_Project self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findFirstApplicationData' is not callable");
  
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
  @param  Targ_Project self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_Project_FindFirstApplicationData_keyval0(Targ_Project self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_Project_FindFirstApplicationData_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_Project_FindFirstApplicationData_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_Project_FindFirstApplicationData_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
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
Impl_ApplicationData Targ_Project_FindFirstApplicationData_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_Project_FindFirstSubProject(Targ_Project self, ApiMap conditions)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSubProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findFirstSubProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findFirstSubProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_Project_FindFirstSubProject_keyval0(Targ_Project self)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindFirstSubProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_Project_FindFirstSubProject_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindFirstSubProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_Project_FindFirstSubProject_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindFirstSubProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_Project_FindFirstSubProject_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindFirstSubProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
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
Targ_Project Targ_Project_FindFirstSubProject_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindFirstSubProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_Project_FindFirstTarget(Targ_Project self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_Project_FindFirstTarget_keyval0(Targ_Project self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_Project_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_Project_FindFirstTarget_keyval1(Targ_Project self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_Project_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_Project_FindFirstTarget_keyval2(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_Project_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_Project_FindFirstTarget_keyval3(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_Project_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
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
Targ_Target Targ_Project_FindFirstTarget_keyval4(Targ_Project self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_Project_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Targ_Project_Get(Targ_Project self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_Project self
  @returns   the result
**/
Acco_AccessObject Targ_Project_GetAccess(Targ_Project self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getAccess' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
Acco_AccessObject Targ_Project_GetActiveAccess(Targ_Project self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @returns   the result
**/
ApiSet Targ_Project_GetAnnotations(Targ_Project self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getAnnotations' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiList Targ_Project_GetApplicationData(Targ_Project self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Targ_Project Targ_Project_GetByKey(Targ_Project self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getByKey' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetClassName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.completeName

The complete name of the 
project.
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetCompleteName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompleteName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getCompleteName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getCompleteName' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiList Targ_Project_GetFieldNames(Targ_Project self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Targ_Project_GetFullKey(Targ_Project self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getFullKey' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiBoolean Targ_Project_GetInConstructor(Targ_Project self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getInConstructor' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiBoolean Targ_Project_GetIsDeleted(Targ_Project self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Target.Project
  @param  Targ_Project self
  @returns  Local object key
**/
ApiObject Targ_Project_GetLocalKey(Targ_Project self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getLocalKey' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetPackageName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getPackageName' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetPackageShortName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.parent

link to parent object - synonym 
for targetStore
  @param  Targ_Project self
  @returns   the result
**/
Targ_TargetStore Targ_Project_GetParent(Targ_Project self)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.project

The project to which the sub 
projects belong.
  @param  Targ_Project self
  @returns   the result
**/
Targ_Project Targ_Project_GetProject(Targ_Project self)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getProject' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetQualifiedName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getQualifiedName' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
Impl_MemopsRoot Targ_Project_GetRoot(Targ_Project self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.serial

Unique identifier.
  @param  Targ_Project self
  @returns   the result
**/
ApiInteger Targ_Project_GetSerial(Targ_Project self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.shortName

The short name of the project 
used for display.
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetShortName(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.startDate

Starting date of the project.
  @param  Targ_Project self
  @returns   the result
**/
ApiString Targ_Project_GetStartDate(Targ_Project self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getStartDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @returns   the result
**/
ApiSet Targ_Project_GetSubProjects(Targ_Project self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getSubProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getSubProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.targetStore

parent link
  @param  Targ_Project self
  @returns   the result
**/
Targ_TargetStore Targ_Project_GetTargetStore(Targ_Project self)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getTargetStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.Project.targets

The list of target that belongs 
to a particular project.
  @param  Targ_Project self
  @returns   the result
**/
ApiSet Targ_Project_GetTargets(Targ_Project self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getTargets' is not callable");
  
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
  @param  Targ_Project self
  @returns   the result
**/
Impl_TopObject Targ_Project_GetTopObject(Targ_Project self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Target.Project
  @param  Targ_TargetStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_Project Targ_Project_Init(Targ_TargetStore parent, ApiMap attrlinks)
{
  
  return Targ_TargetStore_NewProject(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Target.Project
  @param  Targ_TargetStore parent
  @param  char * completeName
  @param  char * shortName
  @returns  the new object
**/
Targ_Project Targ_Project_Init_reqd(Targ_TargetStore parent, char * completeName, char * shortName)
{
  
  Targ_Project  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__completeName = ApiString_New(completeName);
  ApiString api__shortName = ApiString_New(shortName);

  PyDict_SetItemString(attrlinks, "completeName", api__completeName);
  PyDict_SetItemString(attrlinks, "shortName", api__shortName);
  
  obj = Targ_Project_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__completeName);
  Py_DECREF(api__shortName);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  Anno_Annotation value
**/
void *Targ_Project_RemoveAnnotation(Targ_Project self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'removeAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'removeAnnotation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Project self
  @param  Impl_ApplicationData value
**/
void *Targ_Project_RemoveApplicationData(Targ_Project self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  Targ_Project value
**/
void *Targ_Project_RemoveSubProject(Targ_Project self, Targ_Project value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSubProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'removeSubProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'removeSubProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Target.Project
  @param  Targ_Project self
  @param  ApiString name
  @param  ApiObject value
**/
void *Targ_Project_Set(Targ_Project self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_Project self
  @param  Acco_AccessObject value
**/
void *Targ_Project_SetAccess(Targ_Project self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @param  ApiSet values
**/
void *Targ_Project_SetAnnotations(Targ_Project self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setAnnotations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Targ_Project self
  @param  ApiList values
**/
void *Targ_Project_SetApplicationData(Targ_Project self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.completeName

The complete name of the 
project.
  @param  Targ_Project self
  @param  ApiString value
**/
void *Targ_Project_SetCompleteName(Targ_Project self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompleteName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setCompleteName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setCompleteName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.project

The project to which the sub 
projects belong.
  @param  Targ_Project self
  @param  Targ_Project value
**/
void *Targ_Project_SetProject(Targ_Project self, Targ_Project value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.serial

Unique identifier.
  @param  Targ_Project self
  @param  ApiInteger value
**/
void *Targ_Project_SetSerial(Targ_Project self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.shortName

The short name of the project 
used for display.
  @param  Targ_Project self
  @param  ApiString value
**/
void *Targ_Project_SetShortName(Targ_Project self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setShortName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.startDate

Starting date of the project.
  @param  Targ_Project self
  @param  ApiString value
**/
void *Targ_Project_SetStartDate(Targ_Project self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setStartDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @param  ApiSet values
**/
void *Targ_Project_SetSubProjects(Targ_Project self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setSubProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setSubProjects' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.Project.targets

The list of target that belongs 
to a particular project.
  @param  Targ_Project self
  @param  ApiSet values
**/
void *Targ_Project_SetTargets(Targ_Project self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.Project.annotations

Projects annotated by 
Annotation.
  @param  Targ_Project self
  @returns   the result
**/
ApiList Targ_Project_SortedAnnotations(Targ_Project self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.Project.subProjects

List of sub project 
contained in a project.
  @param  Targ_Project self
  @returns   the result
**/
ApiList Targ_Project_SortedSubProjects(Targ_Project self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSubProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'sortedSubProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'sortedSubProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.Project.targets

The list of target that 
belongs to a particular project.
  @param  Targ_Project self
  @returns   the result
**/
ApiList Targ_Project_SortedTargets(Targ_Project self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.Project: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.Project: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
