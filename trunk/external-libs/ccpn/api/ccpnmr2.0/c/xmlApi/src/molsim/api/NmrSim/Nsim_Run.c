
#include "ccp.h"

/*
  A single run, simulatuion, structure generation atempt etc. 
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  Impl_ApplicationData value
**/
void *Nsim_Run_AddApplicationData(Nsim_Run self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nsim_Run_AddInputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addInputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addInputMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
void *Nsim_Run_AddInputPeakList(Nsim_Run self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addInputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addInputPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @param  Coor_Model value
**/
void *Nsim_Run_AddInputStructure(Nsim_Run self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputStructure");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addInputStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addInputStructure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nsim_Run_AddOutputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOutputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addOutputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addOutputMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
void *Nsim_Run_AddOutputPeakList(Nsim_Run self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOutputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'addOutputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'addOutputPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean complete
**/
void *Nsim_Run_CheckAllValid(Nsim_Run self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean complete
**/
void *Nsim_Run_CheckValid(Nsim_Run self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'checkValid' is not callable");
  
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
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_Run_FindAllApplicationData(Nsim_Run self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllApplicationData' is not callable");
  
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
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_Run_FindAllApplicationData_keyval0(Nsim_Run self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_Run_FindAllApplicationData_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_Run_FindAllApplicationData_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_Run_FindAllApplicationData_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
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
ApiList Nsim_Run_FindAllApplicationData_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputMeasurementLists(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllInputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllInputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllInputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllInputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllInputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllInputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllInputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputPeakLists(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllInputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllInputPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputPeakLists_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllInputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputPeakLists_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllInputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputPeakLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllInputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputPeakLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllInputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllInputPeakLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllInputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputStructures(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputStructures");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllInputStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllInputStructures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputStructures_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllInputStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputStructures_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllInputStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputStructures_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllInputStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllInputStructures_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllInputStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllInputStructures_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllInputStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputMeasurementLists(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllOutputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllOutputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllOutputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllOutputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllOutputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllOutputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllOutputMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputPeakLists(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllOutputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllOutputPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputPeakLists_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllOutputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputPeakLists_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllOutputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputPeakLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllOutputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllOutputPeakLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllOutputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllOutputPeakLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllOutputPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllRunParameters(Nsim_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRunParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findAllRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findAllRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllRunParameters_keyval0(Nsim_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllRunParameters_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllRunParameters_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_Run_FindAllRunParameters_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
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
ApiSet Nsim_Run_FindAllRunParameters_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_Run_FindFirstApplicationData(Nsim_Run self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval0(Nsim_Run self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
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
Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList(Nsim_Run self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstInputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstInputMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval0(Nsim_Run self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstInputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstInputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstInputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstInputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
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
Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstInputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstInputPeakList(Nsim_Run self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstInputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstInputPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval0(Nsim_Run self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstInputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstInputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstInputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstInputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
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
Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstInputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nsim_Run_FindFirstInputStructure(Nsim_Run self, ApiMap conditions)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputStructure");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstInputStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstInputStructure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nsim_Run_FindFirstInputStructure_keyval0(Nsim_Run self)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstInputStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nsim_Run_FindFirstInputStructure_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstInputStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nsim_Run_FindFirstInputStructure_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstInputStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nsim_Run_FindFirstInputStructure_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstInputStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
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
Coor_Model Nsim_Run_FindFirstInputStructure_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstInputStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm(Nsim_Run self, ApiMap conditions)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval0(Nsim_Run self)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
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
Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList(Nsim_Run self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstOutputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstOutputMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval0(Nsim_Run self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstOutputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstOutputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstOutputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstOutputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
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
Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstOutputMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList(Nsim_Run self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstOutputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstOutputPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval0(Nsim_Run self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstOutputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstOutputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstOutputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstOutputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
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
Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstOutputPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_RunParameter Nsim_Run_FindFirstRunParameter(Nsim_Run self, ApiMap conditions)
{
  
  Nsim_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRunParameter");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'findFirstRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'findFirstRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval0(Nsim_Run self)
{
  
  Nsim_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval1(Nsim_Run self, char * key, ApiObject value)
{
  
  Nsim_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
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
Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nsim_Run_Get(Nsim_Run self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_Run self
  @returns   the result
**/
Acco_AccessObject Nsim_Run_GetAccess(Nsim_Run self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.annealProtocol

AnnealProtocol used in Run
  @param  Nsim_Run self
  @returns   the result
**/
Anpr_AnnealProtocol Nsim_Run_GetAnnealProtocol(Nsim_Run self)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getAnnealProtocol' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_GetApplicationData(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nsim_Run Nsim_Run_GetByKey(Nsim_Run self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getByKey' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiString Nsim_Run_GetClassName(Nsim_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nsim_Run self
  @returns   the result
**/
ApiString Nsim_Run_GetDetails(Nsim_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getDetails' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_GetFieldNames(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nsim_Run_GetFullKey(Nsim_Run self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getFullKey' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiBoolean Nsim_Run_GetInConstructor(Nsim_Run self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.inputConstraintStore

NmrConstraintStore that 
defines Nmr Constraints used for input to this run
  @param  Nsim_Run self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nsim_Run_GetInputConstraintStore(Nsim_Run self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputConstraintStore");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getInputConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getInputConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetInputMeasurementLists(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getInputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getInputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetInputPeakLists(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getInputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getInputPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetInputStructures(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputStructures");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getInputStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getInputStructures' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiBoolean Nsim_Run_GetIsDeleted(Nsim_Run self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @returns  Local object key
**/
ApiObject Nsim_Run_GetLocalKey(Nsim_Run self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.molSystem

MolSystem used for Run
  @param  Nsim_Run self
  @returns   the result
**/
Mols_MolSystem Nsim_Run_GetMolSystem(Nsim_Run self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetNmrSimEnergyTerms(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.nmrSimStore

parent link
  @param  Nsim_Run self
  @returns   the result
**/
Nsim_NmrSimStore Nsim_Run_GetNmrSimStore(Nsim_Run self)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimStore");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getNmrSimStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getNmrSimStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.outputConstraintStore

NmrConstraintStore used 
to store output constraitns from this run
  @param  Nsim_Run self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nsim_Run_GetOutputConstraintStore(Nsim_Run self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputConstraintStore");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getOutputConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getOutputConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.outputEnsemble

MolStructure Ensemble 
generated from Run
  @param  Nsim_Run self
  @returns   the result
**/
Coor_StructureEnsemble Nsim_Run_GetOutputEnsemble(Nsim_Run self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputEnsemble");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getOutputEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getOutputEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetOutputMeasurementLists(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getOutputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getOutputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetOutputPeakLists(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getOutputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getOutputPeakLists' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiString Nsim_Run_GetPackageName(Nsim_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getPackageName' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiString Nsim_Run_GetPackageShortName(Nsim_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.parent

link to parent object - synonym for 
nmrSimStore
  @param  Nsim_Run self
  @returns   the result
**/
Nsim_NmrSimStore Nsim_Run_GetParent(Nsim_Run self)
{
  
  Nsim_NmrSimStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getParent' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
ApiString Nsim_Run_GetQualifiedName(Nsim_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getQualifiedName' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
Impl_MemopsRoot Nsim_Run_GetRoot(Nsim_Run self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns   the result
**/
ApiSet Nsim_Run_GetRunParameters(Nsim_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRunParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nsim_Run self
  @returns   the result
**/
ApiInteger Nsim_Run_GetSerial(Nsim_Run self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getSerial' is not callable");
  
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
  @param  Nsim_Run self
  @returns   the result
**/
Impl_TopObject Nsim_Run_GetTopObject(Nsim_Run self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.NmrSim.Run
  @param  Nsim_NmrSimStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_Run Nsim_Run_Init(Nsim_NmrSimStore parent, ApiMap attrlinks)
{
  
  return Nsim_NmrSimStore_NewRun(parent, attrlinks);
}

/**
  Constructor for molsim.NmrSim.Run
  @param  Nsim_NmrSimStore parent
  @param  Anpr_AnnealProtocol annealProtocol
  @param  Nmrc_NmrConstraintStore inputConstraintStore
  @param  Mols_MolSystem molSystem
  @returns  the new object
**/
Nsim_Run Nsim_Run_Init_reqd(Nsim_NmrSimStore parent, Anpr_AnnealProtocol annealProtocol, Nmrc_NmrConstraintStore inputConstraintStore, Mols_MolSystem molSystem)
{
  
  Nsim_Run  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "annealProtocol", annealProtocol);
  PyDict_SetItemString(attrlinks, "inputConstraintStore", inputConstraintStore);
  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  
  obj = Nsim_Run_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_NmrSimEnergyTerm Nsim_Run_NewNmrSimEnergyTerm(Nsim_Run self, ApiMap attrlinks)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'newNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'newNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * code
  @param  ApiInteger termId
  @returns  the new object
**/
Nsim_NmrSimEnergyTerm Nsim_Run_NewNmrSimEnergyTerm_reqd(Nsim_Run self, char * code, ApiInteger termId)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "termId", termId);
  
  obj = Nsim_Run_NewNmrSimEnergyTerm(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.RunParameter
  @param  Nsim_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_RunParameter Nsim_Run_NewRunParameter(Nsim_Run self, ApiMap attrlinks)
{
  
  Nsim_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRunParameter");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'newRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'newRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.RunParameter
  @param  Nsim_Run self
  @param  char * code
  @param  ApiInteger id
  @returns  the new object
**/
Nsim_RunParameter Nsim_Run_NewRunParameter_reqd(Nsim_Run self, char * code, ApiInteger id)
{
  
  Nsim_RunParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "id", id);
  
  obj = Nsim_Run_NewRunParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  Impl_ApplicationData value
**/
void *Nsim_Run_RemoveApplicationData(Nsim_Run self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nsim_Run_RemoveInputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeInputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeInputMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
void *Nsim_Run_RemoveInputPeakList(Nsim_Run self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeInputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeInputPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  Coor_Model value
**/
void *Nsim_Run_RemoveInputStructure(Nsim_Run self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputStructure");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeInputStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeInputStructure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nsim_Run_RemoveOutputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOutputMeasurementList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeOutputMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeOutputMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
void *Nsim_Run_RemoveOutputPeakList(Nsim_Run self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOutputPeakList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'removeOutputPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'removeOutputPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nsim_Run_Set(Nsim_Run self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_Run self
  @param  Acco_AccessObject value
**/
void *Nsim_Run_SetAccess(Nsim_Run self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.annealProtocol

AnnealProtocol used in Run
  @param  Nsim_Run self
  @param  Anpr_AnnealProtocol value
**/
void *Nsim_Run_SetAnnealProtocol(Nsim_Run self, Anpr_AnnealProtocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setAnnealProtocol' is not callable");
  
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
  @param  Nsim_Run self
  @param  ApiList values
**/
void *Nsim_Run_SetApplicationData(Nsim_Run self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nsim_Run self
  @param  ApiString value
**/
void *Nsim_Run_SetDetails(Nsim_Run self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.inputConstraintStore

NmrConstraintStore that 
defines Nmr Constraints used for input to this run
  @param  Nsim_Run self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nsim_Run_SetInputConstraintStore(Nsim_Run self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputConstraintStore");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setInputConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setInputConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
void *Nsim_Run_SetInputMeasurementLists(Nsim_Run self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setInputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setInputMeasurementLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
void *Nsim_Run_SetInputPeakLists(Nsim_Run self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setInputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setInputPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @param  ApiSet values
**/
void *Nsim_Run_SetInputStructures(Nsim_Run self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputStructures");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setInputStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setInputStructures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.molSystem

MolSystem used for Run
  @param  Nsim_Run self
  @param  Mols_MolSystem value
**/
void *Nsim_Run_SetMolSystem(Nsim_Run self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystem");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.outputConstraintStore

NmrConstraintStore used 
to store output constraitns from this run
  @param  Nsim_Run self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nsim_Run_SetOutputConstraintStore(Nsim_Run self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputConstraintStore");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setOutputConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setOutputConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.outputEnsemble

MolStructure Ensemble 
generated from Run
  @param  Nsim_Run self
  @param  Coor_StructureEnsemble value
**/
void *Nsim_Run_SetOutputEnsemble(Nsim_Run self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputEnsemble");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setOutputEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setOutputEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
void *Nsim_Run_SetOutputMeasurementLists(Nsim_Run self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setOutputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setOutputMeasurementLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
void *Nsim_Run_SetOutputPeakLists(Nsim_Run self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setOutputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setOutputPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nsim_Run self
  @param  ApiInteger value
**/
void *Nsim_Run_SetSerial(Nsim_Run self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedInputMeasurementLists(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedInputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedInputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedInputPeakLists(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedInputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedInputPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedInputStructures(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputStructures");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedInputStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedInputStructures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedNmrSimEnergyTerms(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedOutputMeasurementLists(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputMeasurementLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedOutputMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedOutputMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedOutputPeakLists(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputPeakLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedOutputPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedOutputPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns   the result
**/
ApiList Nsim_Run_SortedRunParameters(Nsim_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRunParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.Run: cannot find method 'sortedRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.Run: method 'sortedRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
