
#include "ccp.h"

/*
  NMR probe used. 
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  Impl_ApplicationData value
**/
void *Inst_NmrProbe_AddApplicationData(Inst_NmrProbe self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  Nmr_Experiment value
**/
void *Inst_NmrProbe_AddExperiment(Inst_NmrProbe self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiBoolean complete
**/
void *Inst_NmrProbe_CheckAllValid(Inst_NmrProbe self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiBoolean complete
**/
void *Inst_NmrProbe_CheckValid(Inst_NmrProbe self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'checkValid' is not callable");
  
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
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrProbe_FindAllApplicationData(Inst_NmrProbe self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findAllApplicationData' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrProbe_FindAllApplicationData_keyval0(Inst_NmrProbe self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrProbe_FindAllApplicationData_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrProbe_FindAllApplicationData_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrProbe_FindAllApplicationData_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
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
ApiList Inst_NmrProbe_FindAllApplicationData_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllCitations(Inst_NmrProbe self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllCitations_keyval0(Inst_NmrProbe self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllCitations_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllCitations_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllCitations_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
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
ApiSet Inst_NmrProbe_FindAllCitations_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllExperiments(Inst_NmrProbe self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllExperiments_keyval0(Inst_NmrProbe self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllExperiments_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllExperiments_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrProbe_FindAllExperiments_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
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
ApiSet Inst_NmrProbe_FindAllExperiments_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData(Inst_NmrProbe self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findFirstApplicationData' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval0(Inst_NmrProbe self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
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
Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrProbe_FindFirstCitation(Inst_NmrProbe self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval0(Inst_NmrProbe self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
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
Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment(Inst_NmrProbe self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval0(Inst_NmrProbe self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrProbe_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval1(Inst_NmrProbe self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrProbe_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrProbe_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrProbe_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
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
Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrProbe_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Inst_NmrProbe_Get(Inst_NmrProbe self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrProbe self
  @returns   the result
**/
Acco_AccessObject Inst_NmrProbe_GetAccess(Inst_NmrProbe self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getAccess' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiList Inst_NmrProbe_GetApplicationData(Inst_NmrProbe self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Inst_NmrProbe Inst_NmrProbe_GetByKey(Inst_NmrProbe self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrProbe.citations

Citations describing 
Nmr Probe
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiSet Inst_NmrProbe_GetCitations(Inst_NmrProbe self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getCitations' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetClassName(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrProbe self
  @returns   the result
**/
Affi_Person Inst_NmrProbe_GetContactPerson(Inst_NmrProbe self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getContactPerson' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetDetails(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrProbe.diameter

Probe diameter in cm.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiFloat Inst_NmrProbe_GetDiameter(Inst_NmrProbe self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDiameter");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getDiameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getDiameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiSet Inst_NmrProbe_GetExperiments(Inst_NmrProbe self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getExperiments' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiList Inst_NmrProbe_GetFieldNames(Inst_NmrProbe self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getFieldNames' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiBoolean Inst_NmrProbe_GetInConstructor(Inst_NmrProbe self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_NmrProbe self
  @returns   the result
**/
Inst_InstrumentStore Inst_NmrProbe_GetInstrumentStore(Inst_NmrProbe self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentStore");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrProbe.instrumentType

Instrument type 
- must be left as the default 'NmrProbe'
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetInstrumentType(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getInstrumentType' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiBoolean Inst_NmrProbe_GetIsDeleted(Inst_NmrProbe self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
Affi_Organisation Inst_NmrProbe_GetManufacturer(Inst_NmrProbe self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getManufacturer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetModel(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetName(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getName' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetPackageName(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getPackageName' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetPackageShortName(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_NmrProbe self
  @returns   the result
**/
Inst_InstrumentStore Inst_NmrProbe_GetParent(Inst_NmrProbe self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrProbe.probeType

Probe type.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetProbeType(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProbeType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getProbeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getProbeType' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetQualifiedName(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getQualifiedName' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
Impl_MemopsRoot Inst_NmrProbe_GetRoot(Inst_NmrProbe self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiInteger Inst_NmrProbe_GetSerial(Inst_NmrProbe self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiString Inst_NmrProbe_GetSerialNumber(Inst_NmrProbe self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getSerialNumber' is not callable");
  
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
  @param  Inst_NmrProbe self
  @returns   the result
**/
Impl_TopObject Inst_NmrProbe_GetTopObject(Inst_NmrProbe self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Inst_NmrProbe Inst_NmrProbe_Init(Inst_InstrumentStore parent, ApiMap attrlinks)
{
  
  return Inst_InstrumentStore_NewNmrProbe(parent, attrlinks);
}

/**
  Constructor for ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
Inst_NmrProbe Inst_NmrProbe_Init_reqd(Inst_InstrumentStore parent, char * name)
{
  
  Inst_NmrProbe  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Inst_NmrProbe_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  Impl_ApplicationData value
**/
void *Inst_NmrProbe_RemoveApplicationData(Inst_NmrProbe self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  Nmr_Experiment value
**/
void *Inst_NmrProbe_RemoveExperiment(Inst_NmrProbe self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiString name
  @param  ApiObject value
**/
void *Inst_NmrProbe_Set(Inst_NmrProbe self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrProbe self
  @param  Acco_AccessObject value
**/
void *Inst_NmrProbe_SetAccess(Inst_NmrProbe self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setAccess' is not callable");
  
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
  @param  Inst_NmrProbe self
  @param  ApiList values
**/
void *Inst_NmrProbe_SetApplicationData(Inst_NmrProbe self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrProbe.citations

Citations describing 
Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiSet values
**/
void *Inst_NmrProbe_SetCitations(Inst_NmrProbe self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrProbe self
  @param  Affi_Person value
**/
void *Inst_NmrProbe_SetContactPerson(Inst_NmrProbe self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setContactPerson' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetDetails(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrProbe.diameter

Probe diameter in cm.
  @param  Inst_NmrProbe self
  @param  ApiFloat value
**/
void *Inst_NmrProbe_SetDiameter(Inst_NmrProbe self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDiameter");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setDiameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setDiameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiSet values
**/
void *Inst_NmrProbe_SetExperiments(Inst_NmrProbe self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrProbe.instrumentType

Instrument type 
- must be left as the default 'NmrProbe'
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetInstrumentType(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrProbe self
  @param  Affi_Organisation value
**/
void *Inst_NmrProbe_SetManufacturer(Inst_NmrProbe self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setManufacturer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetModel(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setModel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetName(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrProbe.probeType

Probe type.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetProbeType(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProbeType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setProbeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setProbeType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrProbe self
  @param  ApiInteger value
**/
void *Inst_NmrProbe_SetSerial(Inst_NmrProbe self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
void *Inst_NmrProbe_SetSerialNumber(Inst_NmrProbe self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'setSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'setSerialNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiList Inst_NmrProbe_SortedCitations(Inst_NmrProbe self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns   the result
**/
ApiList Inst_NmrProbe_SortedExperiments(Inst_NmrProbe self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrProbe: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrProbe: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
