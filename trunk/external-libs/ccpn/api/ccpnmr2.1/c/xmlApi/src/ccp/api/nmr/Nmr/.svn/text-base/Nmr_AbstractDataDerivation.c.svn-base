
#include "ccp.h"

/*
  Data Derivation that produces one or more derived data items in a single fitting.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractDataDerivation_AddApplicationData(Nmr_AbstractDataDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_AbstractDataDerivation_AddInputMeasurement(Nmr_AbstractDataDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'addInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'addInputMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_AbstractDataDerivation_AddPeak(Nmr_AbstractDataDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_AbstractDataDerivation_AddPeakDim(Nmr_AbstractDataDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'addPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'addPeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData_keyval0(Nmr_AbstractDataDerivation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
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
ApiList Nmr_AbstractDataDerivation_FindAllApplicationData_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData_keyval0(Nmr_AbstractDataDerivation self)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
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
ApiSet Nmr_AbstractDataDerivation_FindAllDerivedData_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findAllInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findAllInputMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements_keyval0(Nmr_AbstractDataDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
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
ApiSet Nmr_AbstractDataDerivation_FindAllInputMeasurements_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findAllPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findAllPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims_keyval0(Nmr_AbstractDataDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
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
ApiSet Nmr_AbstractDataDerivation_FindAllPeakDims_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks_keyval0(Nmr_AbstractDataDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
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
ApiSet Nmr_AbstractDataDerivation_FindAllPeaks_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData_keyval0(Nmr_AbstractDataDerivation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
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
Impl_ApplicationData Nmr_AbstractDataDerivation_FindFirstApplicationData_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData_keyval0(Nmr_AbstractDataDerivation self)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link 
to class DerivedData
  @param  Nmr_AbstractDataDerivation self
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
Nmr_DerivedData Nmr_AbstractDataDerivation_FindFirstDerivedData_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findFirstInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findFirstInputMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement_keyval0(Nmr_AbstractDataDerivation self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
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
Nmr_AbstractMeasurement Nmr_AbstractDataDerivation_FindFirstInputMeasurement_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim(Nmr_AbstractDataDerivation self, ApiMap conditions)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'findFirstPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'findFirstPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim_keyval0(Nmr_AbstractDataDerivation self)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
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
Nmr_PeakDim Nmr_AbstractDataDerivation_FindFirstPeakDim_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak_keyval0(Nmr_AbstractDataDerivation self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak_keyval1(Nmr_AbstractDataDerivation self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak_keyval2(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak_keyval3(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
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
Nmr_Peak Nmr_AbstractDataDerivation_FindFirstPeak_keyval4(Nmr_AbstractDataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractDataDerivation_GetAccess(Nmr_AbstractDataDerivation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractDataDerivation_GetActiveAccess(Nmr_AbstractDataDerivation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_GetApplicationData(Nmr_AbstractDataDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.AbstractDataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_AbstractDataDerivation Nmr_AbstractDataDerivation_GetByKey(Nmr_AbstractDataDerivation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_AbstractDataDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getByKey' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiString Nmr_AbstractDataDerivation_GetClassName(Nmr_AbstractDataDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link to 
class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiSet Nmr_AbstractDataDerivation_GetDerivedData(Nmr_AbstractDataDerivation self)
{
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiString Nmr_AbstractDataDerivation_GetDetails(Nmr_AbstractDataDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getDetails' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_GetFieldNames(Nmr_AbstractDataDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.AbstractDataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_AbstractDataDerivation_GetFullKey(Nmr_AbstractDataDerivation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getFullKey' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiBoolean Nmr_AbstractDataDerivation_GetInConstructor(Nmr_AbstractDataDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiSet Nmr_AbstractDataDerivation_GetInputMeasurements(Nmr_AbstractDataDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getInputMeasurements' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiBoolean Nmr_AbstractDataDerivation_GetIsDeleted(Nmr_AbstractDataDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.AbstractDataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns  Local object key
**/
ApiObject Nmr_AbstractDataDerivation_GetLocalKey(Nmr_AbstractDataDerivation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Meth_Method Nmr_AbstractDataDerivation_GetMethod(Nmr_AbstractDataDerivation self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getMethod' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiString Nmr_AbstractDataDerivation_GetPackageName(Nmr_AbstractDataDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getPackageName' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiString Nmr_AbstractDataDerivation_GetPackageShortName(Nmr_AbstractDataDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.parentList

parent link
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Nmr_DerivedDataList Nmr_AbstractDataDerivation_GetParentList(Nmr_AbstractDataDerivation self)
{
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiSet Nmr_AbstractDataDerivation_GetPeakDims(Nmr_AbstractDataDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiSet Nmr_AbstractDataDerivation_GetPeaks(Nmr_AbstractDataDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getPeaks' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiString Nmr_AbstractDataDerivation_GetQualifiedName(Nmr_AbstractDataDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Impl_MemopsRoot Nmr_AbstractDataDerivation_GetRoot(Nmr_AbstractDataDerivation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiInteger Nmr_AbstractDataDerivation_GetSerial(Nmr_AbstractDataDerivation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getSerial' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
Impl_TopObject Nmr_AbstractDataDerivation_GetTopObject(Nmr_AbstractDataDerivation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractDataDerivation_RemoveApplicationData(Nmr_AbstractDataDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_AbstractDataDerivation_RemoveInputMeasurement(Nmr_AbstractDataDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'removeInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'removeInputMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_AbstractDataDerivation_RemovePeak(Nmr_AbstractDataDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_AbstractDataDerivation_RemovePeakDim(Nmr_AbstractDataDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'removePeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'removePeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractDataDerivation self
  @param  Acco_AccessObject value
**/
void *Nmr_AbstractDataDerivation_SetAccess(Nmr_AbstractDataDerivation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDerivation self
  @param  ApiList values
**/
void *Nmr_AbstractDataDerivation_SetApplicationData(Nmr_AbstractDataDerivation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_AbstractDataDerivation self
  @param  ApiString value
**/
void *Nmr_AbstractDataDerivation_SetDetails(Nmr_AbstractDataDerivation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @param  ApiSet values
**/
void *Nmr_AbstractDataDerivation_SetInputMeasurements(Nmr_AbstractDataDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setInputMeasurements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_AbstractDataDerivation self
  @param  Meth_Method value
**/
void *Nmr_AbstractDataDerivation_SetMethod(Nmr_AbstractDataDerivation self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiSet values
**/
void *Nmr_AbstractDataDerivation_SetPeakDims(Nmr_AbstractDataDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setPeakDims' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @param  ApiSet values
**/
void *Nmr_AbstractDataDerivation_SetPeaks(Nmr_AbstractDataDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractDataDerivation self
  @param  ApiInteger value
**/
void *Nmr_AbstractDataDerivation_SetSerial(Nmr_AbstractDataDerivation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.derivedData

child link to 
class DerivedData
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_SortedDerivedData(Nmr_AbstractDataDerivation self)
{
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_SortedInputMeasurements(Nmr_AbstractDataDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'sortedInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'sortedInputMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_SortedPeakDims(Nmr_AbstractDataDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'sortedPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'sortedPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_AbstractDataDerivation self
  @returns   the result
**/
ApiList Nmr_AbstractDataDerivation_SortedPeaks(Nmr_AbstractDataDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDerivation: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
