
#include "ccp.h"

/*
  This experiment subtype is used for importing samples into the system.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for ccp.lims.Experiment.Experiment.annotations

Annotations relevant 
to Experiment
  @param  Expe_ImportSample self
  @param  Anno_Annotation value
**/
void *Expe_ImportSample_AddAnnotation(Expe_ImportSample self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'addAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'addAnnotation' is not callable");
  
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
  @param  Expe_ImportSample self
  @param  Impl_ApplicationData value
**/
void *Expe_ImportSample_AddApplicationData(Expe_ImportSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  Expb_BlueprintStatus value
**/
void *Expe_ImportSample_AddBlueprintStatus(Expe_ImportSample self, Expb_BlueprintStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'addBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'addBlueprintStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  Expe_Experiment value
**/
void *Expe_ImportSample_AddNext(Expe_ImportSample self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'addNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'addNext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  Expe_Experiment value
**/
void *Expe_ImportSample_AddPrevious(Expe_ImportSample self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'addPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'addPrevious' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Experiment.ImportSample
  @param  Expe_ImportSample self
  @param  ApiBoolean complete
**/
void *Expe_ImportSample_CheckAllValid(Expe_ImportSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Experiment.ImportSample
  @param  Expe_ImportSample self
  @param  ApiBoolean complete
**/
void *Expe_ImportSample_CheckValid(Expe_ImportSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllAnnotations(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllAnnotations_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllAnnotations_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllAnnotations_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllAnnotations_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllAnnotations_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ImportSample_FindAllApplicationData(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ImportSample_FindAllApplicationData_keyval0(Expe_ImportSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ImportSample_FindAllApplicationData_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ImportSample_FindAllApplicationData_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_ImportSample_FindAllApplicationData_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
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
ApiList Expe_ImportSample_FindAllApplicationData_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllBlueprintStatuss(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllBlueprintStatuss_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllBlueprintStatuss_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllBlueprintStatuss_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllBlueprintStatuss_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllBlueprintStatuss_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllNext(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllNext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllNext_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllNext_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllNext_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllNext_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllNext_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllOutputSamples(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllOutputSamples_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllOutputSamples_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllOutputSamples_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllOutputSamples_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllOutputSamples_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllParameters(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllParameters_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllParameters_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllParameters_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllParameters_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllParameters_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllPrevious(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllPrevious' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllPrevious_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllPrevious_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllPrevious_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllPrevious_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllPrevious_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllSampleIos(Expe_ImportSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findAllSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findAllSampleIos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllSampleIos_keyval0(Expe_ImportSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllSampleIos_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllSampleIos_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_ImportSample_FindAllSampleIos_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
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
ApiSet Expe_ImportSample_FindAllSampleIos_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_ImportSample_FindFirstAnnotation(Expe_ImportSample self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_ImportSample_FindFirstAnnotation_keyval0(Expe_ImportSample self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_ImportSample_FindFirstAnnotation_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_ImportSample_FindFirstAnnotation_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_ImportSample_FindFirstAnnotation_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
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
Anno_Annotation Expe_ImportSample_FindFirstAnnotation_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData(Expe_ImportSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData_keyval0(Expe_ImportSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ImportSample self
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
Impl_ApplicationData Expe_ImportSample_FindFirstApplicationData_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus(Expe_ImportSample self, ApiMap conditions)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstBlueprintStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus_keyval0(Expe_ImportSample self)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
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
Expb_BlueprintStatus Expe_ImportSample_FindFirstBlueprintStatus_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstNext(Expe_ImportSample self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstNext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstNext_keyval0(Expe_ImportSample self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstNext_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstNext_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstNext_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
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
Expe_Experiment Expe_ImportSample_FindFirstNext_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample(Expe_ImportSample self, ApiMap conditions)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample_keyval0(Expe_ImportSample self)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_ImportSample self
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
Expe_OutputSample Expe_ImportSample_FindFirstOutputSample_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_ImportSample_FindFirstParameter(Expe_ImportSample self, ApiMap conditions)
{
  
  Expe_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_ImportSample_FindFirstParameter_keyval0(Expe_ImportSample self)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_ImportSample_FindFirstParameter_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_ImportSample_FindFirstParameter_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_ImportSample_FindFirstParameter_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
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
Expe_Parameter Expe_ImportSample_FindFirstParameter_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstPrevious(Expe_ImportSample self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstPrevious' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstPrevious_keyval0(Expe_ImportSample self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstPrevious_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstPrevious_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_ImportSample_FindFirstPrevious_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
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
Expe_Experiment Expe_ImportSample_FindFirstPrevious_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_ImportSample_FindFirstSampleIo(Expe_ImportSample self, ApiMap conditions)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleIo");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'findFirstSampleIo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'findFirstSampleIo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_ImportSample_FindFirstSampleIo_keyval0(Expe_ImportSample self)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_ImportSample_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_ImportSample_FindFirstSampleIo_keyval1(Expe_ImportSample self, char * key, ApiObject value)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_ImportSample_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_ImportSample_FindFirstSampleIo_keyval2(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_ImportSample_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_ImportSample_FindFirstSampleIo_keyval3(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_ImportSample_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_ImportSample self
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
Expe_InputSample Expe_ImportSample_FindFirstSampleIo_keyval4(Expe_ImportSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_ImportSample_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Experiment.ImportSample
  @param  Expe_ImportSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expe_ImportSample_Get(Expe_ImportSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ImportSample self
  @returns   the result
**/
Acco_AccessObject Expe_ImportSample_GetAccess(Expe_ImportSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.annotations

Annotations relevant 
to Experiment
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetAnnotations(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getAnnotations' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_GetApplicationData(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetBlueprintStatuss(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Experiment.ImportSample
  @param  Expe_ImportSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expe_ImportSample Expe_ImportSample_GetByKey(Expe_ImportSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expe_ImportSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getByKey' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetClassName(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.creator

The person who is in 
charge for this experiment or who created this experiment.
  @param  Expe_ImportSample self
  @returns   the result
**/
Affi_Person Expe_ImportSample_GetCreator(Expe_ImportSample self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getCreator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.details

Details field for 
comments.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetDetails(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.endDate

The end date of the 
experiment step.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetEndDate(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getEndDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.expBlueprint

The trial on which 
this experiment is done. ExpBlueprint can therefore also be seen as way 
of logically grouping experiments.
  @param  Expe_ImportSample self
  @returns   the result
**/
Expb_ExpBlueprint Expe_ImportSample_GetExpBlueprint(Expe_ImportSample self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getExpBlueprint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.experimentGroup

The 
ExperimentGroup is used to associate Experiments of same group type.
  @param  Expe_ImportSample self
  @returns   the result
**/
Expe_ExperimentGroup Expe_ImportSample_GetExperimentGroup(Expe_ImportSample self)
{
  
  Expe_ExperimentGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getExperimentGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.experimentStore

parent link
  @param  Expe_ImportSample self
  @returns   the result
**/
Expe_ExperimentStore Expe_ImportSample_GetExperimentStore(Expe_ImportSample self)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getExperimentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.experimentType

The experiment 
type: e.g. 'Cloning', 'Protein Expression', 'Protein Purification', 
'Crystallogenesis', 'NMR', ...
  @param  Expe_ImportSample self
  @returns   the result
**/
Clas_ExperimentType Expe_ImportSample_GetExperimentType(Expe_ImportSample self)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getExperimentType' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_GetFieldNames(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.group

Group where experiment was 
carried out.
  @param  Expe_ImportSample self
  @returns   the result
**/
Affi_Group Expe_ImportSample_GetGroup(Expe_ImportSample self)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getGroup' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiBoolean Expe_ImportSample_GetInConstructor(Expe_ImportSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.instrument

Instrument (e.g. 
robot, spectrometer) used for Experiment.
  @param  Expe_ImportSample self
  @returns   the result
**/
Inst_Instrument Expe_ImportSample_GetInstrument(Expe_ImportSample self)
{
  
  Inst_Instrument obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getInstrument' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiBoolean Expe_ImportSample_GetIsDeleted(Expe_ImportSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.isLocked

Is this experiment 
locked for read-only access after group leader cheked it?
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiBoolean Expe_ImportSample_GetIsLocked(Expe_ImportSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLocked");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getIsLocked'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getIsLocked' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.lastEditedDate

Last date 
experiment was edited.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetLastEditedDate(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getLastEditedDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.lastEditor

Person who last 
modified Experiment.
  @param  Expe_ImportSample self
  @returns   the result
**/
Affi_Person Expe_ImportSample_GetLastEditor(Expe_ImportSample self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getLastEditor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.method

Method used for an 
experiment.
  @param  Expe_ImportSample self
  @returns   the result
**/
Meth_Method Expe_ImportSample_GetMethod(Expe_ImportSample self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.name

The name of the Experiment, 
for display purposes
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetName(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetNext(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getNext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetOutputSamples(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getOutputSamples' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetPackageName(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getPackageName' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetPackageShortName(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.parameters

child link to class 
Parameter
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetParameters(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.parent

link to parent object - 
synonym for experimentStore
  @param  Expe_ImportSample self
  @returns   the result
**/
Expe_ExperimentStore Expe_ImportSample_GetParent(Expe_ImportSample self)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetPrevious(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getPrevious' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.protocol

The protocol used by 
the experiment.
  @param  Expe_ImportSample self
  @returns   the result
**/
Prot_Protocol Expe_ImportSample_GetProtocol(Expe_ImportSample self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getProtocol' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetQualifiedName(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getQualifiedName' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
Impl_MemopsRoot Expe_ImportSample_GetRoot(Expe_ImportSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.sampleIos

child link to class 
InputSample
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiSet Expe_ImportSample_GetSampleIos(Expe_ImportSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getSampleIos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.serial

Unique identifier.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiInteger Expe_ImportSample_GetSerial(Expe_ImportSample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.startDate

The start date of the 
experiment step (e.g. '2003-12-25', '2003-12-25:09:00').
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetStartDate(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getStartDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.status

The status of the 
experiment. e.g. 'OK', 'Failed', 'In process' or 'To be run'.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiString Expe_ImportSample_GetStatus(Expe_ImportSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.ImportSample.supplier

The supplier of the 
import sample.
  @param  Expe_ImportSample self
  @returns   the result
**/
Affi_Organisation Expe_ImportSample_GetSupplier(Expe_ImportSample self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSupplier");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getSupplier'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getSupplier' is not callable");
  
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
  @param  Expe_ImportSample self
  @returns   the result
**/
Impl_TopObject Expe_ImportSample_GetTopObject(Expe_ImportSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_ImportSample Expe_ImportSample_Init(Expe_ExperimentStore parent, ApiMap attrlinks)
{
  
  return Expe_ExperimentStore_NewImportSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore parent
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @param  Affi_Organisation supplier
  @returns  the new object
**/
Expe_ImportSample Expe_ImportSample_Init_reqd(Expe_ExperimentStore parent, char * endDate, Clas_ExperimentType experimentType, char * startDate, Affi_Organisation supplier)
{
  
  Expe_ImportSample  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__endDate = ApiString_New(endDate);
  ApiString api__startDate = ApiString_New(startDate);

  PyDict_SetItemString(attrlinks, "endDate", api__endDate);
  PyDict_SetItemString(attrlinks, "experimentType", experimentType);
  PyDict_SetItemString(attrlinks, "startDate", api__startDate);
  PyDict_SetItemString(attrlinks, "supplier", supplier);
  
  obj = Expe_ImportSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__endDate);
  Py_DECREF(api__startDate);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @param  Anno_Annotation value
**/
void *Expe_ImportSample_RemoveAnnotation(Expe_ImportSample self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'removeAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'removeAnnotation' is not callable");
  
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
  @param  Expe_ImportSample self
  @param  Impl_ApplicationData value
**/
void *Expe_ImportSample_RemoveApplicationData(Expe_ImportSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  Expb_BlueprintStatus value
**/
void *Expe_ImportSample_RemoveBlueprintStatus(Expe_ImportSample self, Expb_BlueprintStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'removeBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'removeBlueprintStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  Expe_Experiment value
**/
void *Expe_ImportSample_RemoveNext(Expe_ImportSample self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'removeNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'removeNext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  Expe_Experiment value
**/
void *Expe_ImportSample_RemovePrevious(Expe_ImportSample self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'removePrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'removePrevious' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Experiment.ImportSample
  @param  Expe_ImportSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expe_ImportSample_Set(Expe_ImportSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ImportSample self
  @param  Acco_AccessObject value
**/
void *Expe_ImportSample_SetAccess(Expe_ImportSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.annotations

Annotations relevant 
to Experiment
  @param  Expe_ImportSample self
  @param  ApiSet values
**/
void *Expe_ImportSample_SetAnnotations(Expe_ImportSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setAnnotations' is not callable");
  
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
  @param  Expe_ImportSample self
  @param  ApiList values
**/
void *Expe_ImportSample_SetApplicationData(Expe_ImportSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @param  ApiSet values
**/
void *Expe_ImportSample_SetBlueprintStatuss(Expe_ImportSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setBlueprintStatuss' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.creator

The person who is in 
charge for this experiment or who created this experiment.
  @param  Expe_ImportSample self
  @param  Affi_Person value
**/
void *Expe_ImportSample_SetCreator(Expe_ImportSample self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setCreator' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.details

Details field for 
comments.
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetDetails(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.endDate

The end date of the 
experiment step.
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetEndDate(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setEndDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.expBlueprint

The trial on which 
this experiment is done. ExpBlueprint can therefore also be seen as way 
of logically grouping experiments.
  @param  Expe_ImportSample self
  @param  Expb_ExpBlueprint value
**/
void *Expe_ImportSample_SetExpBlueprint(Expe_ImportSample self, Expb_ExpBlueprint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setExpBlueprint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.experimentGroup

The 
ExperimentGroup is used to associate Experiments of same group type.
  @param  Expe_ImportSample self
  @param  Expe_ExperimentGroup value
**/
void *Expe_ImportSample_SetExperimentGroup(Expe_ImportSample self, Expe_ExperimentGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setExperimentGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.experimentType

The experiment 
type: e.g. 'Cloning', 'Protein Expression', 'Protein Purification', 
'Crystallogenesis', 'NMR', ...
  @param  Expe_ImportSample self
  @param  Clas_ExperimentType value
**/
void *Expe_ImportSample_SetExperimentType(Expe_ImportSample self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.group

Group where experiment was 
carried out.
  @param  Expe_ImportSample self
  @param  Affi_Group value
**/
void *Expe_ImportSample_SetGroup(Expe_ImportSample self, Affi_Group value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.instrument

Instrument (e.g. 
robot, spectrometer) used for Experiment.
  @param  Expe_ImportSample self
  @param  Inst_Instrument value
**/
void *Expe_ImportSample_SetInstrument(Expe_ImportSample self, Inst_Instrument value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setInstrument' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.isLocked

Is this experiment 
locked for read-only access after group leader cheked it?
  @param  Expe_ImportSample self
  @param  ApiBoolean value
**/
void *Expe_ImportSample_SetIsLocked(Expe_ImportSample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsLocked");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setIsLocked'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setIsLocked' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.lastEditedDate

Last date 
experiment was edited.
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetLastEditedDate(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setLastEditedDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.lastEditor

Person who last 
modified Experiment.
  @param  Expe_ImportSample self
  @param  Affi_Person value
**/
void *Expe_ImportSample_SetLastEditor(Expe_ImportSample self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setLastEditor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.method

Method used for an 
experiment.
  @param  Expe_ImportSample self
  @param  Meth_Method value
**/
void *Expe_ImportSample_SetMethod(Expe_ImportSample self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.name

The name of the Experiment, 
for display purposes
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetName(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiSet values
**/
void *Expe_ImportSample_SetNext(Expe_ImportSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setNext' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @param  ApiSet values
**/
void *Expe_ImportSample_SetPrevious(Expe_ImportSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setPrevious' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.protocol

The protocol used by 
the experiment.
  @param  Expe_ImportSample self
  @param  Prot_Protocol value
**/
void *Expe_ImportSample_SetProtocol(Expe_ImportSample self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setProtocol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.serial

Unique identifier.
  @param  Expe_ImportSample self
  @param  ApiInteger value
**/
void *Expe_ImportSample_SetSerial(Expe_ImportSample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.startDate

The start date of the 
experiment step (e.g. '2003-12-25', '2003-12-25:09:00').
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetStartDate(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setStartDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.status

The status of the 
experiment. e.g. 'OK', 'Failed', 'In process' or 'To be run'.
  @param  Expe_ImportSample self
  @param  ApiString value
**/
void *Expe_ImportSample_SetStatus(Expe_ImportSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.ImportSample.supplier

The supplier of the 
import sample.
  @param  Expe_ImportSample self
  @param  Affi_Organisation value
**/
void *Expe_ImportSample_SetSupplier(Expe_ImportSample self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSupplier");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'setSupplier'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'setSupplier' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedAnnotations(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedBlueprintStatuss(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedNext(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedNext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedOutputSamples(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedParameters(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedPrevious(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedPrevious' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.sampleIos

child link to class 
InputSample
  @param  Expe_ImportSample self
  @returns   the result
**/
ApiList Expe_ImportSample_SortedSampleIos(Expe_ImportSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.ImportSample: cannot find method 'sortedSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.ImportSample: method 'sortedSampleIos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
