
#include "ccp.h"

/*
  Chemical shift anisotropy measurement.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftAnisotropy_AddApplicationData(Nmr_ShiftAnisotropy self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_ShiftAnisotropy_AddDataDerivation(Nmr_ShiftAnisotropy self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'addDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'addDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  Vald_NmrMeasurementValidation value
**/
void *Nmr_ShiftAnisotropy_AddNmrMeasurementValidation(Nmr_ShiftAnisotropy self, Vald_NmrMeasurementValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrMeasurementValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'addNmrMeasurementValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'addNmrMeasurementValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_Peak value
**/
void *Nmr_ShiftAnisotropy_AddPeak(Nmr_ShiftAnisotropy self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_PeakDim value
**/
void *Nmr_ShiftAnisotropy_AddPeakDim(Nmr_ShiftAnisotropy self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'addPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'addPeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftAnisotropy_CheckAllValid(Nmr_ShiftAnisotropy self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftAnisotropy_CheckValid(Nmr_ShiftAnisotropy self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'checkValid' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData_keyval0(Nmr_ShiftAnisotropy self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
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
ApiList Nmr_ShiftAnisotropy_FindAllApplicationData_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findAllDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findAllDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations_keyval0(Nmr_ShiftAnisotropy self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
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
ApiSet Nmr_ShiftAnisotropy_FindAllDataDerivations_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrMeasurementValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findAllNmrMeasurementValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findAllNmrMeasurementValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations_keyval0(Nmr_ShiftAnisotropy self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
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
ApiSet Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindAllNmrMeasurementValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findAllPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findAllPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims_keyval0(Nmr_ShiftAnisotropy self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
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
ApiSet Nmr_ShiftAnisotropy_FindAllPeakDims_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks_keyval0(Nmr_ShiftAnisotropy self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
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
ApiSet Nmr_ShiftAnisotropy_FindAllPeaks_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData_keyval0(Nmr_ShiftAnisotropy self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
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
Impl_ApplicationData Nmr_ShiftAnisotropy_FindFirstApplicationData_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  Nmr_AbstractDataDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findFirstDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findFirstDataDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation_keyval0(Nmr_ShiftAnisotropy self)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
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
Nmr_AbstractDataDerivation Nmr_ShiftAnisotropy_FindFirstDataDerivation_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  Vald_NmrMeasurementValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrMeasurementValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findFirstNmrMeasurementValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findFirstNmrMeasurementValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation_keyval0(Nmr_ShiftAnisotropy self)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
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
Vald_NmrMeasurementValidation Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindFirstNmrMeasurementValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim(Nmr_ShiftAnisotropy self, ApiMap conditions)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'findFirstPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'findFirstPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim_keyval0(Nmr_ShiftAnisotropy self)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
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
Nmr_PeakDim Nmr_ShiftAnisotropy_FindFirstPeakDim_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak_keyval0(Nmr_ShiftAnisotropy self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak_keyval1(Nmr_ShiftAnisotropy self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak_keyval2(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak_keyval3(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
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
Nmr_Peak Nmr_ShiftAnisotropy_FindFirstPeak_keyval4(Nmr_ShiftAnisotropy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropy_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ShiftAnisotropy_Get(Nmr_ShiftAnisotropy self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Acco_AccessObject Nmr_ShiftAnisotropy_GetAccess(Nmr_ShiftAnisotropy self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getAccess' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Acco_AccessObject Nmr_ShiftAnisotropy_GetActiveAccess(Nmr_ShiftAnisotropy self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_GetApplicationData(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropy_GetByKey(Nmr_ShiftAnisotropy self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ShiftAnisotropy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getByKey' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropy_GetClassName(Nmr_ShiftAnisotropy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropy_GetDataDerivations(Nmr_ShiftAnisotropy self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropy_GetDetails(Nmr_ShiftAnisotropy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiFloat Nmr_ShiftAnisotropy_GetError(Nmr_ShiftAnisotropy self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getError' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_GetFieldNames(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiFloat Nmr_ShiftAnisotropy_GetFigOfMerit(Nmr_ShiftAnisotropy self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ShiftAnisotropy_GetFullKey(Nmr_ShiftAnisotropy self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiBoolean Nmr_ShiftAnisotropy_GetInConstructor(Nmr_ShiftAnisotropy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiBoolean Nmr_ShiftAnisotropy_GetIsDeleted(Nmr_ShiftAnisotropy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @returns  Local object key
**/
ApiObject Nmr_ShiftAnisotropy_GetLocalKey(Nmr_ShiftAnisotropy self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Meth_Method Nmr_ShiftAnisotropy_GetMethod(Nmr_ShiftAnisotropy self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropy_GetNmrMeasurementValidations(Nmr_ShiftAnisotropy self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrMeasurementValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getNmrMeasurementValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getNmrMeasurementValidations' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropy_GetPackageName(Nmr_ShiftAnisotropy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropy_GetPackageShortName(Nmr_ShiftAnisotropy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropy.parent

link to parent object - 
synonym for parentList
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Nmr_ShiftAnisotropyList Nmr_ShiftAnisotropy_GetParent(Nmr_ShiftAnisotropy self)
{
  
  Nmr_ShiftAnisotropyList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropy.parentList

parent link
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Nmr_ShiftAnisotropyList Nmr_ShiftAnisotropy_GetParentList(Nmr_ShiftAnisotropy self)
{
  
  Nmr_ShiftAnisotropyList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParentList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getParentList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getParentList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropy_GetPeakDims(Nmr_ShiftAnisotropy self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropy_GetPeaks(Nmr_ShiftAnisotropy self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getPeaks' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropy_GetQualifiedName(Nmr_ShiftAnisotropy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropy.resonance

Resonance that holds 
chemical shift anisotropy measurement.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Nmr_Resonance Nmr_ShiftAnisotropy_GetResonance(Nmr_ShiftAnisotropy self)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getResonance' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ShiftAnisotropy_GetRoot(Nmr_ShiftAnisotropy self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getRoot' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
Impl_TopObject Nmr_ShiftAnisotropy_GetTopObject(Nmr_ShiftAnisotropy self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiFloat Nmr_ShiftAnisotropy_GetValue(Nmr_ShiftAnisotropy self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropy_Init(Nmr_ShiftAnisotropyList parent, ApiMap attrlinks)
{
  
  return Nmr_ShiftAnisotropyList_NewShiftAnisotropy(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList parent
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropy_Init_reqd(Nmr_ShiftAnisotropyList parent, Nmr_Resonance resonance, float value)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "resonance", resonance);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_ShiftAnisotropy_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropy self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftAnisotropy_RemoveApplicationData(Nmr_ShiftAnisotropy self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_AbstractDataDerivation value
**/
void *Nmr_ShiftAnisotropy_RemoveDataDerivation(Nmr_ShiftAnisotropy self, Nmr_AbstractDataDerivation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'removeDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'removeDataDerivation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  Vald_NmrMeasurementValidation value
**/
void *Nmr_ShiftAnisotropy_RemoveNmrMeasurementValidation(Nmr_ShiftAnisotropy self, Vald_NmrMeasurementValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrMeasurementValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'removeNmrMeasurementValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'removeNmrMeasurementValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_Peak value
**/
void *Nmr_ShiftAnisotropy_RemovePeak(Nmr_ShiftAnisotropy self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_PeakDim value
**/
void *Nmr_ShiftAnisotropy_RemovePeakDim(Nmr_ShiftAnisotropy self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'removePeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'removePeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropy self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ShiftAnisotropy_Set(Nmr_ShiftAnisotropy self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftAnisotropy self
  @param  Acco_AccessObject value
**/
void *Nmr_ShiftAnisotropy_SetAccess(Nmr_ShiftAnisotropy self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setAccess' is not callable");
  
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
  @param  Nmr_ShiftAnisotropy self
  @param  ApiList values
**/
void *Nmr_ShiftAnisotropy_SetApplicationData(Nmr_ShiftAnisotropy self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropy_SetDataDerivations(Nmr_ShiftAnisotropy self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setDataDerivations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiString value
**/
void *Nmr_ShiftAnisotropy_SetDetails(Nmr_ShiftAnisotropy self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_ShiftAnisotropy self
  @param  ApiFloat value
**/
void *Nmr_ShiftAnisotropy_SetError(Nmr_ShiftAnisotropy self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_ShiftAnisotropy self
  @param  ApiFloat value
**/
void *Nmr_ShiftAnisotropy_SetFigOfMerit(Nmr_ShiftAnisotropy self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_ShiftAnisotropy self
  @param  Meth_Method value
**/
void *Nmr_ShiftAnisotropy_SetMethod(Nmr_ShiftAnisotropy self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropy_SetNmrMeasurementValidations(Nmr_ShiftAnisotropy self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrMeasurementValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setNmrMeasurementValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setNmrMeasurementValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropy_SetPeakDims(Nmr_ShiftAnisotropy self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setPeakDims' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropy_SetPeaks(Nmr_ShiftAnisotropy self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftAnisotropy.resonance

Resonance that holds 
chemical shift anisotropy measurement.
  @param  Nmr_ShiftAnisotropy self
  @param  Nmr_Resonance value
**/
void *Nmr_ShiftAnisotropy_SetResonance(Nmr_ShiftAnisotropy self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_ShiftAnisotropy self
  @param  ApiFloat value
**/
void *Nmr_ShiftAnisotropy_SetValue(Nmr_ShiftAnisotropy self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_SortedDataDerivations(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'sortedDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'sortedDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_SortedNmrMeasurementValidations(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrMeasurementValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'sortedNmrMeasurementValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'sortedNmrMeasurementValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_SortedPeakDims(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'sortedPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'sortedPeakDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_ShiftAnisotropy self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropy_SortedPeaks(Nmr_ShiftAnisotropy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropy: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
