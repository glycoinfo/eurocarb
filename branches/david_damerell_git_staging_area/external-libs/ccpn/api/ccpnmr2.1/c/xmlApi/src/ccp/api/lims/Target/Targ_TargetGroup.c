
#include "ccp.h"

/*
  General grouping system for Target. It can be used to represent a protein family.
*/

/* package ccp.api.lims.Target */

/**
  Add for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  Anno_Annotation value
**/
void *Targ_TargetGroup_AddAnnotation(Targ_TargetGroup self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addAnnotation' is not callable");
  
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
  @param  Targ_TargetGroup self
  @param  Impl_ApplicationData value
**/
void *Targ_TargetGroup_AddApplicationData(Targ_TargetGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  Cita_Citation value
**/
void *Targ_TargetGroup_AddCitation(Targ_TargetGroup self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCitation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  Dbr_Entry value
**/
void *Targ_TargetGroup_AddEntry(Targ_TargetGroup self, Dbr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
void *Targ_TargetGroup_AddSubTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSubTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addSubTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addSubTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  Targ_Target value
**/
void *Targ_TargetGroup_AddTarget(Targ_TargetGroup self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean complete
**/
void *Targ_TargetGroup_CheckAllValid(Targ_TargetGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean complete
**/
void *Targ_TargetGroup_CheckValid(Targ_TargetGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllAnnotations(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllAnnotations_keyval0(Targ_TargetGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllAnnotations_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllAnnotations_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllAnnotations_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
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
ApiSet Targ_TargetGroup_FindAllAnnotations_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetGroup_FindAllApplicationData(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetGroup_FindAllApplicationData_keyval0(Targ_TargetGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetGroup_FindAllApplicationData_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetGroup_FindAllApplicationData_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetGroup_FindAllApplicationData_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
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
ApiList Targ_TargetGroup_FindAllApplicationData_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllCitations(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllCitations_keyval0(Targ_TargetGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllCitations_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllCitations_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllCitations_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
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
ApiSet Targ_TargetGroup_FindAllCitations_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllEntrys(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntrys");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllEntrys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllEntrys' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllEntrys_keyval0(Targ_TargetGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllEntrys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllEntrys_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllEntrys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllEntrys_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllEntrys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllEntrys_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllEntrys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
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
ApiSet Targ_TargetGroup_FindAllEntrys_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllEntrys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllSubTargetGroups(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSubTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllSubTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllSubTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval0(Targ_TargetGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllSubTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllSubTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllSubTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllSubTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
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
ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllSubTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllTargets(Targ_TargetGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllTargets_keyval0(Targ_TargetGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllTargets_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllTargets_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetGroup_FindAllTargets_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
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
ApiSet Targ_TargetGroup_FindAllTargets_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation(Targ_TargetGroup self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval0(Targ_TargetGroup self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
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
Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData(Targ_TargetGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval0(Targ_TargetGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
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
Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Targ_TargetGroup_FindFirstCitation(Targ_TargetGroup self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval0(Targ_TargetGroup self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
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
Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dbr_Entry Targ_TargetGroup_FindFirstEntry(Targ_TargetGroup self, ApiMap conditions)
{
  
  Dbr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval0(Targ_TargetGroup self)
{
  
  Dbr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Dbr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dbr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dbr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
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
Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dbr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup(Targ_TargetGroup self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSubTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstSubTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstSubTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval0(Targ_TargetGroup self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstSubTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstSubTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstSubTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstSubTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
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
Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstSubTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetGroup_FindFirstTarget(Targ_TargetGroup self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetGroup_FindFirstTarget_keyval0(Targ_TargetGroup self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetGroup_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetGroup_FindFirstTarget_keyval1(Targ_TargetGroup self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetGroup_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetGroup_FindFirstTarget_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetGroup_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetGroup_FindFirstTarget_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetGroup_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
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
Targ_Target Targ_TargetGroup_FindFirstTarget_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetGroup_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Targ_TargetGroup_Get(Targ_TargetGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetGroup self
  @returns   the result
**/
Acco_AccessObject Targ_TargetGroup_GetAccess(Targ_TargetGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getAccess' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
Acco_AccessObject Targ_TargetGroup_GetActiveAccess(Targ_TargetGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiSet Targ_TargetGroup_GetAnnotations(Targ_TargetGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getAnnotations' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_GetApplicationData(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Targ_TargetGroup Targ_TargetGroup_GetByKey(Targ_TargetGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiSet Targ_TargetGroup_GetCitations(Targ_TargetGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getCitations' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetClassName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.completeName
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetCompleteName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompleteName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getCompleteName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getCompleteName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetDetails(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiSet Targ_TargetGroup_GetEntrys(Targ_TargetGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntrys");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getEntrys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getEntrys' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_GetFieldNames(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Targ_TargetGroup_GetFullKey(Targ_TargetGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.groupingType

it is the name of the 
grouping type, it can be a protein family group a gene family,... The 
difference between these is then entirely up to the understanding of the 
user.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetGroupingType(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroupingType");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getGroupingType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getGroupingType' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiBoolean Targ_TargetGroup_GetInConstructor(Targ_TargetGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getInConstructor' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiBoolean Targ_TargetGroup_GetIsDeleted(Targ_TargetGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @returns  Local object key
**/
ApiObject Targ_TargetGroup_GetLocalKey(Targ_TargetGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.namingSystem

The naming system used 
for this group. It can be used to represent a specific group associated 
to a target.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetNamingSystem(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getNamingSystem' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetPackageName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getPackageName' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetPackageShortName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.parent

link to parent object - 
synonym for targetStore
  @param  Targ_TargetGroup self
  @returns   the result
**/
Targ_TargetStore Targ_TargetGroup_GetParent(Targ_TargetGroup self)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getParent' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetQualifiedName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
Impl_MemopsRoot Targ_TargetGroup_GetRoot(Targ_TargetGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.shortName

The name of the target 
group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiString Targ_TargetGroup_GetShortName(Targ_TargetGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiSet Targ_TargetGroup_GetSubTargetGroups(Targ_TargetGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getSubTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getSubTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.targetGroup

The target group to 
which the sub target groups belong.
  @param  Targ_TargetGroup self
  @returns   the result
**/
Targ_TargetGroup Targ_TargetGroup_GetTargetGroup(Targ_TargetGroup self)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.targetStore

parent link
  @param  Targ_TargetGroup self
  @returns   the result
**/
Targ_TargetStore Targ_TargetGroup_GetTargetStore(Targ_TargetGroup self)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getTargetStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getTargetStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiSet Targ_TargetGroup_GetTargets(Targ_TargetGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getTargets' is not callable");
  
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
  @param  Targ_TargetGroup self
  @returns   the result
**/
Impl_TopObject Targ_TargetGroup_GetTopObject(Targ_TargetGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_TargetGroup Targ_TargetGroup_Init(Targ_TargetStore parent, ApiMap attrlinks)
{
  
  return Targ_TargetStore_NewTargetGroup(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore parent
  @param  char * namingSystem
  @param  char * shortName
  @returns  the new object
**/
Targ_TargetGroup Targ_TargetGroup_Init_reqd(Targ_TargetStore parent, char * namingSystem, char * shortName)
{
  
  Targ_TargetGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__namingSystem = ApiString_New(namingSystem);
  ApiString api__shortName = ApiString_New(shortName);

  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  PyDict_SetItemString(attrlinks, "shortName", api__shortName);
  
  obj = Targ_TargetGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__namingSystem);
  Py_DECREF(api__shortName);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  Anno_Annotation value
**/
void *Targ_TargetGroup_RemoveAnnotation(Targ_TargetGroup self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeAnnotation' is not callable");
  
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
  @param  Targ_TargetGroup self
  @param  Impl_ApplicationData value
**/
void *Targ_TargetGroup_RemoveApplicationData(Targ_TargetGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  Cita_Citation value
**/
void *Targ_TargetGroup_RemoveCitation(Targ_TargetGroup self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCitation");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  Dbr_Entry value
**/
void *Targ_TargetGroup_RemoveEntry(Targ_TargetGroup self, Dbr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
void *Targ_TargetGroup_RemoveSubTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSubTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeSubTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeSubTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  Targ_Target value
**/
void *Targ_TargetGroup_RemoveTarget(Targ_TargetGroup self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Targ_TargetGroup_Set(Targ_TargetGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetGroup self
  @param  Acco_AccessObject value
**/
void *Targ_TargetGroup_SetAccess(Targ_TargetGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
void *Targ_TargetGroup_SetAnnotations(Targ_TargetGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setAnnotations' is not callable");
  
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
  @param  Targ_TargetGroup self
  @param  ApiList values
**/
void *Targ_TargetGroup_SetApplicationData(Targ_TargetGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
void *Targ_TargetGroup_SetCitations(Targ_TargetGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.completeName
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
void *Targ_TargetGroup_SetCompleteName(Targ_TargetGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompleteName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setCompleteName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setCompleteName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
void *Targ_TargetGroup_SetDetails(Targ_TargetGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
void *Targ_TargetGroup_SetEntrys(Targ_TargetGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntrys");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setEntrys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setEntrys' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.groupingType

it is the name of the 
grouping type, it can be a protein family group a gene family,... The 
difference between these is then entirely up to the understanding of the 
user.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
void *Targ_TargetGroup_SetGroupingType(Targ_TargetGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroupingType");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setGroupingType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setGroupingType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.namingSystem

The naming system used 
for this group. It can be used to represent a specific group associated 
to a target.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
void *Targ_TargetGroup_SetNamingSystem(Targ_TargetGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setNamingSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.shortName

The name of the target 
group.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
void *Targ_TargetGroup_SetShortName(Targ_TargetGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setShortName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
void *Targ_TargetGroup_SetSubTargetGroups(Targ_TargetGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setSubTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setSubTargetGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.targetGroup

The target group to 
which the sub target groups belong.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
void *Targ_TargetGroup_SetTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
void *Targ_TargetGroup_SetTargets(Targ_TargetGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_SortedAnnotations(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_SortedCitations(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_SortedEntrys(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntrys");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'sortedEntrys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'sortedEntrys' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_SortedSubTargetGroups(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSubTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'sortedSubTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'sortedSubTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
ApiList Targ_TargetGroup_SortedTargets(Targ_TargetGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetGroup: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetGroup: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
