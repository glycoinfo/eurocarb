
#include "ccp.h"

/*
  Step for filtration.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  Impl_ApplicationData value
**/
void *Prot_FiltrationStep_AddApplicationData(Prot_FiltrationStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'addApplicationData' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_FiltrationStep_AddParameterDefinition(Prot_FiltrationStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'addParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'addParameterDefinition' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FiltrationStep_AddRefInputSample(Prot_FiltrationStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'addRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'addRefInputSample' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_FiltrationStep_AddRefOutputSample(Prot_FiltrationStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'addRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'addRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.FiltrationStep
  @param  Prot_FiltrationStep self
  @param  ApiBoolean complete
**/
void *Prot_FiltrationStep_CheckAllValid(Prot_FiltrationStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.FiltrationStep
  @param  Prot_FiltrationStep self
  @param  ApiBoolean complete
**/
void *Prot_FiltrationStep_CheckValid(Prot_FiltrationStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'checkValid' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FiltrationStep_FindAllApplicationData(Prot_FiltrationStep self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FiltrationStep_FindAllApplicationData_keyval0(Prot_FiltrationStep self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FiltrationStep_FindAllApplicationData_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FiltrationStep_FindAllApplicationData_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_FiltrationStep_FindAllApplicationData_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
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
ApiList Prot_FiltrationStep_FindAllApplicationData_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions(Prot_FiltrationStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findAllParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findAllParameterDefinitions' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions_keyval0(Prot_FiltrationStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
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
ApiSet Prot_FiltrationStep_FindAllParameterDefinitions_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefInputSamples(Prot_FiltrationStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findAllRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findAllRefInputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefInputSamples_keyval0(Prot_FiltrationStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefInputSamples_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefInputSamples_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefInputSamples_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
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
ApiSet Prot_FiltrationStep_FindAllRefInputSamples_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples(Prot_FiltrationStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findAllRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findAllRefOutputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples_keyval0(Prot_FiltrationStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
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
ApiSet Prot_FiltrationStep_FindAllRefOutputSamples_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData(Prot_FiltrationStep self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData_keyval0(Prot_FiltrationStep self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
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
Impl_ApplicationData Prot_FiltrationStep_FindFirstApplicationData_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition(Prot_FiltrationStep self, ApiMap conditions)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findFirstParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findFirstParameterDefinition' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition_keyval0(Prot_FiltrationStep self)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FiltrationStep self
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
Prot_ParameterDefinition Prot_FiltrationStep_FindFirstParameterDefinition_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample(Prot_FiltrationStep self, ApiMap conditions)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findFirstRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findFirstRefInputSample' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample_keyval0(Prot_FiltrationStep self)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
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
Prot_RefInputSample Prot_FiltrationStep_FindFirstRefInputSample_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample(Prot_FiltrationStep self, ApiMap conditions)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'findFirstRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'findFirstRefOutputSample' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample_keyval0(Prot_FiltrationStep self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_FiltrationStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample_keyval1(Prot_FiltrationStep self, char * key, ApiObject value)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_FiltrationStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample_keyval2(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_FiltrationStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample_keyval3(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_FiltrationStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FiltrationStep self
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
Prot_RefOutputSample Prot_FiltrationStep_FindFirstRefOutputSample_keyval4(Prot_FiltrationStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_FiltrationStep_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.FiltrationStep
  @param  Prot_FiltrationStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_FiltrationStep_Get(Prot_FiltrationStep self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FiltrationStep self
  @returns   the result
**/
Acco_AccessObject Prot_FiltrationStep_GetAccess(Prot_FiltrationStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getAccess' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiList Prot_FiltrationStep_GetApplicationData(Prot_FiltrationStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.FiltrationStep
  @param  Prot_FiltrationStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_FiltrationStep Prot_FiltrationStep_GetByKey(Prot_FiltrationStep self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_FiltrationStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getByKey' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetClassName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetDetails(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getDetails' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiFloat Prot_FiltrationStep_GetDuration(Prot_FiltrationStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getDuration' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetDurationDisplayUnit(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getDurationDisplayUnit' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiList Prot_FiltrationStep_GetFieldNames(Prot_FiltrationStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getFieldNames' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiBoolean Prot_FiltrationStep_GetInConstructor(Prot_FiltrationStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getInConstructor' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiBoolean Prot_FiltrationStep_GetIsDeleted(Prot_FiltrationStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.memCutoffDisplayUnit

This is 
the unit entered by user and used for display.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetMemCutoffDisplayUnit(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemCutoffDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getMemCutoffDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getMemCutoffDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.membraneCutoff

The membrane 
cutoff in meter (m).
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiFloat Prot_FiltrationStep_GetMembraneCutoff(Prot_FiltrationStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMembraneCutoff");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getMembraneCutoff'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getMembraneCutoff' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.membraneName

The name of the 
membrane.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetMembraneName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMembraneName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getMembraneName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getMembraneName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.methodName

The name of the 
method applied for filtration step.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetMethodName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethodName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getMethodName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getMethodName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getName' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetPackageName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getPackageName' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetPackageShortName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getPackageShortName' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiSet Prot_FiltrationStep_GetParameterDefinitions(Prot_FiltrationStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getParameterDefinitions' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
Prot_Procedure Prot_FiltrationStep_GetParent(Prot_FiltrationStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.procedure

parent link
  @param  Prot_FiltrationStep self
  @returns   the result
**/
Prot_Procedure Prot_FiltrationStep_GetProcedure(Prot_FiltrationStep self)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getProcedure' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetQualifiedName(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getQualifiedName' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiSet Prot_FiltrationStep_GetRefInputSamples(Prot_FiltrationStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getRefInputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiSet Prot_FiltrationStep_GetRefOutputSamples(Prot_FiltrationStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getRefOutputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetRole(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getRole' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
Impl_MemopsRoot Prot_FiltrationStep_GetRoot(Prot_FiltrationStep self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiInteger Prot_FiltrationStep_GetSerial(Prot_FiltrationStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getSerial' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiInteger Prot_FiltrationStep_GetStepNumber(Prot_FiltrationStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getStepNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.tempDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiString Prot_FiltrationStep_GetTempDisplayUnit(Prot_FiltrationStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTempDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getTempDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getTempDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.FiltrationStep.temperature

The temperature in 
kelvin (K).
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiFloat Prot_FiltrationStep_GetTemperature(Prot_FiltrationStep self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTemperature");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getTemperature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getTemperature' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
Impl_TopObject Prot_FiltrationStep_GetTopObject(Prot_FiltrationStep self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.FiltrationStep
  @param  Prot_Procedure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_FiltrationStep Prot_FiltrationStep_Init(Prot_Procedure parent, ApiMap attrlinks)
{
  
  return Prot_Procedure_NewFiltrationStep(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.FiltrationStep
  @param  Prot_Procedure parent
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_FiltrationStep Prot_FiltrationStep_Init_reqd(Prot_Procedure parent, ApiInteger stepNumber)
{
  
  Prot_FiltrationStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_FiltrationStep_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FiltrationStep self
  @param  Impl_ApplicationData value
**/
void *Prot_FiltrationStep_RemoveApplicationData(Prot_FiltrationStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'removeApplicationData' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_ParameterDefinition value
**/
void *Prot_FiltrationStep_RemoveParameterDefinition(Prot_FiltrationStep self, Prot_ParameterDefinition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'removeParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'removeParameterDefinition' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_RefInputSample value
**/
void *Prot_FiltrationStep_RemoveRefInputSample(Prot_FiltrationStep self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'removeRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'removeRefInputSample' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  Prot_RefOutputSample value
**/
void *Prot_FiltrationStep_RemoveRefOutputSample(Prot_FiltrationStep self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'removeRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'removeRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.FiltrationStep
  @param  Prot_FiltrationStep self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_FiltrationStep_Set(Prot_FiltrationStep self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FiltrationStep self
  @param  Acco_AccessObject value
**/
void *Prot_FiltrationStep_SetAccess(Prot_FiltrationStep self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setAccess' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiList values
**/
void *Prot_FiltrationStep_SetApplicationData(Prot_FiltrationStep self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetDetails(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setDetails' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiFloat value
**/
void *Prot_FiltrationStep_SetDuration(Prot_FiltrationStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDuration");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setDuration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setDuration' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetDurationDisplayUnit(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDurationDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setDurationDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setDurationDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.memCutoffDisplayUnit

This is 
the unit entered by user and used for display.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetMemCutoffDisplayUnit(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMemCutoffDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setMemCutoffDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setMemCutoffDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.membraneCutoff

The membrane 
cutoff in meter (m).
  @param  Prot_FiltrationStep self
  @param  ApiFloat value
**/
void *Prot_FiltrationStep_SetMembraneCutoff(Prot_FiltrationStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMembraneCutoff");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setMembraneCutoff'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setMembraneCutoff' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.membraneName

The name of the 
membrane.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetMembraneName(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMembraneName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setMembraneName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setMembraneName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.methodName

The name of the 
method applied for filtration step.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetMethodName(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethodName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setMethodName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setMethodName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetName(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setName' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiSet values
**/
void *Prot_FiltrationStep_SetParameterDefinitions(Prot_FiltrationStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setParameterDefinitions' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiSet values
**/
void *Prot_FiltrationStep_SetRefInputSamples(Prot_FiltrationStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setRefInputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiSet values
**/
void *Prot_FiltrationStep_SetRefOutputSamples(Prot_FiltrationStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setRefOutputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetRole(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FiltrationStep self
  @param  ApiInteger value
**/
void *Prot_FiltrationStep_SetSerial(Prot_FiltrationStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setSerial' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @param  ApiInteger value
**/
void *Prot_FiltrationStep_SetStepNumber(Prot_FiltrationStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStepNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setStepNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.tempDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Prot_FiltrationStep self
  @param  ApiString value
**/
void *Prot_FiltrationStep_SetTempDisplayUnit(Prot_FiltrationStep self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTempDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setTempDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setTempDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.FiltrationStep.temperature

The temperature in 
kelvin (K).
  @param  Prot_FiltrationStep self
  @param  ApiFloat value
**/
void *Prot_FiltrationStep_SetTemperature(Prot_FiltrationStep self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTemperature");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'setTemperature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'setTemperature' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiList Prot_FiltrationStep_SortedParameterDefinitions(Prot_FiltrationStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'sortedParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'sortedParameterDefinitions' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiList Prot_FiltrationStep_SortedRefInputSamples(Prot_FiltrationStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'sortedRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'sortedRefInputSamples' is not callable");
  
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
  @param  Prot_FiltrationStep self
  @returns   the result
**/
ApiList Prot_FiltrationStep_SortedRefOutputSamples(Prot_FiltrationStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: cannot find method 'sortedRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.FiltrationStep: method 'sortedRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
