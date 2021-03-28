
#include "ccp.h"

/*
  Description of method or procedure, be it computational (calculation or processing) or real-world (e.g. purification).
*/

/* package ccp.api.general.Method */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  Impl_ApplicationData value
**/
void *Meth_Method_AddApplicationData(Meth_Method self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @param  Inst_Column value
**/
void *Meth_Method_AddColumn(Meth_Method self, Inst_Column value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addColumn");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addColumn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addColumn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @param  Nmr_Experiment value
**/
void *Meth_Method_AddDerivedNmrExperiment(Meth_Method self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDerivedNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addDerivedNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addDerivedNmrExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @param  Expe_Experiment value
**/
void *Meth_Method_AddExperiment(Meth_Method self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
void *Meth_Method_AddFitPeakList(Meth_Method self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addFitPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addFitPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addFitPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
void *Meth_Method_AddIntensPeakList(Meth_Method self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIntensPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addIntensPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addIntensPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  Nmr_Peak value
**/
void *Meth_Method_AddPeak(Meth_Method self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  Nmr_DataSource value
**/
void *Meth_Method_AddSnDataSource(Meth_Method self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSnDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addSnDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addSnDataSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureAnalysis value
**/
void *Meth_Method_AddStructureAnalysis(Meth_Method self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureGeneration value
**/
void *Meth_Method_AddStructureGeneration(Meth_Method self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'addStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'addStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean complete
**/
void *Meth_Method_CheckAllValid(Meth_Method self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean complete
**/
void *Meth_Method_CheckValid(Meth_Method self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'checkValid' is not callable");
  
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
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Meth_Method_FindAllApplicationData(Meth_Method self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllApplicationData' is not callable");
  
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
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiList Meth_Method_FindAllApplicationData_keyval0(Meth_Method self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Meth_Method_FindAllApplicationData_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Meth_Method_FindAllApplicationData_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Meth_Method_FindAllApplicationData_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
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
ApiList Meth_Method_FindAllApplicationData_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCitations(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCitations_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCitations_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCitations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCitations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllCitations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllColumns(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllColumns");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllColumns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllColumns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllColumns_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllColumns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllColumns_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllColumns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllColumns_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllColumns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllColumns_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllColumns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllColumns_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllColumns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCompressDataSources(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCompressDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllCompressDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllCompressDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCompressDataSources_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllCompressDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCompressDataSources_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllCompressDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCompressDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllCompressDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllCompressDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllCompressDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllCompressDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllCompressDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraintLists(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraintLists_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraintLists_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraintLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraintLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllConstraintLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraints(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraints");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraints_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraints_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraints_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllConstraints_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllConstraints_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDerivations(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDerivations_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDerivations_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDerivations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDerivations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllDataDerivations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllDataDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDims(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDims");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDims_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDims_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDims_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDataDims_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllDataDims_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedDataLists(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedDataLists_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedDataLists_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedDataLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedDataLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllDerivedDataLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedNmrExperiments(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllDerivedNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllDerivedNmrExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllDerivedNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllDerivedNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllDerivedNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllDerivedNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllDerivedNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllExperiments(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllExperiments_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllExperiments_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllExperiments_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllExperiments_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllExperiments_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllFitPeakLists(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllFitPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllFitPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllFitPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllFitPeakLists_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllFitPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllFitPeakLists_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllFitPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllFitPeakLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllFitPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllFitPeakLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllFitPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllFitPeakLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllFitPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllIntensPeakLists(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIntensPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllIntensPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllIntensPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllIntensPeakLists_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllIntensPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllIntensPeakLists_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllIntensPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllIntensPeakLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllIntensPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllIntensPeakLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllIntensPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllIntensPeakLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllIntensPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurementLists(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurementLists_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurementLists_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurementLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurementLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllMeasurementLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurements(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurements_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurements_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurements_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllMeasurements_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllMeasurements_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllParameters(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllParameters_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllParameters_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllParameters_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllParameters_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllParameters_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeakIntensities(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeakIntensities_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeakIntensities_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeakIntensities_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeakIntensities_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllPeakIntensities_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllPeakIntensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeaks(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeaks_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeaks_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeaks_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllPeaks_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllPeaks_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllProcessDataSources(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProcessDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllProcessDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllProcessDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllProcessDataSources_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllProcessDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllProcessDataSources_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllProcessDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllProcessDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllProcessDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllProcessDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllProcessDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllProcessDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllProcessDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllSnDataSources(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSnDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllSnDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllSnDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllSnDataSources_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllSnDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllSnDataSources_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllSnDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllSnDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllSnDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllSnDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllSnDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllSnDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllSnDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureAnalyses(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureAnalyses_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureAnalyses_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureAnalyses_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureAnalyses_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllStructureAnalyses_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureGenerations(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureGenerations_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureGenerations_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureGenerations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllStructureGenerations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllStructureGenerations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllViolations(Meth_Method self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findAllViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findAllViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllViolations_keyval0(Meth_Method self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllViolations_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllViolations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Meth_Method_FindAllViolations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
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
ApiSet Meth_Method_FindAllViolations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Meth_Method_FindFirstApplicationData(Meth_Method self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstApplicationData' is not callable");
  
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
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval0(Meth_Method self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
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
Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Meth_Method_FindFirstCitation(Meth_Method self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Meth_Method_FindFirstCitation_keyval0(Meth_Method self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Meth_Method_FindFirstCitation_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Meth_Method_FindFirstCitation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Meth_Method_FindFirstCitation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
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
Cita_Citation Meth_Method_FindFirstCitation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_Column Meth_Method_FindFirstColumn(Meth_Method self, ApiMap conditions)
{
  
  Inst_Column obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstColumn");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstColumn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstColumn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Inst_Column Meth_Method_FindFirstColumn_keyval0(Meth_Method self)
{
  
  Inst_Column  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstColumn(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_Column Meth_Method_FindFirstColumn_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Inst_Column  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstColumn(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_Column Meth_Method_FindFirstColumn_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_Column  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstColumn(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_Column Meth_Method_FindFirstColumn_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_Column  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstColumn(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
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
Inst_Column Meth_Method_FindFirstColumn_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_Column  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstColumn(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstCompressDataSource(Meth_Method self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCompressDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstCompressDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstCompressDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval0(Meth_Method self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstCompressDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstCompressDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstCompressDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstCompressDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
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
Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstCompressDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint(Meth_Method self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraint");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList(Meth_Method self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstConstraintList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval0(Meth_Method self)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
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
Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval0(Meth_Method self)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
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
Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation(Meth_Method self, ApiMap conditions)
{
  
  Nmr_AbstractDataDerivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDerivation");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstDataDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstDataDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval0(Meth_Method self)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
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
Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDerivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstDataDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim(Meth_Method self, ApiMap conditions)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDim");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval0(Meth_Method self)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
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
Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList(Meth_Method self, ApiMap conditions)
{
  
  Nmr_DerivedDataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedDataList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstDerivedDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstDerivedDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval0(Meth_Method self)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
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
Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment(Meth_Method self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstDerivedNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstDerivedNmrExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval0(Meth_Method self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstDerivedNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstDerivedNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstDerivedNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstDerivedNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
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
Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstDerivedNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Meth_Method_FindFirstExperiment(Meth_Method self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Meth_Method_FindFirstExperiment_keyval0(Meth_Method self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Meth_Method_FindFirstExperiment_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Meth_Method_FindFirstExperiment_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Meth_Method_FindFirstExperiment_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
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
Expe_Experiment Meth_Method_FindFirstExperiment_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstFitPeakList(Meth_Method self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstFitPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstFitPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstFitPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval0(Meth_Method self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstFitPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstFitPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstFitPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstFitPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
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
Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstFitPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstIntensPeakList(Meth_Method self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIntensPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstIntensPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstIntensPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval0(Meth_Method self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstIntensPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstIntensPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstIntensPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstIntensPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
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
Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstIntensPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement(Meth_Method self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList(Meth_Method self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval0(Meth_Method self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
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
Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval0(Meth_Method self)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
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
Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Parameter Meth_Method_FindFirstParameter(Meth_Method self, ApiMap conditions)
{
  
  Meth_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Meth_Parameter Meth_Method_FindFirstParameter_keyval0(Meth_Method self)
{
  
  Meth_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Parameter Meth_Method_FindFirstParameter_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Meth_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Parameter Meth_Method_FindFirstParameter_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Parameter Meth_Method_FindFirstParameter_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
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
Meth_Parameter Meth_Method_FindFirstParameter_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Meth_Method_FindFirstPeak(Meth_Method self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity(Meth_Method self, ApiMap conditions)
{
  
  Nmr_PeakIntensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakIntensity");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstPeakIntensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstPeakIntensity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval0(Meth_Method self)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
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
Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakIntensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstPeakIntensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Meth_Method_FindFirstPeak_keyval0(Meth_Method self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Meth_Method_FindFirstPeak_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Meth_Method_FindFirstPeak_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Meth_Method_FindFirstPeak_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
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
Nmr_Peak Meth_Method_FindFirstPeak_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstProcessDataSource(Meth_Method self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProcessDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstProcessDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstProcessDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval0(Meth_Method self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstProcessDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstProcessDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstProcessDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstProcessDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
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
Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstProcessDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstSnDataSource(Meth_Method self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSnDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstSnDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstSnDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval0(Meth_Method self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstSnDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstSnDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstSnDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstSnDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
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
Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstSnDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis(Meth_Method self, ApiMap conditions)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstStructureAnalysis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval0(Meth_Method self)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
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
Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration(Meth_Method self, ApiMap conditions)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstStructureGeneration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval0(Meth_Method self)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
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
Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Meth_Method_FindFirstViolation(Meth_Method self, ApiMap conditions)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolation");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'findFirstViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'findFirstViolation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Meth_Method_FindFirstViolation_keyval0(Meth_Method self)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Meth_Method_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Meth_Method_FindFirstViolation_keyval1(Meth_Method self, char * key, ApiObject value)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Meth_Method_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Meth_Method_FindFirstViolation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Meth_Method_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Meth_Method_FindFirstViolation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Meth_Method_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
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
Nmrc_Violation Meth_Method_FindFirstViolation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Meth_Method_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Meth_Method_Get(Meth_Method self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Method self
  @returns   the result
**/
Acco_AccessObject Meth_Method_GetAccess(Meth_Method self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getAccess' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
Acco_AccessObject Meth_Method_GetActiveAccess(Meth_Method self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getActiveAccess' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_GetApplicationData(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Method.Method
  @param  Meth_Method self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Meth_Method Meth_Method_GetByKey(Meth_Method self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetCitations(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getCitations' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetClassName(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetColumns(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColumns");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getColumns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getColumns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.compressDataSources

Nmr DataSources 
compresed with Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetCompressDataSources(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompressDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getCompressDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getCompressDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetConstraintLists(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetConstraints(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraints");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetDataDerivations(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetDataDims(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDims");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetDerivedDataLists(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetDerivedNmrExperiments(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getDerivedNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getDerivedNmrExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.details

Free text, for notes, 
explanatory comments, etc.
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetDetails(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetExperiments(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getExperiments' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_GetFieldNames(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetFitPeakLists(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFitPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getFitPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getFitPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Meth_Method_GetFullKey(Meth_Method self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getFullKey' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiBoolean Meth_Method_GetInConstructor(Meth_Method self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.instrument

Instrument associated to a 
given method.
  @param  Meth_Method self
  @returns   the result
**/
Inst_Instrument Meth_Method_GetInstrument(Meth_Method self)
{
  
  Inst_Instrument obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrument");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getInstrument' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetIntensPeakLists(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntensPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getIntensPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getIntensPeakLists' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiBoolean Meth_Method_GetIsDeleted(Meth_Method self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Method.Method
  @param  Meth_Method self
  @returns  Local object key
**/
ApiObject Meth_Method_GetLocalKey(Meth_Method self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetMeasurementLists(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.measurements

Measurements calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetMeasurements(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.methodStore

parent link
  @param  Meth_Method self
  @returns   the result
**/
Meth_MethodStore Meth_Method_GetMethodStore(Meth_Method self)
{
  
  Meth_MethodStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethodStore");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getMethodStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getMethodStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.name

Method name
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetName(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getName' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetPackageName(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getPackageName' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetPackageShortName(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetParameters(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.parent

link to parent object - 
synonym for methodStore
  @param  Meth_Method self
  @returns   the result
**/
Meth_MethodStore Meth_Method_GetParent(Meth_Method self)
{
  
  Meth_MethodStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetPeakIntensities(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetPeaks(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.procedure

Description of the 
procedure carried out. Typically in the form of a script executable by 
the relevant Software, but could be a more general description.
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetProcedure(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcedure");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getProcedure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetProcessDataSources(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcessDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getProcessDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getProcessDataSources' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetQualifiedName(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getQualifiedName' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
Impl_MemopsRoot Meth_Method_GetRoot(Meth_Method self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Meth_Method self
  @returns   the result
**/
ApiInteger Meth_Method_GetSerial(Meth_Method self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetSnDataSources(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSnDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getSnDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getSnDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.software

Software used to execute 
method. Method.procedure will frequently be a script directly executable 
by the Software.
  @param  Meth_Method self
  @returns   the result
**/
Meth_Software Meth_Method_GetSoftware(Meth_Method self)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetStructureAnalyses(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetStructureGenerations(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.task

Operation caried out or result 
calculated e.g. 'Peak intensity', 'T1 fit', 'NMR processing', 'linear 
prediction', 'HPLC purification'.
  @param  Meth_Method self
  @returns   the result
**/
ApiString Meth_Method_GetTask(Meth_Method self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTask");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getTask'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getTask' is not callable");
  
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
  @param  Meth_Method self
  @returns   the result
**/
Impl_TopObject Meth_Method_GetTopObject(Meth_Method self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Method.Method.violations

Nmr Constraint violations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiSet Meth_Method_GetViolations(Meth_Method self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'getViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'getViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Method.Method
  @param  Meth_MethodStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Meth_Method Meth_Method_Init(Meth_MethodStore parent, ApiMap attrlinks)
{
  
  return Meth_MethodStore_NewMethod(parent, attrlinks);
}

/**
  Constructor for ccp.general.Method.Method
  @param  Meth_MethodStore parent
  @returns  the new object
**/
Meth_Method Meth_Method_Init_reqd(Meth_MethodStore parent)
{
  
  Meth_Method  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Meth_Method_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.general.Method.Parameter
  @param  Meth_Method self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Meth_Parameter Meth_Method_NewParameter(Meth_Method self, ApiMap attrlinks)
{
  
  Meth_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newParameter");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'newParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'newParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Method.Parameter
  @param  Meth_Method self
  @param  char * name
  @returns  the new object
**/
Meth_Parameter Meth_Method_NewParameter_reqd(Meth_Method self, char * name)
{
  
  Meth_Parameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Meth_Method_NewParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  Impl_ApplicationData value
**/
void *Meth_Method_RemoveApplicationData(Meth_Method self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  Inst_Column value
**/
void *Meth_Method_RemoveColumn(Meth_Method self, Inst_Column value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeColumn");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeColumn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeColumn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  Nmr_Experiment value
**/
void *Meth_Method_RemoveDerivedNmrExperiment(Meth_Method self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDerivedNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeDerivedNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeDerivedNmrExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  Expe_Experiment value
**/
void *Meth_Method_RemoveExperiment(Meth_Method self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
void *Meth_Method_RemoveFitPeakList(Meth_Method self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFitPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeFitPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeFitPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
void *Meth_Method_RemoveIntensPeakList(Meth_Method self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIntensPeakList");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeIntensPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeIntensPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  Nmr_Peak value
**/
void *Meth_Method_RemovePeak(Meth_Method self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  Nmr_DataSource value
**/
void *Meth_Method_RemoveSnDataSource(Meth_Method self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSnDataSource");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeSnDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeSnDataSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  Nmr_StructureAnalysis value
**/
void *Meth_Method_RemoveStructureAnalysis(Meth_Method self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureGeneration value
**/
void *Meth_Method_RemoveStructureGeneration(Meth_Method self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'removeStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'removeStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiString name
  @param  ApiObject value
**/
void *Meth_Method_Set(Meth_Method self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Method self
  @param  Acco_AccessObject value
**/
void *Meth_Method_SetAccess(Meth_Method self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setAccess' is not callable");
  
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
  @param  Meth_Method self
  @param  ApiList values
**/
void *Meth_Method_SetApplicationData(Meth_Method self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetCitations(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetColumns(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColumns");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setColumns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setColumns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.compressDataSources

Nmr DataSources 
compresed with Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetCompressDataSources(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompressDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setCompressDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setCompressDataSources' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetConstraintLists(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setConstraintLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetConstraints(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraints");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetDataDerivations(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setDataDerivations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetDataDims(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDims");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setDataDims' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetDerivedDataLists(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setDerivedDataLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetDerivedNmrExperiments(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setDerivedNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setDerivedNmrExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.details

Free text, for notes, 
explanatory comments, etc.
  @param  Meth_Method self
  @param  ApiString value
**/
void *Meth_Method_SetDetails(Meth_Method self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetExperiments(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetFitPeakLists(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFitPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setFitPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setFitPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.instrument

Instrument associated to a 
given method.
  @param  Meth_Method self
  @param  Inst_Instrument value
**/
void *Meth_Method_SetInstrument(Meth_Method self, Inst_Instrument value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrument");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setInstrument'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setInstrument' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetIntensPeakLists(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntensPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setIntensPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setIntensPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetMeasurementLists(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setMeasurementLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.measurements

Measurements calculated 
using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetMeasurements(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurements");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setMeasurements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.name

Method name
  @param  Meth_Method self
  @param  ApiString value
**/
void *Meth_Method_SetName(Meth_Method self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetPeakIntensities(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setPeakIntensities' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetPeaks(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.procedure

Description of the 
procedure carried out. Typically in the form of a script executable by 
the relevant Software, but could be a more general description.
  @param  Meth_Method self
  @param  ApiString value
**/
void *Meth_Method_SetProcedure(Meth_Method self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcedure");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setProcedure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setProcedure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetProcessDataSources(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcessDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setProcessDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setProcessDataSources' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Meth_Method self
  @param  ApiInteger value
**/
void *Meth_Method_SetSerial(Meth_Method self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetSnDataSources(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSnDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setSnDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setSnDataSources' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.software

Software used to execute 
method. Method.procedure will frequently be a script directly executable 
by the Software.
  @param  Meth_Method self
  @param  Meth_Software value
**/
void *Meth_Method_SetSoftware(Meth_Method self, Meth_Software value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetStructureAnalyses(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setStructureAnalyses' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetStructureGenerations(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setStructureGenerations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.task

Operation caried out or result 
calculated e.g. 'Peak intensity', 'T1 fit', 'NMR processing', 'linear 
prediction', 'HPLC purification'.
  @param  Meth_Method self
  @param  ApiString value
**/
void *Meth_Method_SetTask(Meth_Method self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTask");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setTask'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setTask' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Method.Method.violations

Nmr Constraint violations 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
void *Meth_Method_SetViolations(Meth_Method self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setViolations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'setViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'setViolations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedCitations(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedColumns(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedColumns");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedColumns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedColumns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedCompressDataSources(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCompressDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedCompressDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedCompressDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedConstraintLists(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedConstraints(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraints");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedDataDerivations(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDerivations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedDataDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedDataDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedDataDims(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDims");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedDerivedDataLists(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedDerivedNmrExperiments(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedDerivedNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedDerivedNmrExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedExperiments(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedFitPeakLists(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedFitPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedFitPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedFitPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedIntensPeakLists(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIntensPeakLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedIntensPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedIntensPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedMeasurementLists(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedMeasurements(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedParameters(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedPeakIntensities(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakIntensities");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedPeakIntensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedPeakIntensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedPeaks(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedProcessDataSources(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProcessDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedProcessDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedProcessDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedSnDataSources(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSnDataSources");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedSnDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedSnDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedStructureAnalyses(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedStructureGenerations(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
ApiList Meth_Method_SortedViolations(Meth_Method self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolations");
  
  if (!method)
    return raiseApiException("ccp.general.Method.Method: cannot find method 'sortedViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Method.Method: method 'sortedViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
