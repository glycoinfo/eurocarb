
#include "ccp.h"

/*
  The type of instrument. It is an instrument classification that can be specific to a particular organisation.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  Impl_ApplicationData value
**/
void *Clas_InstrumentType_AddApplicationData(Clas_InstrumentType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Clas_ExperimentType value
**/
void *Clas_InstrumentType_AddExperimentType(Clas_InstrumentType self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'addExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'addExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Inst_Instrument value
**/
void *Clas_InstrumentType_AddInstrument(Clas_InstrumentType self, Inst_Instrument value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'addInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'addInstrument' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Prot_Procedure value
**/
void *Clas_InstrumentType_AddProcedure(Clas_InstrumentType self, Prot_Procedure value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'addProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'addProcedure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean complete
**/
void *Clas_InstrumentType_CheckAllValid(Clas_InstrumentType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean complete
**/
void *Clas_InstrumentType_CheckValid(Clas_InstrumentType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'checkValid' is not callable");
  
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
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_InstrumentType_FindAllApplicationData(Clas_InstrumentType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_InstrumentType_FindAllApplicationData_keyval0(Clas_InstrumentType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_InstrumentType_FindAllApplicationData_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_InstrumentType_FindAllApplicationData_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_InstrumentType_FindAllApplicationData_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
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
ApiList Clas_InstrumentType_FindAllApplicationData_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllExperimentTypes(Clas_InstrumentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findAllExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findAllExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval0(Clas_InstrumentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
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
ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllInstruments(Clas_InstrumentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstruments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findAllInstruments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findAllInstruments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllInstruments_keyval0(Clas_InstrumentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindAllInstruments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllInstruments_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindAllInstruments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllInstruments_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindAllInstruments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllInstruments_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindAllInstruments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
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
ApiSet Clas_InstrumentType_FindAllInstruments_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindAllInstruments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllProcedures(Clas_InstrumentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findAllProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findAllProcedures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllProcedures_keyval0(Clas_InstrumentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllProcedures_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllProcedures_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_InstrumentType_FindAllProcedures_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
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
ApiSet Clas_InstrumentType_FindAllProcedures_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindAllProcedures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData(Clas_InstrumentType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval0(Clas_InstrumentType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
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
Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType(Clas_InstrumentType self, ApiMap conditions)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findFirstExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findFirstExperimentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval0(Clas_InstrumentType self)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
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
Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_Instrument Clas_InstrumentType_FindFirstInstrument(Clas_InstrumentType self, ApiMap conditions)
{
  
  Inst_Instrument obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findFirstInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findFirstInstrument' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval0(Clas_InstrumentType self)
{
  
  Inst_Instrument  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindFirstInstrument(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  Inst_Instrument  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindFirstInstrument(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_Instrument  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindFirstInstrument(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_Instrument  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindFirstInstrument(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
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
Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_Instrument  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindFirstInstrument(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Clas_InstrumentType_FindFirstProcedure(Clas_InstrumentType self, ApiMap conditions)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'findFirstProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'findFirstProcedure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval0(Clas_InstrumentType self)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_InstrumentType_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval1(Clas_InstrumentType self, char * key, ApiObject value)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_InstrumentType_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_InstrumentType_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_InstrumentType_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
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
Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Procedure  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_InstrumentType_FindFirstProcedure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_InstrumentType_Get(Clas_InstrumentType self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_InstrumentType self
  @returns   the result
**/
Acco_AccessObject Clas_InstrumentType_GetAccess(Clas_InstrumentType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getAccess' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
Acco_AccessObject Clas_InstrumentType_GetActiveAccess(Clas_InstrumentType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getActiveAccess' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiList Clas_InstrumentType_GetApplicationData(Clas_InstrumentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_InstrumentType Clas_InstrumentType_GetByKey(Clas_InstrumentType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getByKey' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetClassName(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.InstrumentType.classification

parent 
link
  @param  Clas_InstrumentType self
  @returns   the result
**/
Clas_Classification Clas_InstrumentType_GetClassification(Clas_InstrumentType self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetDetails(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiSet Clas_InstrumentType_GetExperimentTypes(Clas_InstrumentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getExperimentTypes' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiList Clas_InstrumentType_GetFieldNames(Clas_InstrumentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_InstrumentType_GetFullKey(Clas_InstrumentType self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getFullKey' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiBoolean Clas_InstrumentType_GetInConstructor(Clas_InstrumentType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiSet Clas_InstrumentType_GetInstruments(Clas_InstrumentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstruments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getInstruments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getInstruments' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiBoolean Clas_InstrumentType_GetIsDeleted(Clas_InstrumentType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @returns  Local object key
**/
ApiObject Clas_InstrumentType_GetLocalKey(Clas_InstrumentType self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetName(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getName' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetPackageName(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getPackageName' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetPackageShortName(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.InstrumentType.parent

link to parent 
object - synonym for classification
  @param  Clas_InstrumentType self
  @returns   the result
**/
Clas_Classification Clas_InstrumentType_GetParent(Clas_InstrumentType self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiSet Clas_InstrumentType_GetProcedures(Clas_InstrumentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getProcedures' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiString Clas_InstrumentType_GetQualifiedName(Clas_InstrumentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
Impl_MemopsRoot Clas_InstrumentType_GetRoot(Clas_InstrumentType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getRoot' is not callable");
  
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
  @param  Clas_InstrumentType self
  @returns   the result
**/
Impl_TopObject Clas_InstrumentType_GetTopObject(Clas_InstrumentType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.InstrumentType
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_InstrumentType Clas_InstrumentType_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewInstrumentType(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.InstrumentType
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_InstrumentType Clas_InstrumentType_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_InstrumentType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_InstrumentType_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  Impl_ApplicationData value
**/
void *Clas_InstrumentType_RemoveApplicationData(Clas_InstrumentType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Clas_ExperimentType value
**/
void *Clas_InstrumentType_RemoveExperimentType(Clas_InstrumentType self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'removeExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'removeExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Inst_Instrument value
**/
void *Clas_InstrumentType_RemoveInstrument(Clas_InstrumentType self, Inst_Instrument value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInstrument");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'removeInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'removeInstrument' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Prot_Procedure value
**/
void *Clas_InstrumentType_RemoveProcedure(Clas_InstrumentType self, Prot_Procedure value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProcedure");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'removeProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'removeProcedure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_InstrumentType_Set(Clas_InstrumentType self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_InstrumentType self
  @param  Acco_AccessObject value
**/
void *Clas_InstrumentType_SetAccess(Clas_InstrumentType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setAccess' is not callable");
  
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
  @param  Clas_InstrumentType self
  @param  ApiList values
**/
void *Clas_InstrumentType_SetApplicationData(Clas_InstrumentType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_InstrumentType self
  @param  ApiString value
**/
void *Clas_InstrumentType_SetDetails(Clas_InstrumentType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
void *Clas_InstrumentType_SetExperimentTypes(Clas_InstrumentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setExperimentTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
void *Clas_InstrumentType_SetInstruments(Clas_InstrumentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstruments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setInstruments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setInstruments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_InstrumentType self
  @param  ApiString value
**/
void *Clas_InstrumentType_SetName(Clas_InstrumentType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
void *Clas_InstrumentType_SetProcedures(Clas_InstrumentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'setProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'setProcedures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiList Clas_InstrumentType_SortedExperimentTypes(Clas_InstrumentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'sortedExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'sortedExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiList Clas_InstrumentType_SortedInstruments(Clas_InstrumentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstruments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'sortedInstruments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'sortedInstruments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
ApiList Clas_InstrumentType_SortedProcedures(Clas_InstrumentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProcedures");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.InstrumentType: cannot find method 'sortedProcedures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.InstrumentType: method 'sortedProcedures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
