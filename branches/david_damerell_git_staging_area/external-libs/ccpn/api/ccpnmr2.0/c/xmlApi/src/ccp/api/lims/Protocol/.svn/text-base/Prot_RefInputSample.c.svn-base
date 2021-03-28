
#include "ccp.h"

/*
  An InputSampleDef is used to specify that an Experiment created from the parent Protocol should have an InputSample that accepts Samples belonging to the specified SampleCategory (any if InputSampleDef.sampleCategory is null).
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  Impl_ApplicationData value
**/
void *Prot_RefInputSample_AddApplicationData(Prot_RefInputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  Expe_InputSample value
**/
void *Prot_RefInputSample_AddInputSample(Prot_RefInputSample self, Expe_InputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'addInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'addInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
void *Prot_RefInputSample_AddSolAflowStep(Prot_RefInputSample self, Prot_FlowStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSolAflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'addSolAflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'addSolAflowStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
void *Prot_RefInputSample_AddSolBflowStep(Prot_RefInputSample self, Prot_FlowStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSolBflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'addSolBflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'addSolBflowStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean complete
**/
void *Prot_RefInputSample_CheckAllValid(Prot_RefInputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean complete
**/
void *Prot_RefInputSample_CheckValid(Prot_RefInputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllAddSteps(Prot_RefInputSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAddSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findAllAddSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findAllAddSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllAddSteps_keyval0(Prot_RefInputSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindAllAddSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllAddSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindAllAddSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllAddSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindAllAddSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllAddSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindAllAddSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
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
ApiSet Prot_RefInputSample_FindAllAddSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindAllAddSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefInputSample_FindAllApplicationData(Prot_RefInputSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefInputSample_FindAllApplicationData_keyval0(Prot_RefInputSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefInputSample_FindAllApplicationData_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefInputSample_FindAllApplicationData_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefInputSample_FindAllApplicationData_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
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
ApiList Prot_RefInputSample_FindAllApplicationData_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllInputSamples(Prot_RefInputSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findAllInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findAllInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllInputSamples_keyval0(Prot_RefInputSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllInputSamples_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllInputSamples_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllInputSamples_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
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
ApiSet Prot_RefInputSample_FindAllInputSamples_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolAflowSteps(Prot_RefInputSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSolAflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findAllSolAflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findAllSolAflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval0(Prot_RefInputSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindAllSolAflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindAllSolAflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindAllSolAflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindAllSolAflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
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
ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindAllSolAflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolBflowSteps(Prot_RefInputSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSolBflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findAllSolBflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findAllSolBflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval0(Prot_RefInputSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindAllSolBflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindAllSolBflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindAllSolBflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindAllSolBflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
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
ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindAllSolBflowSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_AddStep Prot_RefInputSample_FindFirstAddStep(Prot_RefInputSample self, ApiMap conditions)
{
  
  Prot_AddStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAddStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findFirstAddStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findFirstAddStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval0(Prot_RefInputSample self)
{
  
  Prot_AddStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindFirstAddStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  Prot_AddStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindFirstAddStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_AddStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindFirstAddStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_AddStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindFirstAddStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
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
Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_AddStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindFirstAddStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData(Prot_RefInputSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval0(Prot_RefInputSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
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
Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Prot_RefInputSample_FindFirstInputSample(Prot_RefInputSample self, ApiMap conditions)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findFirstInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findFirstInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval0(Prot_RefInputSample self)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
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
Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep(Prot_RefInputSample self, ApiMap conditions)
{
  
  Prot_FlowStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSolAflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findFirstSolAflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findFirstSolAflowStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval0(Prot_RefInputSample self)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindFirstSolAflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindFirstSolAflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindFirstSolAflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindFirstSolAflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
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
Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindFirstSolAflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep(Prot_RefInputSample self, ApiMap conditions)
{
  
  Prot_FlowStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSolBflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'findFirstSolBflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'findFirstSolBflowStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval0(Prot_RefInputSample self)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefInputSample_FindFirstSolBflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefInputSample_FindFirstSolBflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefInputSample_FindFirstSolBflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefInputSample_FindFirstSolBflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
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
Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_FlowStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefInputSample_FindFirstSolBflowStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_RefInputSample_Get(Prot_RefInputSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefInputSample self
  @returns   the result
**/
Acco_AccessObject Prot_RefInputSample_GetAccess(Prot_RefInputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiSet Prot_RefInputSample_GetAddSteps(Prot_RefInputSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAddSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getAddSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getAddSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.amount

The default amount of 
Sample to use for an InputSample created from this InputSampleDef.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiFloat Prot_RefInputSample_GetAmount(Prot_RefInputSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getAmount' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_GetApplicationData(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_RefInputSample Prot_RefInputSample_GetByKey(Prot_RefInputSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getByKey' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetClassName(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.displayUnit

The unit to 
display for InputSampleDef.amount.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetDisplayUnit(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getDisplayUnit' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_GetFieldNames(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Prot_RefInputSample_GetFullKey(Prot_RefInputSample self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getFullKey' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiBoolean Prot_RefInputSample_GetInConstructor(Prot_RefInputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiSet Prot_RefInputSample_GetInputSamples(Prot_RefInputSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getInputSamples' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiBoolean Prot_RefInputSample_GetIsDeleted(Prot_RefInputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @returns  Local object key
**/
ApiObject Prot_RefInputSample_GetLocalKey(Prot_RefInputSample self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.name

The name of the 
InputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to InputSample.name when an InputSample is created from 
an InputSampleDef.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetName(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getName' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetPackageName(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getPackageName' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetPackageShortName(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.parent

link to parent object - 
synonym for protocol
  @param  Prot_RefInputSample self
  @returns   the result
**/
Prot_Protocol Prot_RefInputSample_GetParent(Prot_RefInputSample self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.protocol

parent link
  @param  Prot_RefInputSample self
  @returns   the result
**/
Prot_Protocol Prot_RefInputSample_GetProtocol(Prot_RefInputSample self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getProtocol' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetQualifiedName(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.refSample
  @param  Prot_RefInputSample self
  @returns   the result
**/
Sam_RefSample Prot_RefInputSample_GetRefSample(Prot_RefInputSample self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getRefSample' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
Impl_MemopsRoot Prot_RefInputSample_GetRoot(Prot_RefInputSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.serial

Unique identifier.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiInteger Prot_RefInputSample_GetSerial(Prot_RefInputSample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiSet Prot_RefInputSample_GetSolAflowSteps(Prot_RefInputSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSolAflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getSolAflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getSolAflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiSet Prot_RefInputSample_GetSolBflowSteps(Prot_RefInputSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSolBflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getSolBflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getSolBflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefInputSample self
  @returns   the result
**/
Prot_Step Prot_RefInputSample_GetStep(Prot_RefInputSample self)
{
  
  Prot_Step obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getStep' is not callable");
  
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
  @param  Prot_RefInputSample self
  @returns   the result
**/
Impl_TopObject Prot_RefInputSample_GetTopObject(Prot_RefInputSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefInputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for InputSampleDef.amount
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiString Prot_RefInputSample_GetUnit(Prot_RefInputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_RefInputSample Prot_RefInputSample_Init(Prot_Protocol parent, ApiMap attrlinks)
{
  
  return Prot_Protocol_NewRefInputSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol parent
  @returns  the new object
**/
Prot_RefInputSample Prot_RefInputSample_Init_reqd(Prot_Protocol parent)
{
  
  Prot_RefInputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_RefInputSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  Impl_ApplicationData value
**/
void *Prot_RefInputSample_RemoveApplicationData(Prot_RefInputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  Expe_InputSample value
**/
void *Prot_RefInputSample_RemoveInputSample(Prot_RefInputSample self, Expe_InputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'removeInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'removeInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
void *Prot_RefInputSample_RemoveSolAflowStep(Prot_RefInputSample self, Prot_FlowStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSolAflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'removeSolAflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'removeSolAflowStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
void *Prot_RefInputSample_RemoveSolBflowStep(Prot_RefInputSample self, Prot_FlowStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSolBflowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'removeSolBflowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'removeSolBflowStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_RefInputSample_Set(Prot_RefInputSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefInputSample self
  @param  Acco_AccessObject value
**/
void *Prot_RefInputSample_SetAccess(Prot_RefInputSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
void *Prot_RefInputSample_SetAddSteps(Prot_RefInputSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAddSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setAddSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setAddSteps' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.amount

The default amount of 
Sample to use for an InputSample created from this InputSampleDef.
  @param  Prot_RefInputSample self
  @param  ApiFloat value
**/
void *Prot_RefInputSample_SetAmount(Prot_RefInputSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setAmount' is not callable");
  
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
  @param  Prot_RefInputSample self
  @param  ApiList values
**/
void *Prot_RefInputSample_SetApplicationData(Prot_RefInputSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.displayUnit

The unit to 
display for InputSampleDef.amount.
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
void *Prot_RefInputSample_SetDisplayUnit(Prot_RefInputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
void *Prot_RefInputSample_SetInputSamples(Prot_RefInputSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setInputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.name

The name of the 
InputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to InputSample.name when an InputSample is created from 
an InputSampleDef.
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
void *Prot_RefInputSample_SetName(Prot_RefInputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.refSample
  @param  Prot_RefInputSample self
  @param  Sam_RefSample value
**/
void *Prot_RefInputSample_SetRefSample(Prot_RefInputSample self, Sam_RefSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setRefSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.serial

Unique identifier.
  @param  Prot_RefInputSample self
  @param  ApiInteger value
**/
void *Prot_RefInputSample_SetSerial(Prot_RefInputSample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
void *Prot_RefInputSample_SetSolAflowSteps(Prot_RefInputSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSolAflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setSolAflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setSolAflowSteps' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
void *Prot_RefInputSample_SetSolBflowSteps(Prot_RefInputSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSolBflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setSolBflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setSolBflowSteps' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefInputSample self
  @param  Prot_Step value
**/
void *Prot_RefInputSample_SetStep(Prot_RefInputSample self, Prot_Step value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefInputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for InputSampleDef.amount
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
void *Prot_RefInputSample_SetUnit(Prot_RefInputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_SortedAddSteps(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAddSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'sortedAddSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'sortedAddSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_SortedInputSamples(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'sortedInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'sortedInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_SortedSolAflowSteps(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSolAflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'sortedSolAflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'sortedSolAflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
ApiList Prot_RefInputSample_SortedSolBflowSteps(Prot_RefInputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSolBflowSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefInputSample: cannot find method 'sortedSolBflowSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefInputSample: method 'sortedSolBflowSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
