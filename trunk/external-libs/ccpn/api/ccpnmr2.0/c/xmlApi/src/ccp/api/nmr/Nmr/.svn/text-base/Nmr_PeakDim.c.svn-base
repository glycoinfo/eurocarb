
#include "ccp.h"

/*
  Crosspeak dimension
  Note: There is no attribute 'linewidth', as the term is too ambiguous in practical use to allow a clear definition. Various aspects of line widths are covered by positionError, boxWidth, and decayRate.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDim_AddApplicationData(Nmr_PeakDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations calculated 
using PeakDim
  @param  Nmr_PeakDim self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_PeakDim_AddDataDerivation(Nmr_PeakDim self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'addDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'addDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_PeakDim_AddMeasurement(Nmr_PeakDim self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'addMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'addMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDim_CheckAllValid(Nmr_PeakDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDim_CheckValid(Nmr_PeakDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDim_FindAllApplicationData(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDim_FindAllApplicationData_keyval0(Nmr_PeakDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDim_FindAllApplicationData_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDim_FindAllApplicationData_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDim_FindAllApplicationData_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
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
ApiList Nmr_PeakDim_FindAllApplicationData_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllDataDerivations(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllDataDerivations_keyval0(Nmr_PeakDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllDataDerivations_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllDataDerivations_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllDataDerivations_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
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
ApiSet Nmr_PeakDim_FindAllDataDerivations_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMainPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllMainPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllMainPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs_keyval0(Nmr_PeakDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllMainPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllMainPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllMainPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllMainPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
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
ApiSet Nmr_PeakDim_FindAllMainPeakDimContribs_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllMainPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMeasurements(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMeasurements_keyval0(Nmr_PeakDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMeasurements_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMeasurements_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllMeasurements_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
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
ApiSet Nmr_PeakDim_FindAllMeasurements_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimComponents(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimComponents");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllPeakDimComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllPeakDimComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimComponents_keyval0(Nmr_PeakDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllPeakDimComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimComponents_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllPeakDimComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimComponents_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllPeakDimComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimComponents_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllPeakDimComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
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
ApiSet Nmr_PeakDim_FindAllPeakDimComponents_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllPeakDimComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimContribs(Nmr_PeakDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findAllPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findAllPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimContribs_keyval0(Nmr_PeakDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimContribs_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimContribs_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDim_FindAllPeakDimContribs_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
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
ApiSet Nmr_PeakDim_FindAllPeakDimContribs_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData(Nmr_PeakDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData_keyval0(Nmr_PeakDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
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
Impl_ApplicationData Nmr_PeakDim_FindFirstApplicationData_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation(Nmr_PeakDim self, ApiMap conditions)
{
  
  Nmr_AbstractDataDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstDataDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation_keyval0(Nmr_PeakDim self)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
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
Nmr_AbstractDataDerivation Nmr_PeakDim_FindFirstDataDerivation_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib(Nmr_PeakDim self, ApiMap conditions)
{
  
  Nmr_AbstractPeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMainPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstMainPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstMainPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib_keyval0(Nmr_PeakDim self)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstMainPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstMainPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstMainPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstMainPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
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
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstMainPeakDimContrib_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstMainPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement(Nmr_PeakDim self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement_keyval0(Nmr_PeakDim self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving 
from PeakDim.
  @param  Nmr_PeakDim self
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
Nmr_AbstractMeasurement Nmr_PeakDim_FindFirstMeasurement_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent(Nmr_PeakDim self, ApiMap conditions)
{
  
  Nmr_PeakDimComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstPeakDimComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent_keyval0(Nmr_PeakDim self)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstPeakDimComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstPeakDimComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstPeakDimComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstPeakDimComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
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
Nmr_PeakDimComponent Nmr_PeakDim_FindFirstPeakDimComponent_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstPeakDimComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib(Nmr_PeakDim self, ApiMap conditions)
{
  
  Nmr_AbstractPeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'findFirstPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'findFirstPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib_keyval0(Nmr_PeakDim self)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDim_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib_keyval1(Nmr_PeakDim self, char * key, ApiObject value)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDim_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib_keyval2(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDim_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib_keyval3(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDim_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
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
Nmr_AbstractPeakDimContrib Nmr_PeakDim_FindFirstPeakDimContrib_keyval4(Nmr_PeakDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDim_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakDim_Get(Nmr_PeakDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDim self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakDim_GetAccess(Nmr_PeakDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.annotation

Descriptive text string, 
designed for annotation of Xpks on graphics displays. Long annotations 
should be avoided.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiString Nmr_PeakDim_GetAnnotation(Nmr_PeakDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getAnnotation' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_GetApplicationData(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.boxWidth

The full width of the peak 
footprint in points, i.e. the width of the area that should be 
considered for integration, fitting, etc. It is not a very precise 
definition, but this is an input parameter rather than an output 
parameter.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetBoxWidth(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoxWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getBoxWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getBoxWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakDim Nmr_PeakDim_GetByKey(Nmr_PeakDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiString Nmr_PeakDim_GetClassName(Nmr_PeakDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations calculated 
using PeakDim
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiSet Nmr_PeakDim_GetDataDerivations(Nmr_PeakDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived link dataDim
  @param  Nmr_PeakDim self
  @returns   the result
**/
Nmr_AbstractDataDim Nmr_PeakDim_GetDataDim(Nmr_PeakDim self)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.dataDimRef

