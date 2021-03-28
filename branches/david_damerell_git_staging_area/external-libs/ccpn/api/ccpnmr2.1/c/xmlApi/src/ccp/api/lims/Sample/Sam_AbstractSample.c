
#include "ccp.h"

/*
  General information on the sample or reagent.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  Impl_ApplicationData value
**/
void *Sam_AbstractSample_AddApplicationData(Sam_AbstractSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  Clas_HazardPhrase value
**/
void *Sam_AbstractSample_AddHazardPhrase(Sam_AbstractSample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'addHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'addHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_AbstractSample self
  @param  Clas_SampleCategory value
**/
void *Sam_AbstractSample_AddSampleCategory(Sam_AbstractSample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'addSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'addSampleCategory' is not callable");
  
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
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_AbstractSample_FindAllApplicationData(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_AbstractSample_FindAllApplicationData_keyval0(Sam_AbstractSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_AbstractSample_FindAllApplicationData_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_AbstractSample_FindAllApplicationData_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_AbstractSample_FindAllApplicationData_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
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
ApiList Sam_AbstractSample_FindAllApplicationData_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllHazardPhrases(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllHazardPhrases_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllHazardPhrases_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllHazardPhrases_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllHazardPhrases_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllHazardPhrases_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllLocalRiskPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllLocalRiskPhrases_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllRPhrases(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllRPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllRPhrases_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllRPhrases_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllRPhrases_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllRPhrases_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllRPhrases_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSPhrases(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllSPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSPhrases_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSPhrases_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSPhrases_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSPhrases_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllSPhrases_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleCategories(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleCategories_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleCategories_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleCategories_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleCategories_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllSampleCategories_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleComponents(Sam_AbstractSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findAllSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findAllSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleComponents_keyval0(Sam_AbstractSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleComponents_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleComponents_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_AbstractSample_FindAllSampleComponents_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
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
ApiSet Sam_AbstractSample_FindAllSampleComponents_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData(Sam_AbstractSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData_keyval0(Sam_AbstractSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
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
Impl_ApplicationData Sam_AbstractSample_FindFirstApplicationData_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase(Sam_AbstractSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstHazardPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase_keyval0(Sam_AbstractSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
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
Clas_HazardPhrase Sam_AbstractSample_FindFirstHazardPhrase_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase(Sam_AbstractSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLocalRiskPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstLocalRiskPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstLocalRiskPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase_keyval0(Sam_AbstractSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
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
Clas_HazardPhrase Sam_AbstractSample_FindFirstLocalRiskPhrase_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase(Sam_AbstractSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstRPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstRPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase_keyval0(Sam_AbstractSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
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
Clas_HazardPhrase Sam_AbstractSample_FindFirstRPhrase_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase(Sam_AbstractSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstSPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstSPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase_keyval0(Sam_AbstractSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
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
Clas_HazardPhrase Sam_AbstractSample_FindFirstSPhrase_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory(Sam_AbstractSample self, ApiMap conditions)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstSampleCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory_keyval0(Sam_AbstractSample self)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
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
Clas_SampleCategory Sam_AbstractSample_FindFirstSampleCategory_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent(Sam_AbstractSample self, ApiMap conditions)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'findFirstSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'findFirstSampleComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent_keyval0(Sam_AbstractSample self)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_AbstractSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent_keyval1(Sam_AbstractSample self, char * key, ApiObject value)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_AbstractSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent_keyval2(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_AbstractSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent_keyval3(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_AbstractSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_AbstractSample self
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
Sam_SampleComponent Sam_AbstractSample_FindFirstSampleComponent_keyval4(Sam_AbstractSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_AbstractSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_AbstractSample self
  @returns   the result
**/
Acco_AccessObject Sam_AbstractSample_GetAccess(Sam_AbstractSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getAccess' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
Acco_AccessObject Sam_AbstractSample_GetActiveAccess(Sam_AbstractSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getActiveAccess' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_GetApplicationData(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Sample.AbstractSample
  @param  Sam_AbstractSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Sam_AbstractSample Sam_AbstractSample_GetByKey(Sam_AbstractSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Sam_AbstractSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getByKey' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetClassName(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetDetails(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getDetails' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_GetFieldNames(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Sample.AbstractSample
  @param  Sam_AbstractSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Sam_AbstractSample_GetFullKey(Sam_AbstractSample self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetHazardPhrases(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getHazardPhrases' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiBoolean Sam_AbstractSample_GetInConstructor(Sam_AbstractSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiFloat Sam_AbstractSample_GetIonicStrength(Sam_AbstractSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getIonicStrength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiBoolean Sam_AbstractSample_GetIsActive(Sam_AbstractSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getIsActive' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiBoolean Sam_AbstractSample_GetIsDeleted(Sam_AbstractSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiBoolean Sam_AbstractSample_GetIsHazard(Sam_AbstractSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getIsHazard' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Sample.AbstractSample
  @param  Sam_AbstractSample self
  @returns  Local object key
**/
ApiObject Sam_AbstractSample_GetLocalKey(Sam_AbstractSample self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link localRiskPhrases
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetLocalRiskPhrases(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getLocalRiskPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetName(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getName' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetPackageName(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getPackageName' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetPackageShortName(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.parent

link to parent object - 
synonym for sampleStore
  @param  Sam_AbstractSample self
  @returns   the result
**/
Sam_SampleStore Sam_AbstractSample_GetParent(Sam_AbstractSample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiFloat Sam_AbstractSample_GetPh(Sam_AbstractSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getPh' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiString Sam_AbstractSample_GetQualifiedName(Sam_AbstractSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link rPhrases
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetRPhrases(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getRPhrases' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
Impl_MemopsRoot Sam_AbstractSample_GetRoot(Sam_AbstractSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link sPhrases
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetSPhrases(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getSPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetSampleCategories(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sampleComponents

child link to 
class SampleComponent
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiSet Sam_AbstractSample_GetSampleComponents(Sam_AbstractSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sampleStore

parent link
  @param  Sam_AbstractSample self
  @returns   the result
**/
Sam_SampleStore Sam_AbstractSample_GetSampleStore(Sam_AbstractSample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getSampleStore' is not callable");
  
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
  @param  Sam_AbstractSample self
  @returns   the result
**/
Impl_TopObject Sam_AbstractSample_GetTopObject(Sam_AbstractSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.SampleComponent
  @param  Sam_AbstractSample self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_SampleComponent Sam_AbstractSample_NewSampleComponent(Sam_AbstractSample self, ApiMap attrlinks)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'newSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'newSampleComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.SampleComponent
  @param  Sam_AbstractSample self
  @param  Refs_AbstractComponent refComponent
  @returns  the new object
**/
Sam_SampleComponent Sam_AbstractSample_NewSampleComponent_reqd(Sam_AbstractSample self, Refs_AbstractComponent refComponent)
{
  
  Sam_SampleComponent  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "refComponent", refComponent);
  
  obj = Sam_AbstractSample_NewSampleComponent(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_AbstractSample self
  @param  Impl_ApplicationData value
**/
void *Sam_AbstractSample_RemoveApplicationData(Sam_AbstractSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  Clas_HazardPhrase value
**/
void *Sam_AbstractSample_RemoveHazardPhrase(Sam_AbstractSample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'removeHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'removeHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @param  Clas_SampleCategory value
**/
void *Sam_AbstractSample_RemoveSampleCategory(Sam_AbstractSample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'removeSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'removeSampleCategory' is not callable");
  
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
  @param  Sam_AbstractSample self
  @param  Acco_AccessObject value
**/
void *Sam_AbstractSample_SetAccess(Sam_AbstractSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setAccess' is not callable");
  
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
  @param  Sam_AbstractSample self
  @param  ApiList values
**/
void *Sam_AbstractSample_SetApplicationData(Sam_AbstractSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_AbstractSample self
  @param  ApiString value
**/
void *Sam_AbstractSample_SetDetails(Sam_AbstractSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @param  ApiSet values
**/
void *Sam_AbstractSample_SetHazardPhrases(Sam_AbstractSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setHazardPhrases' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_AbstractSample self
  @param  ApiFloat value
**/
void *Sam_AbstractSample_SetIonicStrength(Sam_AbstractSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setIonicStrength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_AbstractSample self
  @param  ApiBoolean value
**/
void *Sam_AbstractSample_SetIsActive(Sam_AbstractSample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setIsActive' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_AbstractSample self
  @param  ApiBoolean value
**/
void *Sam_AbstractSample_SetIsHazard(Sam_AbstractSample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setIsHazard' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_AbstractSample self
  @param  ApiString value
**/
void *Sam_AbstractSample_SetName(Sam_AbstractSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_AbstractSample self
  @param  ApiFloat value
**/
void *Sam_AbstractSample_SetPh(Sam_AbstractSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setPh' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_AbstractSample self
  @param  ApiSet values
**/
void *Sam_AbstractSample_SetSampleCategories(Sam_AbstractSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'setSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'setSampleCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedHazardPhrases(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedLocalRiskPhrases(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedLocalRiskPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedRPhrases(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedRPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedSPhrases(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedSPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedSampleCategories(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_AbstractSample self
  @returns   the result
**/
ApiList Sam_AbstractSample_SortedSampleComponents(Sam_AbstractSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.AbstractSample: cannot find method 'sortedSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.AbstractSample: method 'sortedSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
