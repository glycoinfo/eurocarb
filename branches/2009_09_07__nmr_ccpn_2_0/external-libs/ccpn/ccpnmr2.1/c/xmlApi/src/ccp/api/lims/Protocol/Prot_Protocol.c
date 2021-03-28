
#include "ccp.h"

/*
  The information on the protocol. A protocol is a series of procedures that contain steps.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  Impl_ApplicationData value
**/
void *Prot_Protocol_AddApplicationData(Prot_Protocol self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Protocol.experiments

The list of experiments 
associated to a given protocol.
  @param  Prot_Protocol self
  @param  Expe_Experiment value
**/
void *Prot_Protocol_AddExperiment(Prot_Protocol self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Protocol.references

Reference where Protocol 
is citated.
  @param  Prot_Protocol self
  @param  Cita_Citation value
**/
void *Prot_Protocol_AddReference(Prot_Protocol self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addReference");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'addReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'addReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Protocol.remarks

Some remarks on the reason 
why the protocol has been updated.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_AddRemark(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRemark");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'addRemark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'addRemark' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  ApiBoolean complete
**/
void *Prot_Protocol_CheckAllValid(Prot_Protocol self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  ApiBoolean complete
**/
void *Prot_Protocol_CheckValid(Prot_Protocol self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'checkValid' is not callable");
  
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
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Protocol_FindAllApplicationData(Prot_Protocol self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Protocol_FindAllApplicationData_keyval0(Prot_Protocol self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Protocol_FindAllApplicationData_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Protocol_FindAllApplicationData_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Protocol_FindAllApplicationData_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
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
ApiList Prot_Protocol_FindAllApplicationData_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllExperiments(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllExperiments_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllExperiments_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllExperiments_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllExperiments_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllExperiments_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllParameterDefinitions(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllParameterDefinitions_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllParameterDefinitions_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllParameterDefinitions_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllParameterDefinitions_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllParameterDefinitions_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllProcedures(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllProcedures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllProcedures_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllProcedures_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllProcedures_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllProcedures_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllProcedures_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefInputSamples(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefInputSamples_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefInputSamples_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefInputSamples_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefInputSamples_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllRefInputSamples_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefOutputSamples(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefOutputSamples_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefOutputSamples_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefOutputSamples_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllRefOutputSamples_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllRefOutputSamples_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllReferences(Prot_Protocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllReferences");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findAllReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findAllReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllReferences_keyval0(Prot_Protocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindAllReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllReferences_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindAllReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllReferences_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindAllReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Protocol_FindAllReferences_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindAllReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
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
ApiSet Prot_Protocol_FindAllReferences_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindAllReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData(Prot_Protocol self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData_keyval0(Prot_Protocol self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
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
Impl_ApplicationData Prot_Protocol_FindFirstApplicationData_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Prot_Protocol_FindFirstExperiment(Prot_Protocol self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Prot_Protocol_FindFirstExperiment_keyval0(Prot_Protocol self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Prot_Protocol_FindFirstExperiment_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Prot_Protocol_FindFirstExperiment_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Prot_Protocol_FindFirstExperiment_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
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
Expe_Experiment Prot_Protocol_FindFirstExperiment_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition(Prot_Protocol self, ApiMap conditions)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstParameterDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition_keyval0(Prot_Protocol self)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Prot_Protocol self
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
Prot_ParameterDefinition Prot_Protocol_FindFirstParameterDefinition_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Prot_Protocol_FindFirstProcedure(Prot_Protocol self, ApiMap conditions)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstProcedure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Prot_Protocol_FindFirstProcedure_keyval0(Prot_Protocol self)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Prot_Protocol_FindFirstProcedure_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Prot_Protocol_FindFirstProcedure_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Prot_Protocol_FindFirstProcedure_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
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
Prot_Procedure Prot_Protocol_FindFirstProcedure_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample(Prot_Protocol self, ApiMap conditions)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample_keyval0(Prot_Protocol self)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
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
Prot_RefInputSample Prot_Protocol_FindFirstRefInputSample_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample(Prot_Protocol self, ApiMap conditions)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstRefOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample_keyval0(Prot_Protocol self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
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
Prot_RefOutputSample Prot_Protocol_FindFirstRefOutputSample_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Prot_Protocol_FindFirstReference(Prot_Protocol self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstReference");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'findFirstReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'findFirstReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Prot_Protocol_FindFirstReference_keyval0(Prot_Protocol self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Protocol_FindFirstReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Prot_Protocol_FindFirstReference_keyval1(Prot_Protocol self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Protocol_FindFirstReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Prot_Protocol_FindFirstReference_keyval2(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Protocol_FindFirstReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Prot_Protocol_FindFirstReference_keyval3(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Protocol_FindFirstReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
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
Cita_Citation Prot_Protocol_FindFirstReference_keyval4(Prot_Protocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Protocol_FindFirstReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_Protocol_Get(Prot_Protocol self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_Protocol self
  @returns   the result
**/
Acco_AccessObject Prot_Protocol_GetAccess(Prot_Protocol self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getAccess' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
Acco_AccessObject Prot_Protocol_GetActiveAccess(Prot_Protocol self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getActiveAccess' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_GetApplicationData(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_Protocol Prot_Protocol_GetByKey(Prot_Protocol self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getByKey' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetClassName(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.creationDate

The creation date of 
the protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetCreationDate(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreationDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getCreationDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getCreationDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.creator

The person who is in charge 
for this protocol or who created this protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
Affi_Person Prot_Protocol_GetCreator(Prot_Protocol self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getCreator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.details

Details field for comments.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetDetails(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.experimentType

The experiment type 
associated to a protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
Clas_ExperimentType Prot_Protocol_GetExperimentType(Prot_Protocol self)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getExperimentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.experiments

The list of experiments 
associated to a given protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetExperiments(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getExperiments' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_GetFieldNames(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Prot_Protocol_GetFullKey(Prot_Protocol self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getFullKey' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiBoolean Prot_Protocol_GetInConstructor(Prot_Protocol self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getInConstructor' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiBoolean Prot_Protocol_GetIsDeleted(Prot_Protocol self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.lastEditedDate

Last date protocol 
was edited.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetLastEditedDate(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getLastEditedDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.lastEditor

Person who last modified 
Protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
Affi_Person Prot_Protocol_GetLastEditor(Prot_Protocol self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getLastEditor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @returns  Local object key
**/
ApiObject Prot_Protocol_GetLocalKey(Prot_Protocol self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.name

The name of the protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetName(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.objective

The objective of the 
protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetObjective(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getObjective");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getObjective'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getObjective' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetPackageName(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getPackageName' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetPackageShortName(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.parameterDefinitions

child link to 
class ParameterDefinition
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetParameterDefinitions(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.parent

link to parent object - 
synonym for protocolStore
  @param  Prot_Protocol self
  @returns   the result
**/
Prot_ProtocolStore Prot_Protocol_GetParent(Prot_Protocol self)
{
  
  Prot_ProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetProcedures(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getProcedures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.protocolStore

parent link
  @param  Prot_Protocol self
  @returns   the result
**/
Prot_ProtocolStore Prot_Protocol_GetProtocolStore(Prot_Protocol self)
{
  
  Prot_ProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocolStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getProtocolStore' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
ApiString Prot_Protocol_GetQualifiedName(Prot_Protocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.refInputSamples

child link to class 
RefInputSample
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetRefInputSamples(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.refOutputSamples

child link to class 
RefOutputSample
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetRefOutputSamples(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.references

Reference where Protocol 
is citated.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiSet Prot_Protocol_GetReferences(Prot_Protocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getReferences");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.remarks

Some remarks on the reason 
why the protocol has been updated.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_GetRemarks(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemarks");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getRemarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getRemarks' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
Impl_MemopsRoot Prot_Protocol_GetRoot(Prot_Protocol self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Protocol.serial

Unique identifier.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiInteger Prot_Protocol_GetSerial(Prot_Protocol self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getSerial' is not callable");
  
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
  @param  Prot_Protocol self
  @returns   the result
**/
Impl_TopObject Prot_Protocol_GetTopObject(Prot_Protocol self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.Protocol
  @param  Prot_ProtocolStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_Protocol Prot_Protocol_Init(Prot_ProtocolStore parent, ApiMap attrlinks)
{
  
  return Prot_ProtocolStore_NewProtocol(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.Protocol
  @param  Prot_ProtocolStore parent
  @param  Clas_ExperimentType experimentType
  @param  char * name
  @returns  the new object
**/
Prot_Protocol Prot_Protocol_Init_reqd(Prot_ProtocolStore parent, Clas_ExperimentType experimentType, char * name)
{
  
  Prot_Protocol  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "experimentType", experimentType);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Prot_Protocol_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.ParameterDefinition
  @param  Prot_Protocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_ParameterDefinition Prot_Protocol_NewParameterDefinition(Prot_Protocol self, ApiMap attrlinks)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'newParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'newParameterDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.ParameterDefinition
  @param  Prot_Protocol self
  @returns  the new object
**/
Prot_ParameterDefinition Prot_Protocol_NewParameterDefinition_reqd(Prot_Protocol self)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_Protocol_NewParameterDefinition(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.Procedure
  @param  Prot_Protocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_Procedure Prot_Protocol_NewProcedure(Prot_Protocol self, ApiMap attrlinks)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'newProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'newProcedure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.Procedure
  @param  Prot_Protocol self
  @param  ApiInteger procNumber
  @returns  the new object
**/
Prot_Procedure Prot_Protocol_NewProcedure_reqd(Prot_Protocol self, ApiInteger procNumber)
{
  
  Prot_Procedure  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "procNumber", procNumber);
  
  obj = Prot_Protocol_NewProcedure(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_RefInputSample Prot_Protocol_NewRefInputSample(Prot_Protocol self, ApiMap attrlinks)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'newRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'newRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol self
  @returns  the new object
**/
Prot_RefInputSample Prot_Protocol_NewRefInputSample_reqd(Prot_Protocol self)
{
  
  Prot_RefInputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_Protocol_NewRefInputSample(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_RefOutputSample Prot_Protocol_NewRefOutputSample(Prot_Protocol self, ApiMap attrlinks)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'newRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'newRefOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol self
  @returns  the new object
**/
Prot_RefOutputSample Prot_Protocol_NewRefOutputSample_reqd(Prot_Protocol self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_Protocol_NewRefOutputSample(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Protocol self
  @param  Impl_ApplicationData value
**/
void *Prot_Protocol_RemoveApplicationData(Prot_Protocol self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @param  Expe_Experiment value
**/
void *Prot_Protocol_RemoveExperiment(Prot_Protocol self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @param  Cita_Citation value
**/
void *Prot_Protocol_RemoveReference(Prot_Protocol self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeReference");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'removeReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'removeReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Protocol.remarks

Some remarks on the 
reason why the protocol has been updated.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_RemoveRemark(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRemark");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'removeRemark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'removeRemark' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.Protocol
  @param  Prot_Protocol self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_Protocol_Set(Prot_Protocol self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_Protocol self
  @param  Acco_AccessObject value
**/
void *Prot_Protocol_SetAccess(Prot_Protocol self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setAccess' is not callable");
  
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
  @param  Prot_Protocol self
  @param  ApiList values
**/
void *Prot_Protocol_SetApplicationData(Prot_Protocol self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.creationDate

The creation date of 
the protocol.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_SetCreationDate(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreationDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setCreationDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setCreationDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.creator

The person who is in charge 
for this protocol or who created this protocol.
  @param  Prot_Protocol self
  @param  Affi_Person value
**/
void *Prot_Protocol_SetCreator(Prot_Protocol self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreator");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setCreator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setCreator' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.details

Details field for comments.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_SetDetails(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.experimentType

The experiment type 
associated to a protocol.
  @param  Prot_Protocol self
  @param  Clas_ExperimentType value
**/
void *Prot_Protocol_SetExperimentType(Prot_Protocol self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.experiments

The list of experiments 
associated to a given protocol.
  @param  Prot_Protocol self
  @param  ApiSet values
**/
void *Prot_Protocol_SetExperiments(Prot_Protocol self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.lastEditedDate

Last date protocol 
was edited.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_SetLastEditedDate(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditedDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setLastEditedDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setLastEditedDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.lastEditor

Person who last modified 
Protocol.
  @param  Prot_Protocol self
  @param  Affi_Person value
**/
void *Prot_Protocol_SetLastEditor(Prot_Protocol self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastEditor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setLastEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setLastEditor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.name

The name of the protocol.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_SetName(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.objective

The objective of the 
protocol.
  @param  Prot_Protocol self
  @param  ApiString value
**/
void *Prot_Protocol_SetObjective(Prot_Protocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setObjective");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setObjective'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setObjective' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.references

Reference where Protocol 
is citated.
  @param  Prot_Protocol self
  @param  ApiSet values
**/
void *Prot_Protocol_SetReferences(Prot_Protocol self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setReferences");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setReferences' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.remarks

Some remarks on the reason 
why the protocol has been updated.
  @param  Prot_Protocol self
  @param  ApiList values
**/
void *Prot_Protocol_SetRemarks(Prot_Protocol self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemarks");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setRemarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setRemarks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Protocol.serial

Unique identifier.
  @param  Prot_Protocol self
  @param  ApiInteger value
**/
void *Prot_Protocol_SetSerial(Prot_Protocol self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.experiments

The list of 
experiments associated to a given protocol.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedExperiments(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.parameterDefinitions

child link 
to class ParameterDefinition
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedParameterDefinitions(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.procedures

child link to class 
Procedure
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedProcedures(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedProcedures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.refInputSamples

child link to 
class RefInputSample
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedRefInputSamples(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.refOutputSamples

child link to 
class RefOutputSample
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedRefOutputSamples(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Protocol.references

Reference where 
Protocol is citated.
  @param  Prot_Protocol self
  @returns   the result
**/
ApiList Prot_Protocol_SortedReferences(Prot_Protocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedReferences");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Protocol: cannot find method 'sortedReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Protocol: method 'sortedReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
