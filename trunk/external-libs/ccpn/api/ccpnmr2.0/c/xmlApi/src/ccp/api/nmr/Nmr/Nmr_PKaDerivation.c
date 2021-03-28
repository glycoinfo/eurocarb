
#include "ccp.h"

/*
  Derivation for set of pKa(s) and associated parameters
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_PKaDerivation_AddApplicationData(Nmr_PKaDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_PKaDerivation_AddInputMeasurement(Nmr_PKaDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'addInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'addInputMeasurement' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_PKaDerivation_AddPeak(Nmr_PKaDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'addPeak' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_PKaDerivation_AddPeakDim(Nmr_PKaDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'addPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'addPeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean complete
**/
void *Nmr_PKaDerivation_CheckAllValid(Nmr_PKaDerivation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean complete
**/
void *Nmr_PKaDerivation_CheckValid(Nmr_PKaDerivation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'checkValid' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PKaDerivation_FindAllApplicationData(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval0(Nmr_PKaDerivation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
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
ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllDerivedData(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findAllDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findAllDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval0(Nmr_PKaDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
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
ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindAllDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findAllInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findAllInputMeasurements' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval0(Nmr_PKaDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
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
ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindAllInputMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeakDims(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findAllPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findAllPeakDims' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval0(Nmr_PKaDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
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
ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindAllPeakDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeaks(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findAllPeaks' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval0(Nmr_PKaDerivation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
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
ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval0(Nmr_PKaDerivation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
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
Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  Nmr_Pka obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findFirstDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findFirstDerivedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval0(Nmr_PKaDerivation self)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
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
Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindFirstDerivedData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findFirstInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findFirstInputMeasurement' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval0(Nmr_PKaDerivation self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
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
Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindFirstInputMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findFirstPeak' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim(Nmr_PKaDerivation self, ApiMap conditions)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'findFirstPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'findFirstPeakDim' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval0(Nmr_PKaDerivation self)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
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
Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindFirstPeakDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval0(Nmr_PKaDerivation self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PKaDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PKaDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PKaDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PKaDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
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
Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PKaDerivation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PKaDerivation_Get(Nmr_PKaDerivation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Acco_AccessObject Nmr_PKaDerivation_GetAccess(Nmr_PKaDerivation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getAccess' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_GetApplicationData(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PKaDerivation Nmr_PKaDerivation_GetByKey(Nmr_PKaDerivation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PKaDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getByKey' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiString Nmr_PKaDerivation_GetClassName(Nmr_PKaDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class Pka
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiSet Nmr_PKaDerivation_GetDerivedData(Nmr_PKaDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getDerivedData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiString Nmr_PKaDerivation_GetDetails(Nmr_PKaDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getDetails' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_GetFieldNames(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PKaDerivation_GetFullKey(Nmr_PKaDerivation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiBoolean Nmr_PKaDerivation_GetInConstructor(Nmr_PKaDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiSet Nmr_PKaDerivation_GetInputMeasurements(Nmr_PKaDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getInputMeasurements' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiBoolean Nmr_PKaDerivation_GetIsDeleted(Nmr_PKaDerivation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @returns  Local object key
**/
ApiObject Nmr_PKaDerivation_GetLocalKey(Nmr_PKaDerivation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Meth_Method Nmr_PKaDerivation_GetMethod(Nmr_PKaDerivation self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getMethod' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiString Nmr_PKaDerivation_GetPackageName(Nmr_PKaDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiString Nmr_PKaDerivation_GetPackageShortName(Nmr_PKaDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PKaDerivation.parent

link to parent object - 
synonym for parentList
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Nmr_PkaList Nmr_PKaDerivation_GetParent(Nmr_PKaDerivation self)
{
  
  Nmr_PkaList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PKaDerivation.parentList

parent link
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Nmr_PkaList Nmr_PKaDerivation_GetParentList(Nmr_PKaDerivation self)
{
  
  Nmr_PkaList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParentList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getParentList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getParentList' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiSet Nmr_PKaDerivation_GetPeakDims(Nmr_PKaDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getPeakDims' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiSet Nmr_PKaDerivation_GetPeaks(Nmr_PKaDerivation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getPeaks' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiString Nmr_PKaDerivation_GetQualifiedName(Nmr_PKaDerivation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PKaDerivation_GetRoot(Nmr_PKaDerivation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getRoot' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiInteger Nmr_PKaDerivation_GetSerial(Nmr_PKaDerivation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getSerial' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
Impl_TopObject Nmr_PKaDerivation_GetTopObject(Nmr_PKaDerivation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PkaList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PKaDerivation Nmr_PKaDerivation_Init(Nmr_PkaList parent, ApiMap attrlinks)
{
  
  return Nmr_PkaList_NewPKaDerivation(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PkaList parent
  @returns  the new object
**/
Nmr_PKaDerivation Nmr_PKaDerivation_Init_reqd(Nmr_PkaList parent)
{
  
  Nmr_PKaDerivation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PKaDerivation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Pka Nmr_PKaDerivation_NewPka(Nmr_PKaDerivation self, ApiMap attrlinks)
{
  
  Nmr_Pka obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPka");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'newPka'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'newPka' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Pka
  @param  Nmr_PKaDerivation self
  @param  Nmr_Resonance resonance
  @returns  the new object
**/
Nmr_Pka Nmr_PKaDerivation_NewPka_reqd(Nmr_PKaDerivation self, Nmr_Resonance resonance)
{
  
  Nmr_Pka  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonance", resonance);
  
  obj = Nmr_PKaDerivation_NewPka(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  Impl_ApplicationData value
**/
void *Nmr_PKaDerivation_RemoveApplicationData(Nmr_PKaDerivation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_AbstractMeasurement value
**/
void *Nmr_PKaDerivation_RemoveInputMeasurement(Nmr_PKaDerivation self, Nmr_AbstractMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'removeInputMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'removeInputMeasurement' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_Peak value
**/
void *Nmr_PKaDerivation_RemovePeak(Nmr_PKaDerivation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'removePeak' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Nmr_PeakDim value
**/
void *Nmr_PKaDerivation_RemovePeakDim(Nmr_PKaDerivation self, Nmr_PeakDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'removePeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'removePeakDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PKaDerivation_Set(Nmr_PKaDerivation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PKaDerivation self
  @param  Acco_AccessObject value
**/
void *Nmr_PKaDerivation_SetAccess(Nmr_PKaDerivation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setAccess' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiList values
**/
void *Nmr_PKaDerivation_SetApplicationData(Nmr_PKaDerivation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiString value
**/
void *Nmr_PKaDerivation_SetDetails(Nmr_PKaDerivation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setDetails' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
void *Nmr_PKaDerivation_SetInputMeasurements(Nmr_PKaDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setInputMeasurements' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  Meth_Method value
**/
void *Nmr_PKaDerivation_SetMethod(Nmr_PKaDerivation self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setMethod' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
void *Nmr_PKaDerivation_SetPeakDims(Nmr_PKaDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setPeakDims' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
void *Nmr_PKaDerivation_SetPeaks(Nmr_PKaDerivation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setPeaks' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @param  ApiInteger value
**/
void *Nmr_PKaDerivation_SetSerial(Nmr_PKaDerivation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_SortedDerivedData(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'sortedDerivedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'sortedDerivedData' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_SortedInputMeasurements(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'sortedInputMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'sortedInputMeasurements' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_SortedPeakDims(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'sortedPeakDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'sortedPeakDims' is not callable");
  
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
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
ApiList Nmr_PKaDerivation_SortedPeaks(Nmr_PKaDerivation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PKaDerivation: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
