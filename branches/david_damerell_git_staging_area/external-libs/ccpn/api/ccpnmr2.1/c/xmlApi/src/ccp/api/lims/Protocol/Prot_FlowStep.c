
#include "ccp.h"

/*
  Flow step.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  Impl_ApplicationData value
**/
void *Prot_FlowStep_AddApplicationData(Prot_FlowStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'addApplicationData' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_FlowStep_AddParameterDefinition(Prot_FlowStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'addParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'addParameterDefinition' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FlowStep_AddRefInputSample(Prot_FlowStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'addRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'addRefInputSample' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_FlowStep_AddRefOutputSample(Prot_FlowStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'addRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'addRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiBoolean complete
**/
void *Prot_FlowStep_CheckAllValid(Prot_FlowStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiBoolean complete
**/
void *Prot_FlowStep_CheckValid(Prot_FlowStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'checkValid' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FlowStep_FindAllApplicationData(Prot_FlowStep self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FlowStep_FindAllApplicationData_keyval0(Prot_FlowStep self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FlowStep_FindAllApplicationData_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FlowStep_FindAllApplicationData_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FlowStep_FindAllApplicationData_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
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
ApiList Prot_FlowStep_FindAllApplicationData_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllParameterDefinitions(Prot_FlowStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findAllParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findAllParameterDefinitions' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval0(Prot_FlowStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
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
ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefInputSamples(Prot_FlowStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findAllRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findAllRefInputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval0(Prot_FlowStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefOutputSamples(Prot_FlowStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findAllRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findAllRefOutputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval0(Prot_FlowStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData(Prot_FlowStep self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval0(Prot_FlowStep self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
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
Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition(Prot_FlowStep self, ApiMap conditions)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findFirstParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findFirstParameterDefinition' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval0(Prot_FlowStep self)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
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
Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample(Prot_FlowStep self, ApiMap conditions)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findFirstRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findFirstRefInputSample' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval0(Prot_FlowStep self)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample(Prot_FlowStep self, ApiMap conditions)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'findFirstRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'findFirstRefOutputSample' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval0(Prot_FlowStep self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FlowStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval1(Prot_FlowStep self, char * key, ApiObject value)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FlowStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FlowStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FlowStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FlowStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_FlowStep_Get(Prot_FlowStep self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FlowStep self
  @returns   the result
**/
Acco_AccessObject Prot_FlowStep_GetAccess(Prot_FlowStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getAccess' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
Acco_AccessObject Prot_FlowStep_GetActiveAccess(Prot_FlowStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getActiveAccess' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiList Prot_FlowStep_GetApplicationData(Prot_FlowStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.beginProportionSolA

The proportion 
of solution A at the begining in percent (%).
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiFloat Prot_FlowStep_GetBeginProportionSolA(Prot_FlowStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBeginProportionSolA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getBeginProportionSolA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getBeginProportionSolA' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_FlowStep Prot_FlowStep_GetByKey(Prot_FlowStep self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_FlowStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getByKey' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetClassName(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetDetails(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getDetails' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiFloat Prot_FlowStep_GetDuration(Prot_FlowStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getDuration' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetDurationDisplayUnit(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getDurationDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.endProportionSolA

The proportion of 
solution A at the end in percent (%).
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiFloat Prot_FlowStep_GetEndProportionSolA(Prot_FlowStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndProportionSolA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getEndProportionSolA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getEndProportionSolA' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiList Prot_FlowStep_GetFieldNames(Prot_FlowStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.flowType

The type of flow e.g. 
'fixed volume', 'one solution flow', '2solutions gradient', ...
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetFlowType(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFlowType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getFlowType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getFlowType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.flowrate

The volume of material 
passing a fixed point per unit of time in L/s.
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiFloat Prot_FlowStep_GetFlowrate(Prot_FlowStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFlowrate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getFlowrate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getFlowrate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.flowrateDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetFlowrateDisplayUnit(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFlowrateDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getFlowrateDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getFlowrateDisplayUnit' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiBoolean Prot_FlowStep_GetInConstructor(Prot_FlowStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getInConstructor' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiBoolean Prot_FlowStep_GetIsDeleted(Prot_FlowStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetName(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getName' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetPackageName(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getPackageName' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetPackageShortName(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getPackageShortName' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiSet Prot_FlowStep_GetParameterDefinitions(Prot_FlowStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getParameterDefinitions' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
Prot_Procedure Prot_FlowStep_GetParent(Prot_FlowStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.procedure

parent link
  @param  Prot_FlowStep self
  @returns   the result
**/
Prot_Procedure Prot_FlowStep_GetProcedure(Prot_FlowStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getProcedure' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetQualifiedName(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getQualifiedName' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiSet Prot_FlowStep_GetRefInputSamples(Prot_FlowStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getRefInputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiSet Prot_FlowStep_GetRefOutputSamples(Prot_FlowStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getRefOutputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiString Prot_FlowStep_GetRole(Prot_FlowStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getRole' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
Impl_MemopsRoot Prot_FlowStep_GetRoot(Prot_FlowStep self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiInteger Prot_FlowStep_GetSerial(Prot_FlowStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.solutionA

solutionA used by the 
FlowStep.
  @param  Prot_FlowStep self
  @returns   the result
**/
Prot_RefInputSample Prot_FlowStep_GetSolutionA(Prot_FlowStep self)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSolutionA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getSolutionA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getSolutionA' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FlowStep.solutionB

solutionB used by the 
FlowStep.
  @param  Prot_FlowStep self
  @returns   the result
**/
Prot_RefInputSample Prot_FlowStep_GetSolutionB(Prot_FlowStep self)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSolutionB");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getSolutionB'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getSolutionB' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiInteger Prot_FlowStep_GetStepNumber(Prot_FlowStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getStepNumber' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
Impl_TopObject Prot_FlowStep_GetTopObject(Prot_FlowStep self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_FlowStep Prot_FlowStep_Init(Prot_Procedure parent, ApiMap attrlinks)
{
  
  return Prot_Procedure_NewFlowStep(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure parent
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_FlowStep Prot_FlowStep_Init_reqd(Prot_Procedure parent, ApiInteger stepNumber)
{
  
  Prot_FlowStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_FlowStep_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  Impl_ApplicationData value
**/
void *Prot_FlowStep_RemoveApplicationData(Prot_FlowStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'removeApplicationData' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_FlowStep_RemoveParameterDefinition(Prot_FlowStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'removeParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'removeParameterDefinition' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FlowStep_RemoveRefInputSample(Prot_FlowStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'removeRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'removeRefInputSample' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_FlowStep_RemoveRefOutputSample(Prot_FlowStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'removeRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'removeRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_FlowStep_Set(Prot_FlowStep self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FlowStep self
  @param  Acco_AccessObject value
**/
void *Prot_FlowStep_SetAccess(Prot_FlowStep self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setAccess' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiList values
**/
void *Prot_FlowStep_SetApplicationData(Prot_FlowStep self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.beginProportionSolA

The proportion 
of solution A at the begining in percent (%).
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
void *Prot_FlowStep_SetBeginProportionSolA(Prot_FlowStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBeginProportionSolA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setBeginProportionSolA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setBeginProportionSolA' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetDetails(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setDetails' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
void *Prot_FlowStep_SetDuration(Prot_FlowStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setDuration' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetDurationDisplayUnit(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setDurationDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.endProportionSolA

The proportion of 
solution A at the end in percent (%).
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
void *Prot_FlowStep_SetEndProportionSolA(Prot_FlowStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndProportionSolA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setEndProportionSolA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setEndProportionSolA' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.flowType

The type of flow e.g. 
'fixed volume', 'one solution flow', '2solutions gradient', ...
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetFlowType(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFlowType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setFlowType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setFlowType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.flowrate

The volume of material 
passing a fixed point per unit of time in L/s.
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
void *Prot_FlowStep_SetFlowrate(Prot_FlowStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFlowrate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setFlowrate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setFlowrate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.flowrateDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetFlowrateDisplayUnit(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFlowrateDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setFlowrateDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setFlowrateDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetName(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setName' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
void *Prot_FlowStep_SetParameterDefinitions(Prot_FlowStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setParameterDefinitions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
void *Prot_FlowStep_SetRefInputSamples(Prot_FlowStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setRefInputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
void *Prot_FlowStep_SetRefOutputSamples(Prot_FlowStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setRefOutputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiString value
**/
void *Prot_FlowStep_SetRole(Prot_FlowStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FlowStep self
  @param  ApiInteger value
**/
void *Prot_FlowStep_SetSerial(Prot_FlowStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.solutionA

solutionA used by the 
FlowStep.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FlowStep_SetSolutionA(Prot_FlowStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSolutionA");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setSolutionA'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setSolutionA' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FlowStep.solutionB

solutionB used by the 
FlowStep.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FlowStep_SetSolutionB(Prot_FlowStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSolutionB");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setSolutionB'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setSolutionB' is not callable");
  
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
  @param  Prot_FlowStep self
  @param  ApiInteger value
**/
void *Prot_FlowStep_SetStepNumber(Prot_FlowStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'setStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'setStepNumber' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiList Prot_FlowStep_SortedParameterDefinitions(Prot_FlowStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'sortedParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'sortedParameterDefinitions' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiList Prot_FlowStep_SortedRefInputSamples(Prot_FlowStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'sortedRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'sortedRefInputSamples' is not callable");
  
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
  @param  Prot_FlowStep self
  @returns   the result
**/
ApiList Prot_FlowStep_SortedRefOutputSamples(Prot_FlowStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FlowStep: cannot find method 'sortedRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FlowStep: method 'sortedRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
