
#include "ccp.h"

/*
  The column instrument.
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  Impl_ApplicationData value
**/
void *Inst_Column_AddApplicationData(Inst_Column self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  Expe_Experiment value
**/
void *Inst_Column_AddExperiment(Inst_Column self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  Clas_InstrumentType value
**/
void *Inst_Column_AddInstrumentType(Inst_Column self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'addInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'addInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @param  Meth_Method value
**/
void *Inst_Column_AddMethod(Inst_Column self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'addMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'addMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiBoolean complete
**/
void *Inst_Column_CheckAllValid(Inst_Column self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiBoolean complete
**/
void *Inst_Column_CheckValid(Inst_Column self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'checkValid' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_Column_FindAllApplicationData(Inst_Column self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findAllApplicationData' is not callable");
  
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
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_Column_FindAllApplicationData_keyval0(Inst_Column self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_Column_FindAllApplicationData_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_Column_FindAllApplicationData_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_Column_FindAllApplicationData_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
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
ApiList Inst_Column_FindAllApplicationData_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllExperiments(Inst_Column self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllExperiments_keyval0(Inst_Column self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllExperiments_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllExperiments_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllExperiments_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
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
ApiSet Inst_Column_FindAllExperiments_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllInstrumentTypes(Inst_Column self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findAllInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findAllInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllInstrumentTypes_keyval0(Inst_Column self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllInstrumentTypes_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllInstrumentTypes_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllInstrumentTypes_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
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
ApiSet Inst_Column_FindAllInstrumentTypes_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllMethods(Inst_Column self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findAllMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findAllMethods' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllMethods_keyval0(Inst_Column self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllMethods_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllMethods_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Inst_Column_FindAllMethods_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
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
ApiSet Inst_Column_FindAllMethods_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_Column_FindFirstApplicationData(Inst_Column self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findFirstApplicationData' is not callable");
  
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
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval0(Inst_Column self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
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
Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Inst_Column_FindFirstExperiment(Inst_Column self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Inst_Column_FindFirstExperiment_keyval0(Inst_Column self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Inst_Column_FindFirstExperiment_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Inst_Column_FindFirstExperiment_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Inst_Column_FindFirstExperiment_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
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
Expe_Experiment Inst_Column_FindFirstExperiment_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Inst_Column_FindFirstInstrumentType(Inst_Column self, ApiMap conditions)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findFirstInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findFirstInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval0(Inst_Column self)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
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
Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Inst_Column_FindFirstMethod(Inst_Column self, ApiMap conditions)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'findFirstMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'findFirstMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Inst_Column_FindFirstMethod_keyval0(Inst_Column self)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_Column_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Inst_Column_FindFirstMethod_keyval1(Inst_Column self, char * key, ApiObject value)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_Column_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Inst_Column_FindFirstMethod_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_Column_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Inst_Column_FindFirstMethod_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_Column_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
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
Meth_Method Inst_Column_FindFirstMethod_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_Column_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Inst_Column_Get(Inst_Column self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_Column self
  @returns   the result
**/
Acco_AccessObject Inst_Column_GetAccess(Inst_Column self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getAccess' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Acco_AccessObject Inst_Column_GetActiveAccess(Inst_Column self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getActiveAccess' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiList Inst_Column_GetApplicationData(Inst_Column self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Inst_Column Inst_Column_GetByKey(Inst_Column self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Inst_Column obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getByKey' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetClassName(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Column.columnType

The type of the 
column.
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetColumnType(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColumnType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getColumnType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getColumnType' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Affi_Person Inst_Column_GetContactPerson(Inst_Column self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getContactPerson' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetDetails(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiSet Inst_Column_GetExperiments(Inst_Column self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getExperiments' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiList Inst_Column_GetFieldNames(Inst_Column self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getFieldNames' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiBoolean Inst_Column_GetInConstructor(Inst_Column self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getInConstructor' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Inst_InstrumentStore Inst_Column_GetInstrumentStore(Inst_Column self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentStore");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Instrument.instrumentType

The type of 
the instrument. Should be an open enumeration.
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetInstrumentType(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiSet Inst_Column_GetInstrumentTypes(Inst_Column self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getInstrumentTypes' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiBoolean Inst_Column_GetIsDeleted(Inst_Column self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Column.loadingMethod

The method used to 
load the sample into the column e.g. injected (HPLC), gravity, ...
  @param  Inst_Column self
  @returns   the result
**/
Meth_Method Inst_Column_GetLoadingMethod(Inst_Column self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLoadingMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getLoadingMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getLoadingMethod' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Affi_Organisation Inst_Column_GetManufacturer(Inst_Column self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getManufacturer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiSet Inst_Column_GetMethods(Inst_Column self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getMethods' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetModel(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getModel' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetName(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getName' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetPackageName(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getPackageName' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetPackageShortName(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getPackageShortName' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Inst_InstrumentStore Inst_Column_GetParent(Inst_Column self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getParent' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetQualifiedName(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getQualifiedName' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Impl_MemopsRoot Inst_Column_GetRoot(Inst_Column self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getRoot' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiInteger Inst_Column_GetSerial(Inst_Column self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getSerial' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetSerialNumber(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getSerialNumber' is not callable");
  
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
  @param  Inst_Column self
  @returns   the result
**/
Impl_TopObject Inst_Column_GetTopObject(Inst_Column self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Column.volume

The volume of the column 
in m3.
  @param  Inst_Column self
  @returns   the result
**/
ApiFloat Inst_Column_GetVolume(Inst_Column self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVolume");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getVolume' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.Column.volumeDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Inst_Column self
  @returns   the result
**/
ApiString Inst_Column_GetVolumeDisplayUnit(Inst_Column self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVolumeDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'getVolumeDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'getVolumeDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Instrument.Column
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Inst_Column Inst_Column_Init(Inst_InstrumentStore parent, ApiMap attrlinks)
{
  
  return Inst_InstrumentStore_NewColumn(parent, attrlinks);
}

/**
  Constructor for ccp.general.Instrument.Column
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
Inst_Column Inst_Column_Init_reqd(Inst_InstrumentStore parent, char * name)
{
  
  Inst_Column  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Inst_Column_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  Impl_ApplicationData value
**/
void *Inst_Column_RemoveApplicationData(Inst_Column self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  Expe_Experiment value
**/
void *Inst_Column_RemoveExperiment(Inst_Column self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  Clas_InstrumentType value
**/
void *Inst_Column_RemoveInstrumentType(Inst_Column self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'removeInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'removeInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  Meth_Method value
**/
void *Inst_Column_RemoveMethod(Inst_Column self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'removeMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'removeMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiString name
  @param  ApiObject value
**/
void *Inst_Column_Set(Inst_Column self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_Column self
  @param  Acco_AccessObject value
**/
void *Inst_Column_SetAccess(Inst_Column self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setAccess' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiList values
**/
void *Inst_Column_SetApplicationData(Inst_Column self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Column.columnType

The type of the 
column.
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetColumnType(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColumnType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setColumnType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setColumnType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_Column self
  @param  Affi_Person value
**/
void *Inst_Column_SetContactPerson(Inst_Column self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setContactPerson' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetDetails(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
void *Inst_Column_SetExperiments(Inst_Column self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Instrument.instrumentType

The type of 
the instrument. Should be an open enumeration.
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetInstrumentType(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
void *Inst_Column_SetInstrumentTypes(Inst_Column self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setInstrumentTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Column.loadingMethod

The method used to 
load the sample into the column e.g. injected (HPLC), gravity, ...
  @param  Inst_Column self
  @param  Meth_Method value
**/
void *Inst_Column_SetLoadingMethod(Inst_Column self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLoadingMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setLoadingMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setLoadingMethod' is not callable");
  
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
  @param  Inst_Column self
  @param  Affi_Organisation value
**/
void *Inst_Column_SetManufacturer(Inst_Column self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setManufacturer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
void *Inst_Column_SetMethods(Inst_Column self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setMethods' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetModel(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setModel' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetName(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setName' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiInteger value
**/
void *Inst_Column_SetSerial(Inst_Column self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setSerial' is not callable");
  
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
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetSerialNumber(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setSerialNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Column.volume

The volume of the column 
in m3.
  @param  Inst_Column self
  @param  ApiFloat value
**/
void *Inst_Column_SetVolume(Inst_Column self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVolume");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setVolume' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.Column.volumeDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Inst_Column self
  @param  ApiString value
**/
void *Inst_Column_SetVolumeDisplayUnit(Inst_Column self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVolumeDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'setVolumeDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'setVolumeDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiList Inst_Column_SortedExperiments(Inst_Column self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiList Inst_Column_SortedInstrumentTypes(Inst_Column self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'sortedInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'sortedInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns   the result
**/
ApiList Inst_Column_SortedMethods(Inst_Column self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.Column: cannot find method 'sortedMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.Column: method 'sortedMethods' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