DataDimRef relevant to PeakDim - 
As there may be several alternative dataDimRefs for a given dimension, 
assigning this link may involve a measure of assignment.
  @param  Nmr_PeakDim self
  @returns   the result
**/
Nmr_DataDimRef Nmr_PeakDim_GetDataDimRef(Nmr_PeakDim self)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDataDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.decayRate

Fitted decay rate in the time 
domain (raw-data domain). If the raw data domain unit is seconds, the 
unit of decayRate is Hz. If an exponential decay is fitted to the 
function exp(-piRt), the decayrate is R. For a true Lorenzian decayRate 
is equal to the full-width-half-height.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetDecayRate(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDecayRate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDecayRate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDecayRate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.decayRateError

Uncertainty (standard 
deviation) of peak decayRate.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetDecayRateError(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDecayRateError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDecayRateError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDecayRateError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.dim

Dimension number, from 1 to nuber of 
dimensions - used as key to get the corresponding DataDim
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiInteger Nmr_PeakDim_GetDim(Nmr_PeakDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getDim' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_GetFieldNames(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PeakDim_GetFullKey(Nmr_PeakDim self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiBoolean Nmr_PeakDim_GetInConstructor(Nmr_PeakDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiBoolean Nmr_PeakDim_GetIsDeleted(Nmr_PeakDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.lineWidth

Full-width-half-height of 
peak/multiplet in this dimension. Unit is DataDimRef.unit (typically 
Hz). Do NOT use this attribute if your data are better described by one 
of the alternatives :
positionError - standard deviation of measured 
position
boxWidth - footprint width of peak for integration limits 
etc.
decayRate - fitted decay rate (in Hz)
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetLineWidth(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLineWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getLineWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @returns  Local object key
**/
ApiObject Nmr_PeakDim_GetLocalKey(Nmr_PeakDim self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link mainPeakDimContribs
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiSet Nmr_PeakDim_GetMainPeakDimContribs(Nmr_PeakDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMainPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getMainPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getMainPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiSet Nmr_PeakDim_GetMeasurements(Nmr_PeakDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.numAliasing

number of aliasings. The real 
peak position is defined as positionPoints + 
numAliasing*dataDimRef.dataDim.numPointsOri
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiInteger Nmr_PeakDim_GetNumAliasing(Nmr_PeakDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumAliasing");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getNumAliasing'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getNumAliasing' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiString Nmr_PeakDim_GetPackageName(Nmr_PeakDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiString Nmr_PeakDim_GetPackageShortName(Nmr_PeakDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.parent

link to parent object - synonym for 
peak
  @param  Nmr_PeakDim self
  @returns   the result
**/
Nmr_Peak Nmr_PeakDim_GetParent(Nmr_PeakDim self)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.peak

parent link
  @param  Nmr_PeakDim self
  @returns   the result
**/
Nmr_Peak Nmr_PeakDim_GetPeak(Nmr_PeakDim self)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiSet Nmr_PeakDim_GetPeakDimComponents(Nmr_PeakDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimComponents");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPeakDimComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPeakDimComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiSet Nmr_PeakDim_GetPeakDimContribs(Nmr_PeakDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.phase

Phase (in degrees) of peak
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetPhase(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhase");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPhase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPhase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.phaseError

Uncertasinty (standard 
deviation) of peak phase.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetPhaseError(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhaseError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPhaseError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPhaseError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.position

Peak position  in *point numbers*. 
Positions must be between 1.0 and npoints+1. The peak position in the 
appropriate unit (typically ppm), is given in the derived attribute 
'value'.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetPosition(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosition");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDim.positionError

Uncertainty (standard 
deviation) of peak position (in point numbers).
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetPositionError(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPositionError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getPositionError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getPositionError' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiString Nmr_PeakDim_GetQualifiedName(Nmr_PeakDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  special getter for ('semi-derived') attribute realValue
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetRealValue(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRealValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getRealValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getRealValue' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakDim_GetRoot(Nmr_PeakDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getRoot' is not callable");
  
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
  @param  Nmr_PeakDim self
  @returns   the result
**/
Impl_TopObject Nmr_PeakDim_GetTopObject(Nmr_PeakDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute value.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetValue(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute valueError
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiFloat Nmr_PeakDim_GetValueError(Nmr_PeakDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValueError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'getValueError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'getValueError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakDim
  @param  Nmr_Peak parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDim Nmr_PeakDim_Init(Nmr_Peak parent, ApiMap attrlinks)
{
  
  return Nmr_Peak_NewPeakDim(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakDim
  @param  Nmr_Peak parent
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_PeakDim Nmr_PeakDim_Init_reqd(Nmr_Peak parent, ApiInteger dim)
{
  
  Nmr_PeakDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_PeakDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDimComponent Nmr_PeakDim_NewPeakDimComponent(Nmr_PeakDim self, ApiMap attrlinks)
{
  
  Nmr_PeakDimComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'newPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'newPeakDimComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim self
  @returns  the new object
**/
Nmr_PeakDimComponent Nmr_PeakDim_NewPeakDimComponent_reqd(Nmr_PeakDim self)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PeakDim_NewPeakDimComponent(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDimContrib Nmr_PeakDim_NewPeakDimContrib(Nmr_PeakDim self, ApiMap attrlinks)
{
  
  Nmr_PeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'newPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'newPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDimContribN Nmr_PeakDim_NewPeakDimContribN(Nmr_PeakDim self, ApiMap attrlinks)
{
  
  Nmr_PeakDimContribN obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakDimContribN");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'newPeakDimContribN'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'newPeakDimContribN' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDim self
  @param  ApiSet peakContribs
  @param  ApiSet resonances
  @returns  the new object
**/
Nmr_PeakDimContribN Nmr_PeakDim_NewPeakDimContribN_reqd(Nmr_PeakDim self, ApiSet peakContribs, ApiSet resonances)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "peakContribs", peakContribs);
  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmr_PeakDim_NewPeakDimContribN(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDim self
  @param  ApiSet peakContribs
  @param  Nmr_Resonance resonance
  @returns  the new object
**/
Nmr_PeakDimContrib Nmr_PeakDim_NewPeakDimContrib_reqd(Nmr_PeakDim self, ApiSet peakContribs, Nmr_Resonance resonance)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "peakContribs", peakContribs);
  PyDict_SetItemString(attrlinks, "resonance", resonance);
  
  obj = Nmr_PeakDim_NewPeakDimContrib(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDim_RemoveApplicationData(Nmr_PeakDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_PeakDim_RemoveDataDerivation(Nmr_PeakDim self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'removeDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'removeDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_PeakDim_RemoveMeasurement(Nmr_PeakDim self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'removeMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'removeMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakDim
  @param  Nmr_PeakDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakDim_Set(Nmr_PeakDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDim self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakDim_SetAccess(Nmr_PeakDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.annotation

Descriptive text string, 
designed for annotation of Xpks on graphics displays. Long annotations 
should be avoided.
  @param  Nmr_PeakDim self
  @param  ApiString value
**/
void *Nmr_PeakDim_SetAnnotation(Nmr_PeakDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setAnnotation' is not callable");
  
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
  @param  Nmr_PeakDim self
  @param  ApiList values
**/
void *Nmr_PeakDim_SetApplicationData(Nmr_PeakDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.boxWidth

The full width of the peak 
footprint in points, i.e. the width of the area that should be 
considered for integration, fitting, etc. It is not a very precise 
definition, but this is an input parameter rather than an output 
parameter.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetBoxWidth(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoxWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setBoxWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setBoxWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations calculated 
using PeakDim
  @param  Nmr_PeakDim self
  @param  ApiSet values
**/
void *Nmr_PeakDim_SetDataDerivations(Nmr_PeakDim self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setDataDerivations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.dataDimRef

DataDimRef relevant to PeakDim - 
As there may be several alternative dataDimRefs for a given dimension, 
assigning this link may involve a measure of assignment.
  @param  Nmr_PeakDim self
  @param  Nmr_DataDimRef value
**/
void *Nmr_PeakDim_SetDataDimRef(Nmr_PeakDim self, Nmr_DataDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setDataDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.decayRate

Fitted decay rate in the time 
domain (raw-data domain). If the raw data domain unit is seconds, the 
unit of decayRate is Hz. If an exponential decay is fitted to the 
function exp(-piRt), the decayrate is R. For a true Lorenzian decayRate 
is equal to the full-width-half-height.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetDecayRate(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDecayRate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setDecayRate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setDecayRate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.decayRateError

Uncertainty (standard 
deviation) of peak decayRate.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetDecayRateError(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDecayRateError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setDecayRateError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setDecayRateError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.dim

Dimension number, from 1 to nuber of 
dimensions - used as key to get the corresponding DataDim
  @param  Nmr_PeakDim self
  @param  ApiInteger value
**/
void *Nmr_PeakDim_SetDim(Nmr_PeakDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.lineWidth

Full-width-half-height of 
peak/multiplet in this dimension. Unit is DataDimRef.unit (typically 
Hz). Do NOT use this attribute if your data are better described by one 
of the alternatives :
positionError - standard deviation of measured 
position
boxWidth - footprint width of peak for integration limits 
etc.
decayRate - fitted decay rate (in Hz)
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetLineWidth(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLineWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setLineWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @param  ApiSet values
**/
void *Nmr_PeakDim_SetMeasurements(Nmr_PeakDim self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setMeasurements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.numAliasing

number of aliasings. The real 
peak position is defined as positionPoints + 
numAliasing*dataDimRef.dataDim.numPointsOri
  @param  Nmr_PeakDim self
  @param  ApiInteger value
**/
void *Nmr_PeakDim_SetNumAliasing(Nmr_PeakDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumAliasing");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setNumAliasing'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setNumAliasing' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.phase

Phase (in degrees) of peak
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetPhase(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhase");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setPhase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setPhase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.phaseError

Uncertasinty (standard 
deviation) of peak phase.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetPhaseError(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhaseError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setPhaseError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setPhaseError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.position

Peak position  in *point numbers*. 
Positions must be between 1.0 and npoints+1. The peak position in the 
appropriate unit (typically ppm), is given in the derived attribute 
'value'.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetPosition(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPosition");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.positionError

Uncertainty (standard 
deviation) of peak position (in point numbers).
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetPositionError(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPositionError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setPositionError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setPositionError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDim.realValue

Peak position in units of 
ExpDimRef.unit, corresponding to the main DataDimRef.Semi-derived value, 
as it were. Can be set explicitly (case 1). If not set explicitly and 
there are no PeakDimComponents (case 2) self.value is automatically 
returned. If not set and there are PeakDimComponents, None is returned. 
Peak.realValue always gives the best value for the quantity described in 
the main DataDimRef. The organisation of this parameter lets you store 
values for the central chemical shift of multiplets (e.g. DQF-COSY), 
while you still get the peak value in the simple case.
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetRealValue(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRealValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setRealValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setRealValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived attribute value
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetValue(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived attribute valueError
  @param  Nmr_PeakDim self
  @param  ApiFloat value
**/
void *Nmr_PeakDim_SetValueError(Nmr_PeakDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValueError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'setValueError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'setValueError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDim.dataDerivations

DataDerivations 
calculated using PeakDim
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_SortedDataDerivations(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'sortedDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'sortedDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.PeakDim.mainPeakDimContribs

AbstractPeakDimContribs that 
refer to the main assignment component of the peakDim, rather than to 
any explicit PeakDimComponent.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_SortedMainPeakDimContribs(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMainPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'sortedMainPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'sortedMainPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDim.measurements

Measurements deriving from 
PeakDim.
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_SortedMeasurements(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'sortedMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDim.peakDimComponents

child link to class 
PeakDimComponent
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_SortedPeakDimComponents(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimComponents");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'sortedPeakDimComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'sortedPeakDimComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDim.peakDimContribs

child link to class 
AbstractPeakDimContrib
  @param  Nmr_PeakDim self
  @returns   the result
**/
ApiList Nmr_PeakDim_SortedPeakDimContribs(Nmr_PeakDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDim: cannot find method 'sortedPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDim: method 'sortedPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
