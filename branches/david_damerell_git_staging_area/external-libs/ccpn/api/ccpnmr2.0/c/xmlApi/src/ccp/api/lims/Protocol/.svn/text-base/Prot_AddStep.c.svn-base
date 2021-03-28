
#include "ccp.h"

/*
  Step for adding a certain amount of materiel.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  Impl_ApplicationData value
**/
void *Prot_AddStep_AddApplicationData(Prot_AddStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_AddStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_AddStep_AddParameterDefinition(Prot_AddStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'addParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'addParameterDefinition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @param  Prot_RefInputSample value
**/
void *Prot_AddStep_AddRefInputSample(Prot_AddStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'addRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'addRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_AddStep_AddRefOutputSample(Prot_AddStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'addRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'addRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.AddStep
  @param  Prot_AddStep self
  @param  ApiBoolean complete
**/
void *Prot_AddStep_CheckAllValid(Prot_AddStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.AddStep
  @param  Prot_AddStep self
  @param  ApiBoolean complete
**/
void *Prot_AddStep_CheckValid(Prot_AddStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'checkValid' is not callable");
  
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
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_AddStep_FindAllApplicationData(Prot_AddStep self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_AddStep self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_AddStep_FindAllApplicationData_keyval0(Prot_AddStep self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_AddStep_FindAllApplicationData_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_AddStep_FindAllApplicationData_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_AddStep_FindAllApplicationData_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
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
ApiList Prot_AddStep_FindAllApplicationData_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllParameterDefinitions(Prot_AddStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findAllParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findAllParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllParameterDefinitions_keyval0(Prot_AddStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllParameterDefinitions_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllParameterDefinitions_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllParameterDefinitions_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
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
ApiSet Prot_AddStep_FindAllParameterDefinitions_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefInputSamples(Prot_AddStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findAllRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findAllRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefInputSamples_keyval0(Prot_AddStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefInputSamples_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefInputSamples_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefInputSamples_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
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
ApiSet Prot_AddStep_FindAllRefInputSamples_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefOutputSamples(Prot_AddStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findAllRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findAllRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefOutputSamples_keyval0(Prot_AddStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefOutputSamples_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefOutputSamples_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_AddStep_FindAllRefOutputSamples_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
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
ApiSet Prot_AddStep_FindAllRefOutputSamples_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData(Prot_AddStep self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_AddStep self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData_keyval0(Prot_AddStep self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
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
Impl_ApplicationData Prot_AddStep_FindFirstApplicationData_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition(Prot_AddStep self, ApiMap conditions)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findFirstParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findFirstParameterDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition_keyval0(Prot_AddStep self)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
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
Prot_ParameterDefinition Prot_AddStep_FindFirstParameterDefinition_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample(Prot_AddStep self, ApiMap conditions)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findFirstRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findFirstRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample_keyval0(Prot_AddStep self)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
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
Prot_RefInputSample Prot_AddStep_FindFirstRefInputSample_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample(Prot_AddStep self, ApiMap conditions)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'findFirstRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'findFirstRefOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample_keyval0(Prot_AddStep self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_AddStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample_keyval1(Prot_AddStep self, char * key, ApiObject value)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_AddStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample_keyval2(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_AddStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample_keyval3(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_AddStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
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
Prot_RefOutputSample Prot_AddStep_FindFirstRefOutputSample_keyval4(Prot_AddStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_AddStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.AddStep
  @param  Prot_AddStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_AddStep_Get(Prot_AddStep self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_AddStep self
  @returns   the result
**/
Acco_AccessObject Prot_AddStep_GetAccess(Prot_AddStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.AddStep.amount

The amount of the material 
used by this step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiFloat Prot_AddStep_GetAmount(Prot_AddStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getAmount' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.AddStep.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetAmountDisplayUnit(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getAmountDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.AddStep.amountUnit

One of the three possible 
units: kg, m3 or nmber.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetAmountUnit(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getAmountUnit' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiList Prot_AddStep_GetApplicationData(Prot_AddStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.AddStep
  @param  Prot_AddStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_AddStep Prot_AddStep_GetByKey(Prot_AddStep self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_AddStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getByKey' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetClassName(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetDetails(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiFloat Prot_AddStep_GetDuration(Prot_AddStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getDuration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetDurationDisplayUnit(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getDurationDisplayUnit' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiList Prot_AddStep_GetFieldNames(Prot_AddStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getFieldNames' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiBoolean Prot_AddStep_GetInConstructor(Prot_AddStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getInConstructor' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiBoolean Prot_AddStep_GetIsDeleted(Prot_AddStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetName(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getName' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetPackageName(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getPackageName' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetPackageShortName(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiSet Prot_AddStep_GetParameterDefinitions(Prot_AddStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.parent

link to parent object - synonym 
for procedure
  @param  Prot_AddStep self
  @returns   the result
**/
Prot_Procedure Prot_AddStep_GetParent(Prot_AddStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.procedure

parent link
  @param  Prot_AddStep self
  @returns   the result
**/
Prot_Procedure Prot_AddStep_GetProcedure(Prot_AddStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getProcedure' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetQualifiedName(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.AddStep.refInputSample

Material used by the 
AddStep.
  @param  Prot_AddStep self
  @returns   the result
**/
Prot_RefInputSample Prot_AddStep_GetRefInputSample(Prot_AddStep self)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiSet Prot_AddStep_GetRefInputSamples(Prot_AddStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiSet Prot_AddStep_GetRefOutputSamples(Prot_AddStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiString Prot_AddStep_GetRole(Prot_AddStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getRole' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
Impl_MemopsRoot Prot_AddStep_GetRoot(Prot_AddStep self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiInteger Prot_AddStep_GetSerial(Prot_AddStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiInteger Prot_AddStep_GetStepNumber(Prot_AddStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getStepNumber' is not callable");
  
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
  @param  Prot_AddStep self
  @returns   the result
**/
Impl_TopObject Prot_AddStep_GetTopObject(Prot_AddStep self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.AddStep
  @param  Prot_Procedure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_AddStep Prot_AddStep_Init(Prot_Procedure parent, ApiMap attrlinks)
{
  
  return Prot_Procedure_NewAddStep(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.AddStep
  @param  Prot_Procedure parent
  @param  Prot_RefInputSample refInputSample
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_AddStep Prot_AddStep_Init_reqd(Prot_Procedure parent, Prot_RefInputSample refInputSample, ApiInteger stepNumber)
{
  
  Prot_AddStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "refInputSample", refInputSample);
  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_AddStep_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_AddStep self
  @param  Impl_ApplicationData value
**/
void *Prot_AddStep_RemoveApplicationData(Prot_AddStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_AddStep_RemoveParameterDefinition(Prot_AddStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'removeParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'removeParameterDefinition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  Prot_RefInputSample value
**/
void *Prot_AddStep_RemoveRefInputSample(Prot_AddStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'removeRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'removeRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_AddStep_RemoveRefOutputSample(Prot_AddStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'removeRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'removeRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.AddStep
  @param  Prot_AddStep self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_AddStep_Set(Prot_AddStep self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_AddStep self
  @param  Acco_AccessObject value
**/
void *Prot_AddStep_SetAccess(Prot_AddStep self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.AddStep.amount

The amount of the material 
used by this step.
  @param  Prot_AddStep self
  @param  ApiFloat value
**/
void *Prot_AddStep_SetAmount(Prot_AddStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setAmount' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.AddStep.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetAmountDisplayUnit(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setAmountDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.AddStep.amountUnit

One of the three possible 
units: kg, m3 or nmber.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetAmountUnit(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setAmountUnit' is not callable");
  
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
  @param  Prot_AddStep self
  @param  ApiList values
**/
void *Prot_AddStep_SetApplicationData(Prot_AddStep self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetDetails(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_AddStep self
  @param  ApiFloat value
**/
void *Prot_AddStep_SetDuration(Prot_AddStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setDuration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetDurationDisplayUnit(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setDurationDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetName(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_AddStep self
  @param  ApiSet values
**/
void *Prot_AddStep_SetParameterDefinitions(Prot_AddStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setParameterDefinitions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.AddStep.refInputSample

Material used by the 
AddStep.
  @param  Prot_AddStep self
  @param  Prot_RefInputSample value
**/
void *Prot_AddStep_SetRefInputSample(Prot_AddStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @param  ApiSet values
**/
void *Prot_AddStep_SetRefInputSamples(Prot_AddStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setRefInputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_AddStep self
  @param  ApiSet values
**/
void *Prot_AddStep_SetRefOutputSamples(Prot_AddStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setRefOutputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_AddStep self
  @param  ApiString value
**/
void *Prot_AddStep_SetRole(Prot_AddStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_AddStep self
  @param  ApiInteger value
**/
void *Prot_AddStep_SetSerial(Prot_AddStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_AddStep self
  @param  ApiInteger value
**/
void *Prot_AddStep_SetStepNumber(Prot_AddStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'setStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'setStepNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiList Prot_AddStep_SortedParameterDefinitions(Prot_AddStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'sortedParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'sortedParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiList Prot_AddStep_SortedRefInputSamples(Prot_AddStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'sortedRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'sortedRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_AddStep self
  @returns   the result
**/
ApiList Prot_AddStep_SortedRefOutputSamples(Prot_AddStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.AddStep: cannot find method 'sortedRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.AddStep: method 'sortedRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
