
#include "ccp.h"

/*
  The information on the experiment that has been done.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for ccp.lims.Experiment.Experiment.annotations

Annotations relevant 
to Experiment
  @param  Expe_Experiment self
  @param  Anno_Annotation value
**/
void *Expe_Experiment_AddAnnotation(Expe_Experiment self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'addAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'addAnnotation' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Impl_ApplicationData value
**/
void *Expe_Experiment_AddApplicationData(Expe_Experiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  Expb_BlueprintStatus value
**/
void *Expe_Experiment_AddBlueprintStatus(Expe_Experiment self, Expb_BlueprintStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'addBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'addBlueprintStatus' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expe_Experiment value
**/
void *Expe_Experiment_AddNext(Expe_Experiment self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'addNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'addNext' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expe_Experiment value
**/
void *Expe_Experiment_AddPrevious(Expe_Experiment self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'addPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'addPrevious' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  ApiBoolean complete
**/
void *Expe_Experiment_CheckAllValid(Expe_Experiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  ApiBoolean complete
**/
void *Expe_Experiment_CheckValid(Expe_Experiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'checkValid' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllAnnotations(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllAnnotations' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllAnnotations_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllAnnotations_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllAnnotations_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllAnnotations_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllAnnotations_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_Experiment_FindAllApplicationData(Expe_Experiment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllApplicationData' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_Experiment_FindAllApplicationData_keyval0(Expe_Experiment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_Experiment_FindAllApplicationData_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_Experiment_FindAllApplicationData_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_Experiment_FindAllApplicationData_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
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
ApiList Expe_Experiment_FindAllApplicationData_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllBlueprintStatuss(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllBlueprintStatuss_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllBlueprintStatuss_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllBlueprintStatuss_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllBlueprintStatuss_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllBlueprintStatuss_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllNext(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllNext' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllNext_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllNext_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllNext_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllNext_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllNext_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllOutputSamples(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllOutputSamples' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllOutputSamples_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllOutputSamples_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllOutputSamples_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllOutputSamples_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.outputSamples

child link to 
class OutputSample
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllOutputSamples_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllParameters(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllParameters' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllParameters_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllParameters_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllParameters_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllParameters_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllParameters_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllPrevious(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllPrevious' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllPrevious_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllPrevious_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllPrevious_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllPrevious_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllPrevious_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllSampleIos(Expe_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findAllSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findAllSampleIos' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllSampleIos_keyval0(Expe_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllSampleIos_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllSampleIos_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expe_Experiment_FindAllSampleIos_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
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
ApiSet Expe_Experiment_FindAllSampleIos_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindAllSampleIos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_Experiment_FindFirstAnnotation(Expe_Experiment self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstAnnotation' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_Experiment_FindFirstAnnotation_keyval0(Expe_Experiment self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_Experiment_FindFirstAnnotation_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_Experiment_FindFirstAnnotation_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Expe_Experiment_FindFirstAnnotation_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
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
Anno_Annotation Expe_Experiment_FindFirstAnnotation_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData(Expe_Experiment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData_keyval0(Expe_Experiment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Experiment self
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
Impl_ApplicationData Expe_Experiment_FindFirstApplicationData_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus(Expe_Experiment self, ApiMap conditions)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstBlueprintStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus_keyval0(Expe_Experiment self)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
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
Expb_BlueprintStatus Expe_Experiment_FindFirstBlueprintStatus_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstNext(Expe_Experiment self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstNext' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstNext_keyval0(Expe_Experiment self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstNext_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstNext_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstNext_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.next

The next experiments 
associated to the current on.
  @param  Expe_Experiment self
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
Expe_Experiment Expe_Experiment_FindFirstNext_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstNext(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_Experiment_FindFirstOutputSample(Expe_Experiment self, ApiMap conditions)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstOutputSample' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_Experiment_FindFirstOutputSample_keyval0(Expe_Experiment self)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_Experiment_FindFirstOutputSample_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_Experiment_FindFirstOutputSample_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Expe_Experiment_FindFirstOutputSample_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.outputSamples

child link 
to class OutputSample
  @param  Expe_Experiment self
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
Expe_OutputSample Expe_Experiment_FindFirstOutputSample_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_Experiment_FindFirstParameter(Expe_Experiment self, ApiMap conditions)
{
  
  Expe_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstParameter' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_Experiment_FindFirstParameter_keyval0(Expe_Experiment self)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_Experiment_FindFirstParameter_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_Experiment_FindFirstParameter_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Expe_Experiment_FindFirstParameter_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.parameters

child link to 
class Parameter
  @param  Expe_Experiment self
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
Expe_Parameter Expe_Experiment_FindFirstParameter_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstPrevious(Expe_Experiment self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstPrevious' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstPrevious_keyval0(Expe_Experiment self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstPrevious_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstPrevious_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Expe_Experiment_FindFirstPrevious_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.previous

The previous 
experiments associated to the current on.
  @param  Expe_Experiment self
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
Expe_Experiment Expe_Experiment_FindFirstPrevious_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstPrevious(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_Experiment_FindFirstSampleIo(Expe_Experiment self, ApiMap conditions)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleIo");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'findFirstSampleIo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'findFirstSampleIo' is not callable");
  
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
  @param  Expe_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_Experiment_FindFirstSampleIo_keyval0(Expe_Experiment self)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_Experiment_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_Experiment_FindFirstSampleIo_keyval1(Expe_Experiment self, char * key, ApiObject value)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_Experiment_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_Experiment_FindFirstSampleIo_keyval2(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_Experiment_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Expe_Experiment_FindFirstSampleIo_keyval3(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_Experiment_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Experiment.Experiment.sampleIos

child link to 
class InputSample
  @param  Expe_Experiment self
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
Expe_InputSample Expe_Experiment_FindFirstSampleIo_keyval4(Expe_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_Experiment_FindFirstSampleIo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expe_Experiment_Get(Expe_Experiment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_Experiment self
  @returns   the result
**/
Acco_AccessObject Expe_Experiment_GetAccess(Expe_Experiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getAccess' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Acco_AccessObject Expe_Experiment_GetActiveAccess(Expe_Experiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getActiveAccess' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetAnnotations(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getAnnotations' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_GetApplicationData(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetBlueprintStatuss(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expe_Experiment Expe_Experiment_GetByKey(Expe_Experiment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getByKey' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetClassName(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getClassName' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Affi_Person Expe_Experiment_GetCreator(Expe_Experiment self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getCreator' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetDetails(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getDetails' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetEndDate(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getEndDate' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Expb_ExpBlueprint Expe_Experiment_GetExpBlueprint(Expe_Experiment self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getExpBlueprint' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Expe_ExperimentGroup Expe_Experiment_GetExperimentGroup(Expe_Experiment self)
{
  
  Expe_ExperimentGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getExperimentGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.experimentStore

parent link
  @param  Expe_Experiment self
  @returns   the result
**/
Expe_ExperimentStore Expe_Experiment_GetExperimentStore(Expe_Experiment self)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getExperimentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getExperimentStore' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Clas_ExperimentType Expe_Experiment_GetExperimentType(Expe_Experiment self)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getExperimentType' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_GetFieldNames(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expe_Experiment_GetFullKey(Expe_Experiment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.group

Group where experiment was 
carried out.
  @param  Expe_Experiment self
  @returns   the result
**/
Affi_Group Expe_Experiment_GetGroup(Expe_Experiment self)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getGroup' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiBoolean Expe_Experiment_GetInConstructor(Expe_Experiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getInConstructor' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Inst_Instrument Expe_Experiment_GetInstrument(Expe_Experiment self)
{
  
  Inst_Instrument obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getInstrument' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiBoolean Expe_Experiment_GetIsDeleted(Expe_Experiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getIsDeleted' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiBoolean Expe_Experiment_GetIsLocked(Expe_Experiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLocked");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getIsLocked'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getIsLocked' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetLastEditedDate(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getLastEditedDate' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Affi_Person Expe_Experiment_GetLastEditor(Expe_Experiment self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getLastEditor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @returns  Local object key
**/
ApiObject Expe_Experiment_GetLocalKey(Expe_Experiment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getLocalKey' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Meth_Method Expe_Experiment_GetMethod(Expe_Experiment self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getMethod' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetName(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getName' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetNext(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getNext' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetOutputSamples(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getOutputSamples' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetPackageName(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getPackageName' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetPackageShortName(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getPackageShortName' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetParameters(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getParameters' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Expe_ExperimentStore Expe_Experiment_GetParent(Expe_Experiment self)
{
  
  Expe_ExperimentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getParent' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetPrevious(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getPrevious' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Prot_Protocol Expe_Experiment_GetProtocol(Expe_Experiment self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getProtocol' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetQualifiedName(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getQualifiedName' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Impl_MemopsRoot Expe_Experiment_GetRoot(Expe_Experiment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getRoot' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiSet Expe_Experiment_GetSampleIos(Expe_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getSampleIos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.Experiment.serial

Unique identifier.
  @param  Expe_Experiment self
  @returns   the result
**/
ApiInteger Expe_Experiment_GetSerial(Expe_Experiment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getSerial' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetStartDate(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getStartDate' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiString Expe_Experiment_GetStatus(Expe_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getStatus' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
Impl_TopObject Expe_Experiment_GetTopObject(Expe_Experiment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_Experiment Expe_Experiment_Init(Expe_ExperimentStore parent, ApiMap attrlinks)
{
  
  return Expe_ExperimentStore_NewExperiment(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore parent
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @returns  the new object
**/
Expe_Experiment Expe_Experiment_Init_reqd(Expe_ExperimentStore parent, char * endDate, Clas_ExperimentType experimentType, char * startDate)
{
  
  Expe_Experiment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__endDate = ApiString_New(endDate);
  ApiString api__startDate = ApiString_New(startDate);

  PyDict_SetItemString(attrlinks, "endDate", api__endDate);
  PyDict_SetItemString(attrlinks, "experimentType", experimentType);
  PyDict_SetItemString(attrlinks, "startDate", api__startDate);
  
  obj = Expe_Experiment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__endDate);
  Py_DECREF(api__startDate);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.InputSample
  @param  Expe_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_InputSample Expe_Experiment_NewInputSample(Expe_Experiment self, ApiMap attrlinks)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'newInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'newInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.InputSample
  @param  Expe_Experiment self
  @returns  the new object
**/
Expe_InputSample Expe_Experiment_NewInputSample_reqd(Expe_Experiment self)
{
  
  Expe_InputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Expe_Experiment_NewInputSample(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.OutputSample
  @param  Expe_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_OutputSample Expe_Experiment_NewOutputSample(Expe_Experiment self, ApiMap attrlinks)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'newOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'newOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.OutputSample
  @param  Expe_Experiment self
  @returns  the new object
**/
Expe_OutputSample Expe_Experiment_NewOutputSample_reqd(Expe_Experiment self)
{
  
  Expe_OutputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Expe_Experiment_NewOutputSample(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.Parameter
  @param  Expe_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_Parameter Expe_Experiment_NewParameter(Expe_Experiment self, ApiMap attrlinks)
{
  
  Expe_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'newParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'newParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Experiment.Parameter
  @param  Expe_Experiment self
  @returns  the new object
**/
Expe_Parameter Expe_Experiment_NewParameter_reqd(Expe_Experiment self)
{
  
  Expe_Parameter  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Expe_Experiment_NewParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.annotations

Annotations 
relevant to Experiment
  @param  Expe_Experiment self
  @param  Anno_Annotation value
**/
void *Expe_Experiment_RemoveAnnotation(Expe_Experiment self, Anno_Annotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'removeAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'removeAnnotation' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Impl_ApplicationData value
**/
void *Expe_Experiment_RemoveApplicationData(Expe_Experiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  Expb_BlueprintStatus value
**/
void *Expe_Experiment_RemoveBlueprintStatus(Expe_Experiment self, Expb_BlueprintStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'removeBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'removeBlueprintStatus' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expe_Experiment value
**/
void *Expe_Experiment_RemoveNext(Expe_Experiment self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'removeNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'removeNext' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expe_Experiment value
**/
void *Expe_Experiment_RemovePrevious(Expe_Experiment self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'removePrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'removePrevious' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Experiment.Experiment
  @param  Expe_Experiment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expe_Experiment_Set(Expe_Experiment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_Experiment self
  @param  Acco_AccessObject value
**/
void *Expe_Experiment_SetAccess(Expe_Experiment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setAccess' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiSet values
**/
void *Expe_Experiment_SetAnnotations(Expe_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setAnnotations' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiList values
**/
void *Expe_Experiment_SetApplicationData(Expe_Experiment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @param  ApiSet values
**/
void *Expe_Experiment_SetBlueprintStatuss(Expe_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setBlueprintStatuss' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Affi_Person value
**/
void *Expe_Experiment_SetCreator(Expe_Experiment self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setCreator' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetDetails(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setDetails' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetEndDate(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setEndDate' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expb_ExpBlueprint value
**/
void *Expe_Experiment_SetExpBlueprint(Expe_Experiment self, Expb_ExpBlueprint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setExpBlueprint' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Expe_ExperimentGroup value
**/
void *Expe_Experiment_SetExperimentGroup(Expe_Experiment self, Expe_ExperimentGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setExperimentGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setExperimentGroup' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Clas_ExperimentType value
**/
void *Expe_Experiment_SetExperimentType(Expe_Experiment self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setExperimentType' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Affi_Group value
**/
void *Expe_Experiment_SetGroup(Expe_Experiment self, Affi_Group value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setGroup' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Inst_Instrument value
**/
void *Expe_Experiment_SetInstrument(Expe_Experiment self, Inst_Instrument value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setInstrument' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiBoolean value
**/
void *Expe_Experiment_SetIsLocked(Expe_Experiment self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsLocked");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setIsLocked'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setIsLocked' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetLastEditedDate(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setLastEditedDate' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Affi_Person value
**/
void *Expe_Experiment_SetLastEditor(Expe_Experiment self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setLastEditor' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Meth_Method value
**/
void *Expe_Experiment_SetMethod(Expe_Experiment self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setMethod' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetName(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setName' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiSet values
**/
void *Expe_Experiment_SetNext(Expe_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setNext' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiSet values
**/
void *Expe_Experiment_SetPrevious(Expe_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setPrevious' is not callable");
  
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
  @param  Expe_Experiment self
  @param  Prot_Protocol value
**/
void *Expe_Experiment_SetProtocol(Expe_Experiment self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setProtocol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.Experiment.serial

Unique identifier.
  @param  Expe_Experiment self
  @param  ApiInteger value
**/
void *Expe_Experiment_SetSerial(Expe_Experiment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setSerial' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetStartDate(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setStartDate' is not callable");
  
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
  @param  Expe_Experiment self
  @param  ApiString value
**/
void *Expe_Experiment_SetStatus(Expe_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'setStatus' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedAnnotations(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Experiment.Experiment.blueprintStatuss
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedBlueprintStatuss(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedBlueprintStatuss' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedNext(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNext");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedNext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedNext' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedOutputSamples(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedOutputSamples' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedParameters(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedParameters' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedPrevious(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPrevious");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedPrevious'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedPrevious' is not callable");
  
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
  @param  Expe_Experiment self
  @returns   the result
**/
ApiList Expe_Experiment_SortedSampleIos(Expe_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleIos");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.Experiment: cannot find method 'sortedSampleIos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.Experiment: method 'sortedSampleIos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
