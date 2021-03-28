
#include "ccp.h"

/*
  Crosspeak at a specific position in a specific spectrum.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  Impl_ApplicationData value
**/
void *Nmr_Peak_AddApplicationData(Nmr_Peak self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Peak.componentNumbers

Numbers for the Components 
where the peak appears. Only relevant for DataSources that are composed 
of components ShapeMatrix data). If empty corresponds to 'unknown'.
  @param  Nmr_Peak self
  @param  ApiInteger value
**/
void *Nmr_Peak_AddComponentNumber(Nmr_Peak self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addComponentNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addComponentNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addComponentNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_Peak_AddDataDerivation(Nmr_Peak self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Peak.measurements

Measurements derived from Peak.
  @param  Nmr_Peak self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_Peak_AddMeasurement(Nmr_Peak self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  Nmr_PeakCluster value
**/
void *Nmr_Peak_AddPeakCluster(Nmr_Peak self, Nmr_PeakCluster value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakCluster");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addPeakCluster'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addPeakCluster' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  Vald_PeakValidation value
**/
void *Nmr_Peak_AddPeakValidation(Nmr_Peak self, Vald_PeakValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'addPeakValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'addPeakValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  ApiBoolean complete
**/
void *Nmr_Peak_CheckAllValid(Nmr_Peak self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  ApiBoolean complete
**/
void *Nmr_Peak_CheckValid(Nmr_Peak self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'checkValid' is not callable");
  
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
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Peak_FindAllApplicationData(Nmr_Peak self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Peak_FindAllApplicationData_keyval0(Nmr_Peak self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Peak_FindAllApplicationData_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Peak_FindAllApplicationData_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Peak_FindAllApplicationData_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
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
ApiList Nmr_Peak_FindAllApplicationData_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllDataDerivations(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllDataDerivations_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllDataDerivations_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllDataDerivations_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllDataDerivations_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllDataDerivations_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllMeasurements(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllMeasurements_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllMeasurements_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllMeasurements_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllMeasurements_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllMeasurements_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakClusters(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllPeakClusters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakClusters_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakClusters_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakClusters_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakClusters_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllPeakClusters_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakContribs(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakContribs_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakContribs_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakContribs_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakContribs_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllPeakContribs_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakDims(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakDims_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakDims_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakDims_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakDims_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllPeakDims_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakIntensities(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakIntensities_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakIntensities_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakIntensities_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakIntensities_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllPeakIntensities_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakValidations(Nmr_Peak self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findAllPeakValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findAllPeakValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakValidations_keyval0(Nmr_Peak self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindAllPeakValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakValidations_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindAllPeakValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakValidations_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindAllPeakValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Peak_FindAllPeakValidations_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindAllPeakValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
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
ApiSet Nmr_Peak_FindAllPeakValidations_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindAllPeakValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData(Nmr_Peak self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData_keyval0(Nmr_Peak self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
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
Impl_ApplicationData Nmr_Peak_FindFirstApplicationData_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_AbstractDataDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstDataDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation_keyval0(Nmr_Peak self)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation 
calculated using Peak
  @param  Nmr_Peak self
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
Nmr_AbstractDataDerivation Nmr_Peak_FindFirstDataDerivation_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement_keyval0(Nmr_Peak self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
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
Nmr_AbstractMeasurement Nmr_Peak_FindFirstMeasurement_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_PeakCluster obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakCluster");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstPeakCluster'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstPeakCluster' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster_keyval0(Nmr_Peak self)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
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
Nmr_PeakCluster Nmr_Peak_FindFirstPeakCluster_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_PeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstPeakContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib_keyval0(Nmr_Peak self)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
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
Nmr_PeakContrib Nmr_Peak_FindFirstPeakContrib_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim_keyval0(Nmr_Peak self)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
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
Nmr_PeakDim Nmr_Peak_FindFirstPeakDim_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity(Nmr_Peak self, ApiMap conditions)
{
  
  Nmr_PeakIntensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakIntensity");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstPeakIntensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstPeakIntensity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity_keyval0(Nmr_Peak self)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
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
Nmr_PeakIntensity Nmr_Peak_FindFirstPeakIntensity_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation(Nmr_Peak self, ApiMap conditions)
{
  
  Vald_PeakValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'findFirstPeakValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'findFirstPeakValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation_keyval0(Nmr_Peak self)
{
  
  Vald_PeakValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Peak_FindFirstPeakValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation_keyval1(Nmr_Peak self, char * key, ApiObject value)
{
  
  Vald_PeakValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Peak_FindFirstPeakValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation_keyval2(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_PeakValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Peak_FindFirstPeakValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation_keyval3(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_PeakValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Peak_FindFirstPeakValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
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
Vald_PeakValidation Nmr_Peak_FindFirstPeakValidation_keyval4(Nmr_Peak self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_PeakValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Peak_FindFirstPeakValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_Peak_Get(Nmr_Peak self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Peak self
  @returns   the result
**/
Acco_AccessObject Nmr_Peak_GetAccess(Nmr_Peak self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.annotation

Descriptive text string, intended 
for annotation of Peaks on graphics displays. Long comments belong in 
the (non-displayed) details attribute.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetAnnotation(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getAnnotation' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_GetApplicationData(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_Peak Nmr_Peak_GetByKey(Nmr_Peak self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getByKey' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetClassName(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.componentNumbers

Numbers for the Components 
where the peak appears. Only relevant for DataSources that are composed 
of components ShapeMatrix data). If empty corresponds to 'unknown'.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetComponentNumbers(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentNumbers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getComponentNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getComponentNumbers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.constraintWeight

Weighting factor for 
constraint arising from peak. Serves to increase or decrease importance 
attached to peak, without having to repeat the assignment for every new 
constraint list generated. In the simple case this number will be used 
for Constraint.weight
  @param  Nmr_Peak self
  @returns   the result
**/
ApiFloat Nmr_Peak_GetConstraintWeight(Nmr_Peak self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getConstraintWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getConstraintWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetDataDerivations(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetDetails(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getDetails' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_GetFieldNames(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.figOfMerit

Figure of merit for peak, 
describing  its quality (i.e. the likelihood that it is a peak rather 
than noise). Must be a number between zero and one (inclusive).
  @param  Nmr_Peak self
  @returns   the result
**/
ApiFloat Nmr_Peak_GetFigOfMerit(Nmr_Peak self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.fitMethod

Peak fitting method for this 
particular peak.
  @param  Nmr_Peak self
  @returns   the result
**/
Meth_Method Nmr_Peak_GetFitMethod(Nmr_Peak self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFitMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getFitMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getFitMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_Peak_GetFullKey(Nmr_Peak self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getFullKey' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiBoolean Nmr_Peak_GetInConstructor(Nmr_Peak self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiBoolean Nmr_Peak_GetIsDeleted(Nmr_Peak self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @returns  Local object key
**/
ApiObject Nmr_Peak_GetLocalKey(Nmr_Peak self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.measurements

Measurements derived from Peak.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetMeasurements(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getMeasurements' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetPackageName(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPackageName' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetPackageShortName(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.parent

link to parent object - synonym for 
peakList
  @param  Nmr_Peak self
  @returns   the result
**/
Nmr_PeakList Nmr_Peak_GetParent(Nmr_Peak self)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetPeakClusters(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakClusters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakContribs

child link to class PeakContrib
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetPeakContribs(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetPeakDims(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetPeakIntensities(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakList

parent link
  @param  Nmr_Peak self
  @returns   the result
**/
Nmr_PeakList Nmr_Peak_GetPeakList(Nmr_Peak self)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @returns   the result
**/
ApiSet Nmr_Peak_GetPeakValidations(Nmr_Peak self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getPeakValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getPeakValidations' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
ApiString Nmr_Peak_GetQualifiedName(Nmr_Peak self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
Impl_MemopsRoot Nmr_Peak_GetRoot(Nmr_Peak self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Peak.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Peak self
  @returns   the result
**/
ApiInteger Nmr_Peak_GetSerial(Nmr_Peak self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getSerial' is not callable");
  
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
  @param  Nmr_Peak self
  @returns   the result
**/
Impl_TopObject Nmr_Peak_GetTopObject(Nmr_Peak self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Peak Nmr_Peak_Init(Nmr_PeakList parent, ApiMap attrlinks)
{
  
  return Nmr_PeakList_NewPeak(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList parent
  @returns  the new object
**/
Nmr_Peak Nmr_Peak_Init_reqd(Nmr_PeakList parent)
{
  
  Nmr_Peak  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_Peak_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakContrib Nmr_Peak_NewPeakContrib(Nmr_Peak self, ApiMap attrlinks)
{
  
  Nmr_PeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'newPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'newPeakContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak self
  @returns  the new object
**/
Nmr_PeakContrib Nmr_Peak_NewPeakContrib_reqd(Nmr_Peak self)
{
  
  Nmr_PeakContrib  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_Peak_NewPeakContrib(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDim
  @param  Nmr_Peak self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDim Nmr_Peak_NewPeakDim(Nmr_Peak self, ApiMap attrlinks)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'newPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'newPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakDim
  @param  Nmr_Peak self
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_PeakDim Nmr_Peak_NewPeakDim_reqd(Nmr_Peak self, ApiInteger dim)
{
  
  Nmr_PeakDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_Peak_NewPeakDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakIntensity
  @param  Nmr_Peak self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakIntensity Nmr_Peak_NewPeakIntensity(Nmr_Peak self, ApiMap attrlinks)
{
  
  Nmr_PeakIntensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakIntensity");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'newPeakIntensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'newPeakIntensity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakIntensity
  @param  Nmr_Peak self
  @param  Meth_Method method
  @returns  the new object
**/
Nmr_PeakIntensity Nmr_Peak_NewPeakIntensity_reqd(Nmr_Peak self, Meth_Method method)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "method", method);
  
  obj = Nmr_Peak_NewPeakIntensity(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Peak self
  @param  Impl_ApplicationData value
**/
void *Nmr_Peak_RemoveApplicationData(Nmr_Peak self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Peak.componentNumbers

Numbers for the Components 
where the peak appears. Only relevant for DataSources that are composed 
of components ShapeMatrix data). If empty corresponds to 'unknown'.
  @param  Nmr_Peak self
  @param  ApiInteger value
**/
void *Nmr_Peak_RemoveComponentNumber(Nmr_Peak self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeComponentNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removeComponentNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removeComponentNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_Peak_RemoveDataDerivation(Nmr_Peak self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removeDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removeDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_Peak_RemoveMeasurement(Nmr_Peak self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removeMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removeMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  Nmr_PeakCluster value
**/
void *Nmr_Peak_RemovePeakCluster(Nmr_Peak self, Nmr_PeakCluster value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakCluster");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removePeakCluster'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removePeakCluster' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  Vald_PeakValidation value
**/
void *Nmr_Peak_RemovePeakValidation(Nmr_Peak self, Vald_PeakValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'removePeakValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'removePeakValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.Peak
  @param  Nmr_Peak self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_Peak_Set(Nmr_Peak self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Peak self
  @param  Acco_AccessObject value
**/
void *Nmr_Peak_SetAccess(Nmr_Peak self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.annotation

Descriptive text string, intended 
for annotation of Peaks on graphics displays. Long comments belong in 
the (non-displayed) details attribute.
  @param  Nmr_Peak self
  @param  ApiString value
**/
void *Nmr_Peak_SetAnnotation(Nmr_Peak self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setAnnotation' is not callable");
  
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
  @param  Nmr_Peak self
  @param  ApiList values
**/
void *Nmr_Peak_SetApplicationData(Nmr_Peak self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.componentNumbers

Numbers for the Components 
where the peak appears. Only relevant for DataSources that are composed 
of components ShapeMatrix data). If empty corresponds to 'unknown'.
  @param  Nmr_Peak self
  @param  ApiSet values
**/
void *Nmr_Peak_SetComponentNumbers(Nmr_Peak self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComponentNumbers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setComponentNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setComponentNumbers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.constraintWeight

Weighting factor for 
constraint arising from peak. Serves to increase or decrease importance 
attached to peak, without having to repeat the assignment for every new 
constraint list generated. In the simple case this number will be used 
for Constraint.weight
  @param  Nmr_Peak self
  @param  ApiFloat value
**/
void *Nmr_Peak_SetConstraintWeight(Nmr_Peak self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setConstraintWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setConstraintWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @param  ApiSet values
**/
void *Nmr_Peak_SetDataDerivations(Nmr_Peak self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setDataDerivations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Peak self
  @param  ApiString value
**/
void *Nmr_Peak_SetDetails(Nmr_Peak self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.figOfMerit

Figure of merit for peak, 
describing  its quality (i.e. the likelihood that it is a peak rather 
than noise). Must be a number between zero and one (inclusive).
  @param  Nmr_Peak self
  @param  ApiFloat value
**/
void *Nmr_Peak_SetFigOfMerit(Nmr_Peak self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.fitMethod

Peak fitting method for this 
particular peak.
  @param  Nmr_Peak self
  @param  Meth_Method value
**/
void *Nmr_Peak_SetFitMethod(Nmr_Peak self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFitMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setFitMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setFitMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.measurements

Measurements derived from Peak.
  @param  Nmr_Peak self
  @param  ApiSet values
**/
void *Nmr_Peak_SetMeasurements(Nmr_Peak self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setMeasurements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @param  ApiSet values
**/
void *Nmr_Peak_SetPeakClusters(Nmr_Peak self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setPeakClusters' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @param  ApiSet values
**/
void *Nmr_Peak_SetPeakValidations(Nmr_Peak self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setPeakValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setPeakValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Peak.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Peak self
  @param  ApiInteger value
**/
void *Nmr_Peak_SetSerial(Nmr_Peak self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.dataDerivations

DataDerivation calculated 
using Peak
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedDataDerivations(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.measurements

Measurements derived from 
Peak.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedMeasurements(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.peakClusters

PeakClusters to which peak 
belongs. A Peak can belong only to one cluster of a given type. NBNB TBD 
A constraint must be added to enforce this constraint.
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedPeakClusters(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedPeakClusters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.peakContribs

child link to class 
PeakContrib
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedPeakContribs(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.peakDims

child link to class PeakDim
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedPeakDims(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.peakIntensities

child link to class 
PeakIntensity
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedPeakIntensities(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Peak.peakValidations

Validation results that 
include Peak
  @param  Nmr_Peak self
  @returns   the result
**/
ApiList Nmr_Peak_SortedPeakValidations(Nmr_Peak self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Peak: cannot find method 'sortedPeakValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Peak: method 'sortedPeakValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
