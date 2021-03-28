
#include "ccp.h"

/*
  DataSource containing one or more N-dimensional numerical matrix records, which may be real or (hyper)complex
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  Impl_ApplicationData value
**/
void *Dloc_NumericMatrix_AddApplicationData(Dloc_NumericMatrix self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'addApplicationData' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
void *Dloc_NumericMatrix_AddIsComplex(Dloc_NumericMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'addIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'addIsComplex' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  Nmr_DataSource value
**/
void *Dloc_NumericMatrix_AddNmrDataSource(Dloc_NumericMatrix self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'addNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'addNmrDataSource' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
void *Dloc_NumericMatrix_AddNumPoints(Dloc_NumericMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'addNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'addNumPoints' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_NumericMatrix_FindAllApplicationData(Dloc_NumericMatrix self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval0(Dloc_NumericMatrix self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_NumericMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_NumericMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_NumericMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_NumericMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
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
ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_NumericMatrix_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources(Dloc_NumericMatrix self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'findAllNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'findAllNmrDataSources' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval0(Dloc_NumericMatrix self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_NumericMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_NumericMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_NumericMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_NumericMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
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
ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_NumericMatrix_FindAllNmrDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData(Dloc_NumericMatrix self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval0(Dloc_NumericMatrix self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_NumericMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_NumericMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_NumericMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_NumericMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
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
Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_NumericMatrix_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource(Dloc_NumericMatrix self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'findFirstNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'findFirstNmrDataSource' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval0(Dloc_NumericMatrix self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_NumericMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_NumericMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_NumericMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_NumericMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
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
Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_NumericMatrix_FindFirstNmrDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Acco_AccessObject Dloc_NumericMatrix_GetAccess(Dloc_NumericMatrix self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getAccess' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiList Dloc_NumericMatrix_GetApplicationData(Dloc_NumericMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.NumericMatrix
  @param  Dloc_NumericMatrix self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_NumericMatrix Dloc_NumericMatrix_GetByKey(Dloc_NumericMatrix self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dloc_NumericMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getByKey' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetClassName(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getClassName' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetComplexStoredBy(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComplexStoredBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getComplexStoredBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getComplexStoredBy' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_NumericMatrix_GetDataLocationStore(Dloc_NumericMatrix self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getDataLocationStore' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Dloc_DataUrl Dloc_NumericMatrix_GetDataUrl(Dloc_NumericMatrix self)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getDataUrl' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetDetails(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getDetails' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiList Dloc_NumericMatrix_GetFieldNames(Dloc_NumericMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getFieldNames' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetFullPath(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getFullPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getFullPath' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.NumericMatrix.headerSize

Size of 
record header. The unit is different for different subtypes
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiInteger Dloc_NumericMatrix_GetHeaderSize(Dloc_NumericMatrix self)
{
}

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiBoolean Dloc_NumericMatrix_GetInConstructor(Dloc_NumericMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getInConstructor' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiBoolean Dloc_NumericMatrix_GetIsBigEndian(Dloc_NumericMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsBigEndian");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getIsBigEndian'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getIsBigEndian' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiList Dloc_NumericMatrix_GetIsComplex(Dloc_NumericMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getIsComplex' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiBoolean Dloc_NumericMatrix_GetIsDeleted(Dloc_NumericMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getIsDeleted' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiSet Dloc_NumericMatrix_GetNmrDataSources(Dloc_NumericMatrix self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getNmrDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute numDims
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiInteger Dloc_NumericMatrix_GetNumDims(Dloc_NumericMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumDims");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getNumDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getNumDims' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiList Dloc_NumericMatrix_GetNumPoints(Dloc_NumericMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getNumPoints' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiInteger Dloc_NumericMatrix_GetNumRecords(Dloc_NumericMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumRecords");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getNumRecords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getNumRecords' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetNumberType(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumberType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getNumberType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getNumberType' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetPackageName(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getPackageName' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetPackageShortName(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getPackageShortName' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_NumericMatrix_GetParent(Dloc_NumericMatrix self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getParent' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetPath(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getPath' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiString Dloc_NumericMatrix_GetQualifiedName(Dloc_NumericMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Impl_MemopsRoot Dloc_NumericMatrix_GetRoot(Dloc_NumericMatrix self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getRoot' is not callable");
  
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
scaling factor of 1.6 means the numebr to use in calculations would be 
3.2.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiFloat Dloc_NumericMatrix_GetScaleFactor(Dloc_NumericMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScaleFactor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getScaleFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getScaleFactor' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiInteger Dloc_NumericMatrix_GetSerial(Dloc_NumericMatrix self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getSerial' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
Impl_TopObject Dloc_NumericMatrix_GetTopObject(Dloc_NumericMatrix self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'getTopObject' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  Impl_ApplicationData value
**/
void *Dloc_NumericMatrix_RemoveApplicationData(Dloc_NumericMatrix self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'removeApplicationData' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
void *Dloc_NumericMatrix_RemoveIsComplex(Dloc_NumericMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'removeIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'removeIsComplex' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  Nmr_DataSource value
**/
void *Dloc_NumericMatrix_RemoveNmrDataSource(Dloc_NumericMatrix self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'removeNmrDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'removeNmrDataSource' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
void *Dloc_NumericMatrix_RemoveNumPoints(Dloc_NumericMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'removeNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'removeNumPoints' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  Acco_AccessObject value
**/
void *Dloc_NumericMatrix_SetAccess(Dloc_NumericMatrix self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setAccess' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
void *Dloc_NumericMatrix_SetApplicationData(Dloc_NumericMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setApplicationData' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
void *Dloc_NumericMatrix_SetComplexStoredBy(Dloc_NumericMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComplexStoredBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setComplexStoredBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setComplexStoredBy' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  Dloc_DataUrl value
**/
void *Dloc_NumericMatrix_SetDataUrl(Dloc_NumericMatrix self, Dloc_DataUrl value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setDataUrl' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
void *Dloc_NumericMatrix_SetDetails(Dloc_NumericMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.headerSize

Size of 
record header. The unit is different for different subtypes
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
void *Dloc_NumericMatrix_SetHeaderSize(Dloc_NumericMatrix self, ApiInteger value)
{
}

/**
  Set for ccp.general.DataLocation.NumericMatrix.isBigEndian

Are data 
big-endian (alternative little-endian)? Irrelevant for ascii data.
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
void *Dloc_NumericMatrix_SetIsBigEndian(Dloc_NumericMatrix self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsBigEndian");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setIsBigEndian'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setIsBigEndian' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
void *Dloc_NumericMatrix_SetIsComplex(Dloc_NumericMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setIsComplex' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiSet values
**/
void *Dloc_NumericMatrix_SetNmrDataSources(Dloc_NumericMatrix self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setNmrDataSources' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
void *Dloc_NumericMatrix_SetNumPoints(Dloc_NumericMatrix self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setNumPoints' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
void *Dloc_NumericMatrix_SetNumRecords(Dloc_NumericMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumRecords");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setNumRecords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setNumRecords' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
void *Dloc_NumericMatrix_SetNumberType(Dloc_NumericMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumberType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setNumberType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setNumberType' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
void *Dloc_NumericMatrix_SetPath(Dloc_NumericMatrix self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setPath' is not callable");
  
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
scaling factor of 1.6 means the numebr to use in calculations would be 
3.2.
  @param  Dloc_NumericMatrix self
  @param  ApiFloat value
**/
void *Dloc_NumericMatrix_SetScaleFactor(Dloc_NumericMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScaleFactor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setScaleFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setScaleFactor' is not callable");
  
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
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
void *Dloc_NumericMatrix_SetSerial(Dloc_NumericMatrix self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
ApiList Dloc_NumericMatrix_SortedNmrDataSources(Dloc_NumericMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: cannot find method 'sortedNmrDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.NumericMatrix: method 'sortedNmrDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
