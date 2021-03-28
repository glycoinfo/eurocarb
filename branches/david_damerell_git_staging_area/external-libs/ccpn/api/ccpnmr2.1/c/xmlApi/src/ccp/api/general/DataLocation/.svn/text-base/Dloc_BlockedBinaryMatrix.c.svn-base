
#include "ccp.h"

/*
  NumericMatrix stored in blocked binary format
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  Impl_ApplicationData value
**/
void *Dloc_BlockedBinaryMatrix_AddApplicationData(Dloc_BlockedBinaryMatrix self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DataLocation.BlockedBinaryMatrix.blockSizes

Block 
sizes in dimension order
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_AddBlockSize(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addBlockSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addBlockSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addBlockSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  Calc_ExternalData value
**/
void *Dloc_BlockedBinaryMatrix_AddExternalData(Dloc_BlockedBinaryMatrix self, Calc_ExternalData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExternalData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addExternalData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addExternalData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean value
**/
void *Dloc_BlockedBinaryMatrix_AddIsComplex(Dloc_BlockedBinaryMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addIsComplex' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  Nmr_DataSource value
**/
void *Dloc_BlockedBinaryMatrix_AddNmrDataSource(Dloc_BlockedBinaryMatrix self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addNmrDataSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_AddNumPoints(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'addNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'addNumPoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean complete
**/
void *Dloc_BlockedBinaryMatrix_CheckAllValid(Dloc_BlockedBinaryMatrix self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean complete
**/
void *Dloc_BlockedBinaryMatrix_CheckValid(Dloc_BlockedBinaryMatrix self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'checkValid' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
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
ApiList Dloc_BlockedBinaryMatrix_FindAllApplicationData_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExternalDatas");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findAllExternalDatas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findAllExternalDatas' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindAllExternalDatas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllExternalDatas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllExternalDatas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllExternalDatas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
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
ApiSet Dloc_BlockedBinaryMatrix_FindAllExternalDatas_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllExternalDatas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findAllNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findAllNmrDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
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
ApiSet Dloc_BlockedBinaryMatrix_FindAllNmrDataSources_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
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
Impl_ApplicationData Dloc_BlockedBinaryMatrix_FindFirstApplicationData_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  Calc_ExternalData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExternalData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findFirstExternalData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findFirstExternalData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @returns  the first value that satisfies the conditions 
**/
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  Calc_ExternalData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstExternalData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  Calc_ExternalData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstExternalData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_ExternalData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstExternalData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_ExternalData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstExternalData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
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
Calc_ExternalData Dloc_BlockedBinaryMatrix_FindFirstExternalData_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_ExternalData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstExternalData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(Dloc_BlockedBinaryMatrix self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'findFirstNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'findFirstNmrDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource_keyval0(Dloc_BlockedBinaryMatrix self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource_keyval1(Dloc_BlockedBinaryMatrix self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource_keyval2(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource_keyval3(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
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
Nmr_DataSource Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource_keyval4(Dloc_BlockedBinaryMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_BlockedBinaryMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dloc_BlockedBinaryMatrix_Get(Dloc_BlockedBinaryMatrix self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Acco_AccessObject Dloc_BlockedBinaryMatrix_GetAccess(Dloc_BlockedBinaryMatrix self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getAccess' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Acco_AccessObject Dloc_BlockedBinaryMatrix_GetActiveAccess(Dloc_BlockedBinaryMatrix self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getActiveAccess' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_GetApplicationData(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.BlockedBinaryMatrix.blockHeaderSize

Block 
header size in bytes
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetBlockHeaderSize(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlockHeaderSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getBlockHeaderSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getBlockHeaderSize' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.BlockedBinaryMatrix.blockSizes

Block 
sizes in dimension order
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_GetBlockSizes(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlockSizes");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getBlockSizes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getBlockSizes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_BlockedBinaryMatrix Dloc_BlockedBinaryMatrix_GetByKey(Dloc_BlockedBinaryMatrix self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dloc_BlockedBinaryMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getByKey' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetClassName(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.complexStoredBy

The 
ordering of real and imaginary parts of hypercomplex numbers in the data 
matrix. See ComplexStorage type for details
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetComplexStoredBy(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComplexStoredBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getComplexStoredBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getComplexStoredBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.dataLocationStore

parent 
link
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_BlockedBinaryMatrix_GetDataLocationStore(Dloc_BlockedBinaryMatrix self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Dloc_DataUrl Dloc_BlockedBinaryMatrix_GetDataUrl(Dloc_BlockedBinaryMatrix self)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getDataUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetDetails(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiSet Dloc_BlockedBinaryMatrix_GetExternalDatas(Dloc_BlockedBinaryMatrix self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExternalDatas");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getExternalDatas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getExternalDatas' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_GetFieldNames(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.fileType

Data file type.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetFileType(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getFileType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getFileType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.fullPath

Full path 
to data
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetFullPath(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getFullPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getFullPath' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.BlockedBinaryMatrix.hasBlockPadding

Are data 
padded to fill all blocks completely? Alternatively incomplete blocks 
store only the actual data.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiBoolean Dloc_BlockedBinaryMatrix_GetHasBlockPadding(Dloc_BlockedBinaryMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasBlockPadding");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getHasBlockPadding'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getHasBlockPadding' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.BlockedBinaryMatrix.headerSize

File 
header size in bytes
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetHeaderSize(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHeaderSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getHeaderSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getHeaderSize' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiBoolean Dloc_BlockedBinaryMatrix_GetInConstructor(Dloc_BlockedBinaryMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.isBigEndian

Are data 
big-endian (alternative little-endian)? Irrelevant for ascii data.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiBoolean Dloc_BlockedBinaryMatrix_GetIsBigEndian(Dloc_BlockedBinaryMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsBigEndian");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getIsBigEndian'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getIsBigEndian' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_GetIsComplex(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getIsComplex' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiBoolean Dloc_BlockedBinaryMatrix_GetIsDeleted(Dloc_BlockedBinaryMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.BlockedBinaryMatrix.nByte

Number of 
bytes per number
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetNByte(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNByte");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNByte'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNByte' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiSet Dloc_BlockedBinaryMatrix_GetNmrDataSources(Dloc_BlockedBinaryMatrix self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNmrDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.numDims

Number of 
dimensions.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetNumDims(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumDims");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNumDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNumDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_GetNumPoints(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNumPoints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.numRecords

Number of 
matrix records in file. All other information in the object describes a 
single record.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetNumRecords(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumRecords");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNumRecords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNumRecords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.numberType

Type of 
numbers held in matrix
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetNumberType(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumberType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getNumberType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getNumberType' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetPackageName(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getPackageName' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetPackageShortName(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.parent

link to 
parent object - synonym for dataLocationStore
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_BlockedBinaryMatrix_GetParent(Dloc_BlockedBinaryMatrix self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetPath(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getPath' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiString Dloc_BlockedBinaryMatrix_GetQualifiedName(Dloc_BlockedBinaryMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Impl_MemopsRoot Dloc_BlockedBinaryMatrix_GetRoot(Dloc_BlockedBinaryMatrix self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.scaleFactor

Scale factor 
for data stored in matrix. The numbers as stored must be multiplied by 
the scaleFactor before being used. E.g. a stored value of 2 (int) with a 
scaling factor of 1.6 means the number to use in calculations would be 
3.2.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiFloat Dloc_BlockedBinaryMatrix_GetScaleFactor(Dloc_BlockedBinaryMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScaleFactor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getScaleFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getScaleFactor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiInteger Dloc_BlockedBinaryMatrix_GetSerial(Dloc_BlockedBinaryMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getSerial' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
Impl_TopObject Dloc_BlockedBinaryMatrix_GetTopObject(Dloc_BlockedBinaryMatrix self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_DataLocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_BlockedBinaryMatrix Dloc_BlockedBinaryMatrix_Init(Dloc_DataLocationStore parent, ApiMap attrlinks)
{
  
  return Dloc_DataLocationStore_NewBlockedBinaryMatrix(parent, attrlinks);
}

/**
  Constructor for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_DataLocationStore parent
  @param  Dloc_DataUrl dataUrl
  @param  char * path
  @returns  the new object
**/
Dloc_BlockedBinaryMatrix Dloc_BlockedBinaryMatrix_Init_reqd(Dloc_DataLocationStore parent, Dloc_DataUrl dataUrl, char * path)
{
  
  Dloc_BlockedBinaryMatrix  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Dloc_BlockedBinaryMatrix_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_BlockedBinaryMatrix self
  @param  Impl_ApplicationData value
**/
void *Dloc_BlockedBinaryMatrix_RemoveApplicationData(Dloc_BlockedBinaryMatrix self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.DataLocation.BlockedBinaryMatrix.blockSizes

Block sizes in 
dimension order
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_RemoveBlockSize(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeBlockSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeBlockSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeBlockSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  Calc_ExternalData value
**/
void *Dloc_BlockedBinaryMatrix_RemoveExternalData(Dloc_BlockedBinaryMatrix self, Calc_ExternalData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExternalData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeExternalData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeExternalData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean value
**/
void *Dloc_BlockedBinaryMatrix_RemoveIsComplex(Dloc_BlockedBinaryMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeIsComplex' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  Nmr_DataSource value
**/
void *Dloc_BlockedBinaryMatrix_RemoveNmrDataSource(Dloc_BlockedBinaryMatrix self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeNmrDataSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_RemoveNumPoints(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'removeNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'removeNumPoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dloc_BlockedBinaryMatrix_Set(Dloc_BlockedBinaryMatrix self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_BlockedBinaryMatrix self
  @param  Acco_AccessObject value
**/
void *Dloc_BlockedBinaryMatrix_SetAccess(Dloc_BlockedBinaryMatrix self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setAccess' is not callable");
  
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
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiList values
**/
void *Dloc_BlockedBinaryMatrix_SetApplicationData(Dloc_BlockedBinaryMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.DataLocation.BlockedBinaryMatrix.blockHeaderSize

Block 
header size in bytes
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_SetBlockHeaderSize(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlockHeaderSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setBlockHeaderSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setBlockHeaderSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.BlockedBinaryMatrix.blockSizes

Block 
sizes in dimension order
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiList values
**/
void *Dloc_BlockedBinaryMatrix_SetBlockSizes(Dloc_BlockedBinaryMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlockSizes");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setBlockSizes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setBlockSizes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.complexStoredBy

The 
ordering of real and imaginary parts of hypercomplex numbers in the data 
matrix. See ComplexStorage type for details
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString value
**/
void *Dloc_BlockedBinaryMatrix_SetComplexStoredBy(Dloc_BlockedBinaryMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComplexStoredBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setComplexStoredBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setComplexStoredBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_BlockedBinaryMatrix self
  @param  Dloc_DataUrl value
**/
void *Dloc_BlockedBinaryMatrix_SetDataUrl(Dloc_BlockedBinaryMatrix self, Dloc_DataUrl value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setDataUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString value
**/
void *Dloc_BlockedBinaryMatrix_SetDetails(Dloc_BlockedBinaryMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiSet values
**/
void *Dloc_BlockedBinaryMatrix_SetExternalDatas(Dloc_BlockedBinaryMatrix self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExternalDatas");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setExternalDatas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setExternalDatas' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.fileType

Data file type.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString value
**/
void *Dloc_BlockedBinaryMatrix_SetFileType(Dloc_BlockedBinaryMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setFileType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setFileType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.DataLocation.BlockedBinaryMatrix.hasBlockPadding

Are data 
padded to fill all blocks completely? Alternatively incomplete blocks 
store only the actual data.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean value
**/
void *Dloc_BlockedBinaryMatrix_SetHasBlockPadding(Dloc_BlockedBinaryMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHasBlockPadding");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setHasBlockPadding'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setHasBlockPadding' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.BlockedBinaryMatrix.headerSize

File 
header size in bytes
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_SetHeaderSize(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHeaderSize");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setHeaderSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setHeaderSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.isBigEndian

Are data 
big-endian (alternative little-endian)? Irrelevant for ascii data.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiBoolean value
**/
void *Dloc_BlockedBinaryMatrix_SetIsBigEndian(Dloc_BlockedBinaryMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsBigEndian");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setIsBigEndian'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setIsBigEndian' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiList values
**/
void *Dloc_BlockedBinaryMatrix_SetIsComplex(Dloc_BlockedBinaryMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setIsComplex' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.BlockedBinaryMatrix.nByte

Number of 
bytes per number
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_SetNByte(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNByte");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setNByte'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setNByte' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiSet values
**/
void *Dloc_BlockedBinaryMatrix_SetNmrDataSources(Dloc_BlockedBinaryMatrix self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setNmrDataSources' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiList values
**/
void *Dloc_BlockedBinaryMatrix_SetNumPoints(Dloc_BlockedBinaryMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setNumPoints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.numRecords

Number of 
matrix records in file. All other information in the object describes a 
single record.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_SetNumRecords(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumRecords");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setNumRecords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setNumRecords' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.numberType

Type of 
numbers held in matrix
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString value
**/
void *Dloc_BlockedBinaryMatrix_SetNumberType(Dloc_BlockedBinaryMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumberType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setNumberType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setNumberType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiString value
**/
void *Dloc_BlockedBinaryMatrix_SetPath(Dloc_BlockedBinaryMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setPath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.scaleFactor

Scale factor 
for data stored in matrix. The numbers as stored must be multiplied by 
the scaleFactor before being used. E.g. a stored value of 2 (int) with a 
scaling factor of 1.6 means the number to use in calculations would be 
3.2.
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiFloat value
**/
void *Dloc_BlockedBinaryMatrix_SetScaleFactor(Dloc_BlockedBinaryMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScaleFactor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setScaleFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setScaleFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_BlockedBinaryMatrix self
  @param  ApiInteger value
**/
void *Dloc_BlockedBinaryMatrix_SetSerial(Dloc_BlockedBinaryMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_SortedExternalDatas(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExternalDatas");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'sortedExternalDatas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'sortedExternalDatas' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_BlockedBinaryMatrix self
  @returns   the result
**/
ApiList Dloc_BlockedBinaryMatrix_SortedNmrDataSources(Dloc_BlockedBinaryMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: cannot find method 'sortedNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.BlockedBinaryMatrix: method 'sortedNmrDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
