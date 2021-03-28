
#include "ccp.h"

/*
  Nmr Spectrometer used for data acquisition during a Project. 
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  Impl_ApplicationData value
**/
void *Inst_NmrSpectrometer_AddApplicationData(Inst_NmrSpectrometer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  Nmr_Experiment value
**/
void *Inst_NmrSpectrometer_AddExperiment(Inst_NmrSpectrometer self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiBoolean complete
**/
void *Inst_NmrSpectrometer_CheckAllValid(Inst_NmrSpectrometer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiBoolean complete
**/
void *Inst_NmrSpectrometer_CheckValid(Inst_NmrSpectrometer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'checkValid' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrSpectrometer_FindAllApplicationData(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findAllApplicationData' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval0(Inst_NmrSpectrometer self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
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
ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllCitations(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval0(Inst_NmrSpectrometer self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
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
ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllExperiments(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval0(Inst_NmrSpectrometer self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
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
ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findFirstApplicationData' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval0(Inst_NmrSpectrometer self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
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
Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval0(Inst_NmrSpectrometer self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
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
Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment(Inst_NmrSpectrometer self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval0(Inst_NmrSpectrometer self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_NmrSpectrometer_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_NmrSpectrometer_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_NmrSpectrometer_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_NmrSpectrometer_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
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
Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_NmrSpectrometer_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Inst_NmrSpectrometer_Get(Inst_NmrSpectrometer self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Acco_AccessObject Inst_NmrSpectrometer_GetAccess(Inst_NmrSpectrometer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getAccess' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Acco_AccessObject Inst_NmrSpectrometer_GetActiveAccess(Inst_NmrSpectrometer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getActiveAccess' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiList Inst_NmrSpectrometer_GetApplicationData(Inst_NmrSpectrometer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Inst_NmrSpectrometer Inst_NmrSpectrometer_GetByKey(Inst_NmrSpectrometer self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiSet Inst_NmrSpectrometer_GetCitations(Inst_NmrSpectrometer self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getCitations' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetClassName(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getClassName' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Affi_Person Inst_NmrSpectrometer_GetContactPerson(Inst_NmrSpectrometer self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getContactPerson' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetDetails(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiSet Inst_NmrSpectrometer_GetExperiments(Inst_NmrSpectrometer self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getExperiments' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiList Inst_NmrSpectrometer_GetFieldNames(Inst_NmrSpectrometer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getFieldNames' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiBoolean Inst_NmrSpectrometer_GetInConstructor(Inst_NmrSpectrometer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getInConstructor' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Inst_InstrumentStore Inst_NmrSpectrometer_GetInstrumentStore(Inst_NmrSpectrometer self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentStore");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Instrument.NmrSpectrometer.instrumentType

Instrument type - 
must be left as the default 'NmrSpectrometer'
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetInstrumentType(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getInstrumentType' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiBoolean Inst_NmrSpectrometer_GetIsDeleted(Inst_NmrSpectrometer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getIsDeleted' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Affi_Organisation Inst_NmrSpectrometer_GetManufacturer(Inst_NmrSpectrometer self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getManufacturer' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetModel(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getModel' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetName(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrSpectrometer.nominalFreq

Nominal 
rounded-off spectrometer frequency in MHz protons, given as a string.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetNominalFreq(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNominalFreq");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getNominalFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getNominalFreq' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetPackageName(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getPackageName' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetPackageShortName(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getPackageShortName' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Inst_InstrumentStore Inst_NmrSpectrometer_GetParent(Inst_NmrSpectrometer self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.NmrSpectrometer.protonFreq

Actual magnet 
field strength expressed as the proton resonance frequency in MHz. e.g. 
'500.013'.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiFloat Inst_NmrSpectrometer_GetProtonFreq(Inst_NmrSpectrometer self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtonFreq");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getProtonFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getProtonFreq' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetQualifiedName(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getQualifiedName' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Impl_MemopsRoot Inst_NmrSpectrometer_GetRoot(Inst_NmrSpectrometer self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getRoot' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiInteger Inst_NmrSpectrometer_GetSerial(Inst_NmrSpectrometer self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getSerial' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiString Inst_NmrSpectrometer_GetSerialNumber(Inst_NmrSpectrometer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getSerialNumber' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
Impl_TopObject Inst_NmrSpectrometer_GetTopObject(Inst_NmrSpectrometer self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Inst_NmrSpectrometer Inst_NmrSpectrometer_Init(Inst_InstrumentStore parent, ApiMap attrlinks)
{
  
  return Inst_InstrumentStore_NewNmrSpectrometer(parent, attrlinks);
}

/**
  Constructor for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
Inst_NmrSpectrometer Inst_NmrSpectrometer_Init_reqd(Inst_InstrumentStore parent, char * name)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Inst_NmrSpectrometer_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  Impl_ApplicationData value
**/
void *Inst_NmrSpectrometer_RemoveApplicationData(Inst_NmrSpectrometer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  Nmr_Experiment value
**/
void *Inst_NmrSpectrometer_RemoveExperiment(Inst_NmrSpectrometer self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiString name
  @param  ApiObject value
**/
void *Inst_NmrSpectrometer_Set(Inst_NmrSpectrometer self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrSpectrometer self
  @param  Acco_AccessObject value
**/
void *Inst_NmrSpectrometer_SetAccess(Inst_NmrSpectrometer self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setAccess' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiList values
**/
void *Inst_NmrSpectrometer_SetApplicationData(Inst_NmrSpectrometer self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiSet values
**/
void *Inst_NmrSpectrometer_SetCitations(Inst_NmrSpectrometer self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setCitations' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  Affi_Person value
**/
void *Inst_NmrSpectrometer_SetContactPerson(Inst_NmrSpectrometer self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setContactPerson' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetDetails(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiSet values
**/
void *Inst_NmrSpectrometer_SetExperiments(Inst_NmrSpectrometer self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Instrument.NmrSpectrometer.instrumentType

Instrument type - 
must be left as the default 'NmrSpectrometer'
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetInstrumentType(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setInstrumentType' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  Affi_Organisation value
**/
void *Inst_NmrSpectrometer_SetManufacturer(Inst_NmrSpectrometer self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setManufacturer' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetModel(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setModel' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetName(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrSpectrometer.nominalFreq

Nominal 
rounded-off spectrometer frequency in MHz protons, given as a string.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetNominalFreq(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNominalFreq");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setNominalFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setNominalFreq' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.NmrSpectrometer.protonFreq

Actual magnet 
field strength expressed as the proton resonance frequency in MHz. e.g. 
'500.013'.
  @param  Inst_NmrSpectrometer self
  @param  ApiFloat value
**/
void *Inst_NmrSpectrometer_SetProtonFreq(Inst_NmrSpectrometer self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtonFreq");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setProtonFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setProtonFreq' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiInteger value
**/
void *Inst_NmrSpectrometer_SetSerial(Inst_NmrSpectrometer self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setSerial' is not callable");
  
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
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
void *Inst_NmrSpectrometer_SetSerialNumber(Inst_NmrSpectrometer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'setSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'setSerialNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiList Inst_NmrSpectrometer_SortedCitations(Inst_NmrSpectrometer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
ApiList Inst_NmrSpectrometer_SortedExperiments(Inst_NmrSpectrometer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.NmrSpectrometer: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
