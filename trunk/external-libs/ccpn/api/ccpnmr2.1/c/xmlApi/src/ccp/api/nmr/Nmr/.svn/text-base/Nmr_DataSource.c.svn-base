
#include "ccp.h"

/*
  This class describes the stored data matrix from an NMR spectrum. 
  It is a general class that may be used to describe data in the time domain, frequency domain a combination of the two, or axes that are neither time nor frequency
  The actual data are kept in a location defined by the dataLocation link. The DataSource attributes contain the information required to extract the data from the source file, but the data model as such does not include the actual data matrix
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  Impl_ApplicationData value
**/
void *Nmr_DataSource_AddApplicationData(Nmr_DataSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived directly 
from the current DataSource.
  @param  Nmr_DataSource self
  @param  Nmr_DataSource value
**/
void *Nmr_DataSource_AddProcessedTo(Nmr_DataSource self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'addProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'addProcessedTo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  ApiBoolean complete
**/
void *Nmr_DataSource_CheckAllValid(Nmr_DataSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  ApiBoolean complete
**/
void *Nmr_DataSource_CheckValid(Nmr_DataSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'checkValid' is not callable");
  
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
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataSource_FindAllApplicationData(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataSource_FindAllApplicationData_keyval0(Nmr_DataSource self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataSource_FindAllApplicationData_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataSource_FindAllApplicationData_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataSource_FindAllApplicationData_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
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
ApiList Nmr_DataSource_FindAllApplicationData_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataDims(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataDims_keyval0(Nmr_DataSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataDims_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataDims_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataDims_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
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
ApiSet Nmr_DataSource_FindAllDataDims_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataSourceImages(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataSourceImages");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllDataSourceImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllDataSourceImages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataSourceImages_keyval0(Nmr_DataSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllDataSourceImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataSourceImages_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllDataSourceImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataSourceImages_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllDataSourceImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllDataSourceImages_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllDataSourceImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
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
ApiSet Nmr_DataSource_FindAllDataSourceImages_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllDataSourceImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllPeakLists(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllPeakLists_keyval0(Nmr_DataSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllPeakLists_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllPeakLists_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllPeakLists_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
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
ApiSet Nmr_DataSource_FindAllPeakLists_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllProcessedTo(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllProcessedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllProcessedTo_keyval0(Nmr_DataSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllProcessedTo_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllProcessedTo_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllProcessedTo_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
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
ApiSet Nmr_DataSource_FindAllProcessedTo_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllSparseSamplings(Nmr_DataSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSparseSamplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findAllSparseSamplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findAllSparseSamplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllSparseSamplings_keyval0(Nmr_DataSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindAllSparseSamplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllSparseSamplings_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindAllSparseSamplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllSparseSamplings_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindAllSparseSamplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_DataSource_FindAllSparseSamplings_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindAllSparseSamplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
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
ApiSet Nmr_DataSource_FindAllSparseSamplings_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindAllSparseSamplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData(Nmr_DataSource self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData_keyval0(Nmr_DataSource self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
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
Impl_ApplicationData Nmr_DataSource_FindFirstApplicationData_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim(Nmr_DataSource self, ApiMap conditions)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim_keyval0(Nmr_DataSource self)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
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
Nmr_AbstractDataDim Nmr_DataSource_FindFirstDataDim_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage(Nmr_DataSource self, ApiMap conditions)
{
  
  Nmr_DataSourceImage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataSourceImage");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstDataSourceImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstDataSourceImage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage_keyval0(Nmr_DataSource self)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstDataSourceImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstDataSourceImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstDataSourceImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstDataSourceImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to 
class DataSourceImage
  @param  Nmr_DataSource self
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
Nmr_DataSourceImage Nmr_DataSource_FindFirstDataSourceImage_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstDataSourceImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nmr_DataSource_FindFirstPeakList(Nmr_DataSource self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nmr_DataSource_FindFirstPeakList_keyval0(Nmr_DataSource self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nmr_DataSource_FindFirstPeakList_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nmr_DataSource_FindFirstPeakList_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Nmr_DataSource_FindFirstPeakList_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
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
Nmr_PeakList Nmr_DataSource_FindFirstPeakList_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo(Nmr_DataSource self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstProcessedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo_keyval0(Nmr_DataSource self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
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
Nmr_DataSource Nmr_DataSource_FindFirstProcessedTo_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstProcessedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling(Nmr_DataSource self, ApiMap conditions)
{
  
  Nmr_SparseSampling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSparseSampling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'findFirstSparseSampling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'findFirstSparseSampling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling_keyval0(Nmr_DataSource self)
{
  
  Nmr_SparseSampling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataSource_FindFirstSparseSampling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling_keyval1(Nmr_DataSource self, char * key, ApiObject value)
{
  
  Nmr_SparseSampling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataSource_FindFirstSparseSampling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling_keyval2(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SparseSampling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataSource_FindFirstSparseSampling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling_keyval3(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SparseSampling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataSource_FindFirstSparseSampling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to 
class SparseSampling
  @param  Nmr_DataSource self
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
Nmr_SparseSampling Nmr_DataSource_FindFirstSparseSampling_keyval4(Nmr_DataSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SparseSampling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataSource_FindFirstSparseSampling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_DataSource_Get(Nmr_DataSource self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataSource self
  @returns   the result
**/
Acco_AccessObject Nmr_DataSource_GetAccess(Nmr_DataSource self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getAccess' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
Acco_AccessObject Nmr_DataSource_GetActiveAccess(Nmr_DataSource self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.activePeakList

Currently active peaklist 
for DataSource - i.e. PeakList where newly picked peaks will be placed.
  @param  Nmr_DataSource self
  @returns   the result
**/
Nmr_PeakList Nmr_DataSource_GetActivePeakList(Nmr_DataSource self)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActivePeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getActivePeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getActivePeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.analysisSpectrum

AnalysisSpectrum that 
points to Spectrum
  @param  Nmr_DataSource self
  @returns   the result
**/
Anal_AnalysisSpectrum Nmr_DataSource_GetAnalysisSpectrum(Nmr_DataSource self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getAnalysisSpectrum' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_GetApplicationData(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_DataSource Nmr_DataSource_GetByKey(Nmr_DataSource self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getByKey' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetClassName(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.compressMethod

Method used for data 
compression.
  @param  Nmr_DataSource self
  @returns   the result
**/
Meth_Method Nmr_DataSource_GetCompressMethod(Nmr_DataSource self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompressMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getCompressMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getCompressMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiSet Nmr_DataSource_GetDataDims(Nmr_DataSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiSet Nmr_DataSource_GetDataSourceImages(Nmr_DataSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSourceImages");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getDataSourceImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getDataSourceImages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.dataStore

Data store where data are 
located
  @param  Nmr_DataSource self
  @returns   the result
**/
Dloc_NumericMatrix Nmr_DataSource_GetDataStore(Nmr_DataSource self)
{
  
  Dloc_NumericMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getDataStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getDataStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.dataType

FID, part-processed, processed, 
other,or whatever.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetDataType(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getDataType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getDataType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetDetails(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.experiment

parent link
  @param  Nmr_DataSource self
  @returns   the result
**/
Nmr_Experiment Nmr_DataSource_GetExperiment(Nmr_DataSource self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getExperiment' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_GetFieldNames(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_DataSource_GetFullKey(Nmr_DataSource self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getFullKey' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiBoolean Nmr_DataSource_GetInConstructor(Nmr_DataSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiBoolean Nmr_DataSource_GetIsDeleted(Nmr_DataSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.isNormalStorage

Can this file be read 
using the normal storage algorithms. Default true. E.g. Kay type P+/-N 
storage has False for this parameter
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiBoolean Nmr_DataSource_GetIsNormalStorage(Nmr_DataSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsNormalStorage");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getIsNormalStorage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getIsNormalStorage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.isSimulated

Is the DataSource simulated 
rather than measured?
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiBoolean Nmr_DataSource_GetIsSimulated(Nmr_DataSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @returns  Local object key
**/
ApiObject Nmr_DataSource_GetLocalKey(Nmr_DataSource self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.name

name of DataSource
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetName(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.noiseLevel

Estimated noise level for a 
spectrum, defined as the estimated standard deviation of the points from 
the baseplane/line.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiFloat Nmr_DataSource_GetNoiseLevel(Nmr_DataSource self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoiseLevel");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getNoiseLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getNoiseLevel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.numDim

Number of dimensions - may be 
different from the numDim of the Experiment to which the DataSource 
belongs (e.g. projections).
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiInteger Nmr_DataSource_GetNumDim(Nmr_DataSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getNumDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getNumDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.numShapes

Number of shapes in each 
matrix decomposition component. If set to zero the data are not 
decomposed by shape - which is the normal case.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiInteger Nmr_DataSource_GetNumShapes(Nmr_DataSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumShapes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getNumShapes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getNumShapes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.numSparsePoints

Number of time 
increments acquired. If nonzero, this signifies that the original data 
are sparsely sampled - otherwise it can be derived from the size of the 
grid. Note that this counts the number of time steps, a hypercomplex 
point counts as one point even if it requires eight real numbers to 
describe it.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiInteger Nmr_DataSource_GetNumSparsePoints(Nmr_DataSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumSparsePoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getNumSparsePoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getNumSparsePoints' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetPackageName(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getPackageName' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetPackageShortName(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.parent

link to parent object - synonym 
for experiment
  @param  Nmr_DataSource self
  @returns   the result
**/
Nmr_Experiment Nmr_DataSource_GetParent(Nmr_DataSource self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.peakLists

child link to class PeakList
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiSet Nmr_DataSource_GetPeakLists(Nmr_DataSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.processMethod

Method used for processing 
DataSource.
  @param  Nmr_DataSource self
  @returns   the result
**/
Meth_Method Nmr_DataSource_GetProcessMethod(Nmr_DataSource self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcessMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getProcessMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getProcessMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.processedFrom

DataSource used to create 
the current DataSource. If there are several 'ancestor' DataSources 
stored, this should link to the most recent ancestor. E.g. the pre-FT 
data if the current data were Fourier transformed.
  @param  Nmr_DataSource self
  @returns   the result
**/
Nmr_DataSource Nmr_DataSource_GetProcessedFrom(Nmr_DataSource self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcessedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getProcessedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getProcessedFrom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived directly 
from the current DataSource.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiSet Nmr_DataSource_GetProcessedTo(Nmr_DataSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getProcessedTo' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetQualifiedName(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.recordNumber

Number of record (starting 
at zero) of data record in dataStore. May or may not be relevant, 
depending on the type of dataStore
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiInteger Nmr_DataSource_GetRecordNumber(Nmr_DataSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRecordNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getRecordNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getRecordNumber' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
Impl_MemopsRoot Nmr_DataSource_GetRoot(Nmr_DataSource self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.scale

Scaling factor for intensities and 
volumes in a given datasource, for use when comparing intensities etc. 
between spectra. Intensities and volumes should be *multiplied* by scale 
before comparison, so that a scale of e.g. 10.0 means that the 
intensities are ten times larger than reflected by the numbers stored in 
the file.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiFloat Nmr_DataSource_GetScale(Nmr_DataSource self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScale");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiInteger Nmr_DataSource_GetSerial(Nmr_DataSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.signalLevel

'Standard' signal level, 
estimated according to signalLevelMethod. the snRatio is defined as 
signalLevel/noiseLevel.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiFloat Nmr_DataSource_GetSignalLevel(Nmr_DataSource self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSignalLevel");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getSignalLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getSignalLevel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.snMethod

Method used to determine S/N 
ratio
  @param  Nmr_DataSource self
  @returns   the result
**/
Meth_Method Nmr_DataSource_GetSnMethod(Nmr_DataSource self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSnMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getSnMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getSnMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute snRatio
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiFloat Nmr_DataSource_GetSnRatio(Nmr_DataSource self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSnRatio");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getSnRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getSnRatio' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiSet Nmr_DataSource_GetSparseSamplings(Nmr_DataSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSparseSamplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getSparseSamplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getSparseSamplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataSource.storageDetails

Text description of 
storage for cases not covered by standard algorithms (isNormalStorage 
false).
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiString Nmr_DataSource_GetStorageDetails(Nmr_DataSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStorageDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getStorageDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getStorageDetails' is not callable");
  
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
  @param  Nmr_DataSource self
  @returns   the result
**/
Impl_TopObject Nmr_DataSource_GetTopObject(Nmr_DataSource self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataSource Nmr_DataSource_Init(Nmr_Experiment parent, ApiMap attrlinks)
{
  
  return Nmr_Experiment_NewDataSource(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment parent
  @param  char * dataType
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
Nmr_DataSource Nmr_DataSource_Init_reqd(Nmr_Experiment parent, char * dataType, char * name, ApiInteger numDim)
{
  
  Nmr_DataSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__dataType = ApiString_New(dataType);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "dataType", api__dataType);
  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "numDim", numDim);
  
  obj = Nmr_DataSource_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__dataType);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataSourceImage
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataSourceImage Nmr_DataSource_NewDataSourceImage(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_DataSourceImage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataSourceImage");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newDataSourceImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newDataSourceImage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataSourceImage
  @param  Nmr_DataSource self
  @param  Dloc_MimeTypeDataStore dataStore
  @returns  the new object
**/
Nmr_DataSourceImage Nmr_DataSource_NewDataSourceImage_reqd(Nmr_DataSource self, Dloc_MimeTypeDataStore dataStore)
{
  
  Nmr_DataSourceImage  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataStore", dataStore);
  
  obj = Nmr_DataSource_NewDataSourceImage(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.FidDataDim
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_FidDataDim Nmr_DataSource_NewFidDataDim(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_FidDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newFidDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newFidDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newFidDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.FidDataDim
  @param  Nmr_DataSource self
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @param  ApiInteger numPointsValid
  @param  float valuePerPoint
  @returns  the new object
**/
Nmr_FidDataDim Nmr_DataSource_NewFidDataDim_reqd(Nmr_DataSource self, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints, ApiInteger numPointsValid, float valuePerPoint)
{
  
  Nmr_FidDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);
  ApiFloat api__valuePerPoint = ApiFloat_New(valuePerPoint);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  PyDict_SetItemString(attrlinks, "numPointsValid", numPointsValid);
  PyDict_SetItemString(attrlinks, "valuePerPoint", api__valuePerPoint);
  
  obj = Nmr_DataSource_NewFidDataDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  Py_DECREF(api__valuePerPoint);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_FreqDataDim Nmr_DataSource_NewFreqDataDim(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_FreqDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newFreqDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newFreqDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newFreqDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_DataSource self
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @param  ApiInteger numPointsOrig
  @param  float valuePerPoint
  @returns  the new object
**/
Nmr_FreqDataDim Nmr_DataSource_NewFreqDataDim_reqd(Nmr_DataSource self, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints, ApiInteger numPointsOrig, float valuePerPoint)
{
  
  Nmr_FreqDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);
  ApiFloat api__valuePerPoint = ApiFloat_New(valuePerPoint);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  PyDict_SetItemString(attrlinks, "numPointsOrig", numPointsOrig);
  PyDict_SetItemString(attrlinks, "valuePerPoint", api__valuePerPoint);
  
  obj = Nmr_DataSource_NewFreqDataDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  Py_DECREF(api__valuePerPoint);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakList Nmr_DataSource_NewPeakList(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource self
  @returns  the new object
**/
Nmr_PeakList Nmr_DataSource_NewPeakList_reqd(Nmr_DataSource self)
{
  
  Nmr_PeakList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_DataSource_NewPeakList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SampledDataDim Nmr_DataSource_NewSampledDataDim(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_SampledDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampledDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newSampledDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newSampledDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource self
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @returns  the new object
**/
Nmr_SampledDataDim Nmr_DataSource_NewSampledDataDim_reqd(Nmr_DataSource self, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints)
{
  
  Nmr_SampledDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  
  obj = Nmr_DataSource_NewSampledDataDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SparseSampling
  @param  Nmr_DataSource self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SparseSampling Nmr_DataSource_NewSparseSampling(Nmr_DataSource self, ApiMap attrlinks)
{
  
  Nmr_SparseSampling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSparseSampling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'newSparseSampling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'newSparseSampling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SparseSampling
  @param  Nmr_DataSource self
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_SparseSampling Nmr_DataSource_NewSparseSampling_reqd(Nmr_DataSource self, ApiInteger dim)
{
  
  Nmr_SparseSampling  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_DataSource_NewSparseSampling(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataSource self
  @param  Impl_ApplicationData value
**/
void *Nmr_DataSource_RemoveApplicationData(Nmr_DataSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @param  Nmr_DataSource value
**/
void *Nmr_DataSource_RemoveProcessedTo(Nmr_DataSource self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'removeProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'removeProcessedTo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.DataSource
  @param  Nmr_DataSource self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_DataSource_Set(Nmr_DataSource self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataSource self
  @param  Acco_AccessObject value
**/
void *Nmr_DataSource_SetAccess(Nmr_DataSource self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.activePeakList

Currently active peaklist 
for DataSource - i.e. PeakList where newly picked peaks will be placed.
  @param  Nmr_DataSource self
  @param  Nmr_PeakList value
**/
void *Nmr_DataSource_SetActivePeakList(Nmr_DataSource self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setActivePeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setActivePeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setActivePeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.analysisSpectrum

AnalysisSpectrum that 
points to Spectrum
  @param  Nmr_DataSource self
  @param  Anal_AnalysisSpectrum value
**/
void *Nmr_DataSource_SetAnalysisSpectrum(Nmr_DataSource self, Anal_AnalysisSpectrum value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setAnalysisSpectrum' is not callable");
  
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
  @param  Nmr_DataSource self
  @param  ApiList values
**/
void *Nmr_DataSource_SetApplicationData(Nmr_DataSource self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.compressMethod

Method used for data 
compression.
  @param  Nmr_DataSource self
  @param  Meth_Method value
**/
void *Nmr_DataSource_SetCompressMethod(Nmr_DataSource self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompressMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setCompressMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setCompressMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.dataStore

Data store where data are 
located
  @param  Nmr_DataSource self
  @param  Dloc_NumericMatrix value
**/
void *Nmr_DataSource_SetDataStore(Nmr_DataSource self, Dloc_NumericMatrix value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setDataStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setDataStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.dataType

FID, part-processed, processed, 
other,or whatever.
  @param  Nmr_DataSource self
  @param  ApiString value
**/
void *Nmr_DataSource_SetDataType(Nmr_DataSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setDataType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setDataType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_DataSource self
  @param  ApiString value
**/
void *Nmr_DataSource_SetDetails(Nmr_DataSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.isNormalStorage

Can this file be read 
using the normal storage algorithms. Default true. E.g. Kay type P+/-N 
storage has False for this parameter
  @param  Nmr_DataSource self
  @param  ApiBoolean value
**/
void *Nmr_DataSource_SetIsNormalStorage(Nmr_DataSource self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsNormalStorage");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setIsNormalStorage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setIsNormalStorage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.isSimulated

Is the DataSource simulated 
rather than measured?
  @param  Nmr_DataSource self
  @param  ApiBoolean value
**/
void *Nmr_DataSource_SetIsSimulated(Nmr_DataSource self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setIsSimulated' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.name

name of DataSource
  @param  Nmr_DataSource self
  @param  ApiString value
**/
void *Nmr_DataSource_SetName(Nmr_DataSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.noiseLevel

Estimated noise level for a 
spectrum, defined as the estimated standard deviation of the points from 
the baseplane/line.
  @param  Nmr_DataSource self
  @param  ApiFloat value
**/
void *Nmr_DataSource_SetNoiseLevel(Nmr_DataSource self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoiseLevel");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setNoiseLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setNoiseLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.numDim

Number of dimensions - may be 
different from the numDim of the Experiment to which the DataSource 
belongs (e.g. projections).
  @param  Nmr_DataSource self
  @param  ApiInteger value
**/
void *Nmr_DataSource_SetNumDim(Nmr_DataSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setNumDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setNumDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.numShapes

Number of shapes in each 
matrix decomposition component. If set to zero the data are not 
decomposed by shape - which is the normal case.
  @param  Nmr_DataSource self
  @param  ApiInteger value
**/
void *Nmr_DataSource_SetNumShapes(Nmr_DataSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumShapes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setNumShapes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setNumShapes' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.numSparsePoints

Number of time 
increments acquired. If nonzero, this signifies that the original data 
are sparsely sampled - otherwise it can be derived from the size of the 
grid. Note that this counts the number of time steps, a hypercomplex 
point counts as one point even if it requires eight real numbers to 
describe it.
  @param  Nmr_DataSource self
  @param  ApiInteger value
**/
void *Nmr_DataSource_SetNumSparsePoints(Nmr_DataSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumSparsePoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setNumSparsePoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setNumSparsePoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.processMethod

Method used for processing 
DataSource.
  @param  Nmr_DataSource self
  @param  Meth_Method value
**/
void *Nmr_DataSource_SetProcessMethod(Nmr_DataSource self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcessMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setProcessMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setProcessMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.processedFrom

DataSource used to create 
the current DataSource. If there are several 'ancestor' DataSources 
stored, this should link to the most recent ancestor. E.g. the pre-FT 
data if the current data were Fourier transformed.
  @param  Nmr_DataSource self
  @param  Nmr_DataSource value
**/
void *Nmr_DataSource_SetProcessedFrom(Nmr_DataSource self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcessedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setProcessedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setProcessedFrom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived directly 
from the current DataSource.
  @param  Nmr_DataSource self
  @param  ApiSet values
**/
void *Nmr_DataSource_SetProcessedTo(Nmr_DataSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setProcessedTo' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.recordNumber

Number of record (starting 
at zero) of data record in dataStore. May or may not be relevant, 
depending on the type of dataStore
  @param  Nmr_DataSource self
  @param  ApiInteger value
**/
void *Nmr_DataSource_SetRecordNumber(Nmr_DataSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRecordNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setRecordNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setRecordNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.scale

Scaling factor for intensities and 
volumes in a given datasource, for use when comparing intensities etc. 
between spectra. Intensities and volumes should be *multiplied* by scale 
before comparison, so that a scale of e.g. 10.0 means that the 
intensities are ten times larger than reflected by the numbers stored in 
the file.
  @param  Nmr_DataSource self
  @param  ApiFloat value
**/
void *Nmr_DataSource_SetScale(Nmr_DataSource self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScale");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_DataSource self
  @param  ApiInteger value
**/
void *Nmr_DataSource_SetSerial(Nmr_DataSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.signalLevel

'Standard' signal level, 
estimated according to signalLevelMethod. the snRatio is defined as 
signalLevel/noiseLevel.
  @param  Nmr_DataSource self
  @param  ApiFloat value
**/
void *Nmr_DataSource_SetSignalLevel(Nmr_DataSource self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSignalLevel");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setSignalLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setSignalLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.snMethod

Method used to determine S/N 
ratio
  @param  Nmr_DataSource self
  @param  Meth_Method value
**/
void *Nmr_DataSource_SetSnMethod(Nmr_DataSource self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSnMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setSnMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setSnMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataSource.storageDetails

Text description of 
storage for cases not covered by standard algorithms (isNormalStorage 
false).
  @param  Nmr_DataSource self
  @param  ApiString value
**/
void *Nmr_DataSource_SetStorageDetails(Nmr_DataSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStorageDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'setStorageDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'setStorageDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DataSource.dataDims

child link
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_SortedDataDims(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'sortedDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'sortedDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DataSource.dataSourceImages

child link to class 
DataSourceImage
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_SortedDataSourceImages(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataSourceImages");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'sortedDataSourceImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'sortedDataSourceImages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DataSource.peakLists

child link to class 
PeakList
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_SortedPeakLists(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'sortedPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'sortedPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DataSource.processedTo

DataSources derived 
directly from the current DataSource.
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_SortedProcessedTo(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProcessedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'sortedProcessedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'sortedProcessedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DataSource.sparseSamplings

child link to class 
SparseSampling
  @param  Nmr_DataSource self
  @returns   the result
**/
ApiList Nmr_DataSource_SortedSparseSamplings(Nmr_DataSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSparseSamplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataSource: cannot find method 'sortedSparseSamplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataSource: method 'sortedSparseSamplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
