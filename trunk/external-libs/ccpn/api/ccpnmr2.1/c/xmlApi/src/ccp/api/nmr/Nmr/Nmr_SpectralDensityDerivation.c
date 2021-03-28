
#include "ccp.h"

/*
  Derivation for set of spectral densities.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_SpectralDensityDerivation_AddApplicationData(Nmr_SpectralDensityDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_SpectralDensityDerivation_AddInputMeasurement(Nmr_SpectralDensityDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'addInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'addInputMeasurement' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_SpectralDensityDerivation_AddPeak(Nmr_SpectralDensityDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'addPeak' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_SpectralDensityDerivation_AddPeakDim(Nmr_SpectralDensityDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'addPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'addPeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiBoolean complete
**/
void *Nmr_SpectralDensityDerivation_CheckAllValid(Nmr_SpectralDensityDerivation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiBoolean complete
**/
void *Nmr_SpectralDensityDerivation_CheckValid(Nmr_SpectralDensityDerivation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'checkValid' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
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
ApiList Nmr_SpectralDensityDerivation_FindAllApplicationData_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findAllDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findAllDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
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
ApiSet Nmr_SpectralDensityDerivation_FindAllDerivedData_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findAllInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findAllInputMeasurements' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
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
ApiSet Nmr_SpectralDensityDerivation_FindAllInputMeasurements_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findAllPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findAllPeakDims' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
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
ApiSet Nmr_SpectralDensityDerivation_FindAllPeakDims_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findAllPeaks' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
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
ApiSet Nmr_SpectralDensityDerivation_FindAllPeaks_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
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
Impl_ApplicationData Nmr_SpectralDensityDerivation_FindFirstApplicationData_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  Nmr_SpectralDensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findFirstDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findFirstDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child 
link to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
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
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_FindFirstDerivedData_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findFirstInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findFirstInputMeasurement' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
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
Nmr_AbstractMeasurement Nmr_SpectralDensityDerivation_FindFirstInputMeasurement_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findFirstPeak' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim(Nmr_SpectralDensityDerivation self, ApiMap conditions)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'findFirstPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'findFirstPeakDim' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
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
Nmr_PeakDim Nmr_SpectralDensityDerivation_FindFirstPeakDim_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak_keyval0(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak_keyval1(Nmr_SpectralDensityDerivation self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak_keyval2(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak_keyval3(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
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
Nmr_Peak Nmr_SpectralDensityDerivation_FindFirstPeak_keyval4(Nmr_SpectralDensityDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SpectralDensityDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_SpectralDensityDerivation_Get(Nmr_SpectralDensityDerivation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Acco_AccessObject Nmr_SpectralDensityDerivation_GetAccess(Nmr_SpectralDensityDerivation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getAccess' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Acco_AccessObject Nmr_SpectralDensityDerivation_GetActiveAccess(Nmr_SpectralDensityDerivation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_GetApplicationData(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_SpectralDensityDerivation Nmr_SpectralDensityDerivation_GetByKey(Nmr_SpectralDensityDerivation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_SpectralDensityDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getByKey' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiString Nmr_SpectralDensityDerivation_GetClassName(Nmr_SpectralDensityDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child link to 
class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiSet Nmr_SpectralDensityDerivation_GetDerivedData(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiString Nmr_SpectralDensityDerivation_GetDetails(Nmr_SpectralDensityDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getDetails' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_GetFieldNames(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_SpectralDensityDerivation_GetFullKey(Nmr_SpectralDensityDerivation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getFullKey' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiBoolean Nmr_SpectralDensityDerivation_GetInConstructor(Nmr_SpectralDensityDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiSet Nmr_SpectralDensityDerivation_GetInputMeasurements(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getInputMeasurements' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiBoolean Nmr_SpectralDensityDerivation_GetIsDeleted(Nmr_SpectralDensityDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @returns  Local object key
**/
ApiObject Nmr_SpectralDensityDerivation_GetLocalKey(Nmr_SpectralDensityDerivation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Meth_Method Nmr_SpectralDensityDerivation_GetMethod(Nmr_SpectralDensityDerivation self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getMethod' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiString Nmr_SpectralDensityDerivation_GetPackageName(Nmr_SpectralDensityDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getPackageName' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiString Nmr_SpectralDensityDerivation_GetPackageShortName(Nmr_SpectralDensityDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SpectralDensityDerivation.parent

link to parent 
object - synonym for parentList
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Nmr_SpectralDensityList Nmr_SpectralDensityDerivation_GetParent(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_SpectralDensityList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SpectralDensityDerivation.parentList

parent link
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Nmr_SpectralDensityList Nmr_SpectralDensityDerivation_GetParentList(Nmr_SpectralDensityDerivation self)
{
  
  Nmr_SpectralDensityList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParentList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getParentList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getParentList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiSet Nmr_SpectralDensityDerivation_GetPeakDims(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getPeakDims' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiSet Nmr_SpectralDensityDerivation_GetPeaks(Nmr_SpectralDensityDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getPeaks' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiString Nmr_SpectralDensityDerivation_GetQualifiedName(Nmr_SpectralDensityDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Impl_MemopsRoot Nmr_SpectralDensityDerivation_GetRoot(Nmr_SpectralDensityDerivation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getRoot' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiInteger Nmr_SpectralDensityDerivation_GetSerial(Nmr_SpectralDensityDerivation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getSerial' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
Impl_TopObject Nmr_SpectralDensityDerivation_GetTopObject(Nmr_SpectralDensityDerivation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SpectralDensityDerivation Nmr_SpectralDensityDerivation_Init(Nmr_SpectralDensityList parent, ApiMap attrlinks)
{
  
  return Nmr_SpectralDensityList_NewSpectralDensityDerivation(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityList parent
  @returns  the new object
**/
Nmr_SpectralDensityDerivation Nmr_SpectralDensityDerivation_Init_reqd(Nmr_SpectralDensityList parent)
{
  
  Nmr_SpectralDensityDerivation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_SpectralDensityDerivation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_NewSpectralDensity(Nmr_SpectralDensityDerivation self, ApiMap attrlinks)
{
  
  Nmr_SpectralDensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectralDensity");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'newSpectralDensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'newSpectralDensity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiSet resonances
  @returns  the new object
**/
Nmr_SpectralDensity Nmr_SpectralDensityDerivation_NewSpectralDensity_reqd(Nmr_SpectralDensityDerivation self, ApiSet resonances)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmr_SpectralDensityDerivation_NewSpectralDensity(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_SpectralDensityDerivation_RemoveApplicationData(Nmr_SpectralDensityDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_SpectralDensityDerivation_RemoveInputMeasurement(Nmr_SpectralDensityDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'removeInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'removeInputMeasurement' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_SpectralDensityDerivation_RemovePeak(Nmr_SpectralDensityDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'removePeak' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_SpectralDensityDerivation_RemovePeakDim(Nmr_SpectralDensityDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'removePeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'removePeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_SpectralDensityDerivation_Set(Nmr_SpectralDensityDerivation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SpectralDensityDerivation self
  @param  Acco_AccessObject value
**/
void *Nmr_SpectralDensityDerivation_SetAccess(Nmr_SpectralDensityDerivation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setAccess' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiList values
**/
void *Nmr_SpectralDensityDerivation_SetApplicationData(Nmr_SpectralDensityDerivation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiString value
**/
void *Nmr_SpectralDensityDerivation_SetDetails(Nmr_SpectralDensityDerivation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setDetails' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiSet values
**/
void *Nmr_SpectralDensityDerivation_SetInputMeasurements(Nmr_SpectralDensityDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setInputMeasurements' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  Meth_Method value
**/
void *Nmr_SpectralDensityDerivation_SetMethod(Nmr_SpectralDensityDerivation self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setMethod' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiSet values
**/
void *Nmr_SpectralDensityDerivation_SetPeakDims(Nmr_SpectralDensityDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setPeakDims' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiSet values
**/
void *Nmr_SpectralDensityDerivation_SetPeaks(Nmr_SpectralDensityDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setPeaks' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @param  ApiInteger value
**/
void *Nmr_SpectralDensityDerivation_SetSerial(Nmr_SpectralDensityDerivation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.SpectralDensityDerivation.derivedData

child link 
to class SpectralDensity
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_SortedDerivedData(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'sortedDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'sortedDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_SortedInputMeasurements(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'sortedInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'sortedInputMeasurements' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_SortedPeakDims(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'sortedPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'sortedPeakDims' is not callable");
  
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
  @param  Nmr_SpectralDensityDerivation self
  @returns   the result
**/
ApiList Nmr_SpectralDensityDerivation_SortedPeaks(Nmr_SpectralDensityDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SpectralDensityDerivation: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
