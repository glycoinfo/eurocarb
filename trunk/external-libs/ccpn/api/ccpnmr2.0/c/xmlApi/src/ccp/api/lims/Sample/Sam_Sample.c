
#include "ccp.h"

/*
  The information on the sample. The sample conforms to a particular sample reference information. The sample is the contents that has been used during an experiment that contains the sample components which is located in an Holder.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  Impl_ApplicationData value
**/
void *Sam_Sample_AddApplicationData(Sam_Sample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  Cryz_DropAnnotation value
**/
void *Sam_Sample_AddDropAnnotation(Sam_Sample self, Cryz_DropAnnotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addDropAnnotation' is not callable");
  
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
  @param  Sam_Sample self
  @param  Clas_HazardPhrase value
**/
void *Sam_Sample_AddHazardPhrase(Sam_Sample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  Expe_InputSample value
**/
void *Sam_Sample_AddInputSample(Sam_Sample self, Expe_InputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @param  Nmr_Experiment value
**/
void *Sam_Sample_AddNmrExperiment(Sam_Sample self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addNmrExperiment' is not callable");
  
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
  @param  Sam_Sample self
  @param  Clas_SampleCategory value
**/
void *Sam_Sample_AddSampleCategory(Sam_Sample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'addSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'addSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiBoolean complete
**/
void *Sam_Sample_CheckAllValid(Sam_Sample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiBoolean complete
**/
void *Sam_Sample_CheckValid(Sam_Sample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'checkValid' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_Sample_FindAllApplicationData(Sam_Sample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllApplicationData' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_Sample_FindAllApplicationData_keyval0(Sam_Sample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_Sample_FindAllApplicationData_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_Sample_FindAllApplicationData_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_Sample_FindAllApplicationData_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
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
ApiList Sam_Sample_FindAllApplicationData_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllDropAnnotations(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllDropAnnotations_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllDropAnnotations_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllDropAnnotations_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllDropAnnotations_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllDropAnnotations_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllHazardPhrases(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllHazardPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllHazardPhrases_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllHazardPhrases_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllHazardPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllHazardPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllHazardPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllInputSamples(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllInputSamples_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllInputSamples_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllInputSamples_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllInputSamples_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllInputSamples_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllLocalRiskPhrases(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllLocalRiskPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllNmrExperiments(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllNmrExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllNmrExperiments_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllNmrExperiments_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllNmrExperiments_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllNmrExperiments_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllNmrExperiments_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllNmrExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllRPhrases(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllRPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllRPhrases_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllRPhrases_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllRPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllRPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllRPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSPhrases(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllSPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSPhrases_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSPhrases_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllSPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleCategories(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllSampleCategories' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleCategories_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleCategories_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleCategories_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleCategories_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllSampleCategories_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleComponents(Sam_Sample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findAllSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findAllSampleComponents' is not callable");
  
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
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleComponents_keyval0(Sam_Sample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleComponents_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleComponents_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_Sample_FindAllSampleComponents_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
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
ApiSet Sam_Sample_FindAllSampleComponents_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_Sample_FindFirstApplicationData(Sam_Sample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval0(Sam_Sample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
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
Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation(Sam_Sample self, ApiMap conditions)
{
  
  Cryz_DropAnnotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstDropAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval0(Sam_Sample self)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
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
Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase(Sam_Sample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstHazardPhrase' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval0(Sam_Sample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
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
Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Sam_Sample_FindFirstInputSample(Sam_Sample self, ApiMap conditions)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Sam_Sample_FindFirstInputSample_keyval0(Sam_Sample self)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Sam_Sample_FindFirstInputSample_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Sam_Sample_FindFirstInputSample_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_InputSample Sam_Sample_FindFirstInputSample_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
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
Expe_InputSample Sam_Sample_FindFirstInputSample_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_InputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase(Sam_Sample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLocalRiskPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstLocalRiskPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstLocalRiskPhrase' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval0(Sam_Sample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
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
Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment(Sam_Sample self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstNmrExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval0(Sam_Sample self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
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
Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstNmrExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase(Sam_Sample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstRPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstRPhrase' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval0(Sam_Sample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase(Sam_Sample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstSPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstSPhrase' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval0(Sam_Sample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory(Sam_Sample self, ApiMap conditions)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstSampleCategory' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval0(Sam_Sample self)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
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
Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent(Sam_Sample self, ApiMap conditions)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'findFirstSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'findFirstSampleComponent' is not callable");
  
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
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval0(Sam_Sample self)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_Sample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval1(Sam_Sample self, char * key, ApiObject value)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_Sample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_Sample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_Sample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
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
Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_Sample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Sam_Sample_Get(Sam_Sample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_Sample self
  @returns   the result
**/
Acco_AccessObject Sam_Sample_GetAccess(Sam_Sample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetAmountDisplayUnit(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getAmountDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetAmountUnit(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getAmountUnit' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_GetApplicationData(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetBatchNum(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBatchNum");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getBatchNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getBatchNum' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Sam_Sample Sam_Sample_GetByKey(Sam_Sample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getByKey' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetClassName(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
ApiInteger Sam_Sample_GetColPosition(Sam_Sample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getColPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute creationDate
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetCreationDate(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreationDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getCreationDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getCreationDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_Sample self
  @returns   the result
**/
ApiFloat Sam_Sample_GetCurrentAmount(Sam_Sample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getCurrentAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getCurrentAmount' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_Sample self
  @returns   the result
**/
ApiBoolean Sam_Sample_GetCurrentAmountFlag(Sam_Sample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCurrentAmountFlag");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getCurrentAmountFlag'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getCurrentAmountFlag' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetDetails(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetDropAnnotations(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getDropAnnotations' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_GetFieldNames(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetHazardPhrases(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_Sample self
  @returns   the result
**/
Hold_Holder Sam_Sample_GetHolder(Sam_Sample self)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getHolder' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiBoolean Sam_Sample_GetInConstructor(Sam_Sample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_Sample self
  @returns   the result
**/
ApiFloat Sam_Sample_GetInitialAmount(Sam_Sample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInitialAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getInitialAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getInitialAmount' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetInputSamples(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getInputSamples' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiFloat Sam_Sample_GetIonicStrength(Sam_Sample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getIonicStrength' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiBoolean Sam_Sample_GetIsActive(Sam_Sample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getIsActive' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiBoolean Sam_Sample_GetIsDeleted(Sam_Sample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_Sample self
  @returns   the result
**/
ApiBoolean Sam_Sample_GetIsHazard(Sam_Sample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getIsHazard' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetLocalRiskPhrases(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getLocalRiskPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetName(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetNmrExperiments(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getNmrExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_Sample self
  @returns   the result
**/
Expe_OutputSample Sam_Sample_GetOutputSample(Sam_Sample self)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getOutputSample' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetPackageName(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getPackageName' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetPackageShortName(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getPackageShortName' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
Sam_SampleStore Sam_Sample_GetParent(Sam_Sample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_Sample self
  @returns   the result
**/
ApiFloat Sam_Sample_GetPh(Sam_Sample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getPh' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiString Sam_Sample_GetQualifiedName(Sam_Sample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetRPhrases(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getRPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_Sample self
  @returns   the result
**/
Sam_RefSample Sam_Sample_GetRefSample(Sam_Sample self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getRefSample' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
Impl_MemopsRoot Sam_Sample_GetRoot(Sam_Sample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
ApiInteger Sam_Sample_GetRowPosition(Sam_Sample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getRowPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetSPhrases(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getSPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetSampleCategories(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getSampleCategories' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiSet Sam_Sample_GetSampleComponents(Sam_Sample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sampleStore

parent link
  @param  Sam_Sample self
  @returns   the result
**/
Sam_SampleStore Sam_Sample_GetSampleStore(Sam_Sample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getSampleStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
ApiInteger Sam_Sample_GetSubPosition(Sam_Sample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getSubPosition' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
Impl_TopObject Sam_Sample_GetTopObject(Sam_Sample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Sample.Sample
  @param  Sam_SampleStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_Sample Sam_Sample_Init(Sam_SampleStore parent, ApiMap attrlinks)
{
  
  return Sam_SampleStore_NewSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Sample.Sample
  @param  Sam_SampleStore parent
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
Sam_Sample Sam_Sample_Init_reqd(Sam_SampleStore parent, char * name, ApiSet sampleCategories)
{
  
  Sam_Sample  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "sampleCategories", sampleCategories);
  
  obj = Sam_Sample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  Impl_ApplicationData value
**/
void *Sam_Sample_RemoveApplicationData(Sam_Sample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  Cryz_DropAnnotation value
**/
void *Sam_Sample_RemoveDropAnnotation(Sam_Sample self, Cryz_DropAnnotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeDropAnnotation' is not callable");
  
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
  @param  Sam_Sample self
  @param  Clas_HazardPhrase value
**/
void *Sam_Sample_RemoveHazardPhrase(Sam_Sample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  Expe_InputSample value
**/
void *Sam_Sample_RemoveInputSample(Sam_Sample self, Expe_InputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  Nmr_Experiment value
**/
void *Sam_Sample_RemoveNmrExperiment(Sam_Sample self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeNmrExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeNmrExperiment' is not callable");
  
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
  @param  Sam_Sample self
  @param  Clas_SampleCategory value
**/
void *Sam_Sample_RemoveSampleCategory(Sam_Sample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'removeSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'removeSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Sam_Sample_Set(Sam_Sample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_Sample self
  @param  Acco_AccessObject value
**/
void *Sam_Sample_SetAccess(Sam_Sample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_Sample self
  @param  ApiString value
**/
void *Sam_Sample_SetAmountDisplayUnit(Sam_Sample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setAmountDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_Sample self
  @param  ApiString value
**/
void *Sam_Sample_SetAmountUnit(Sam_Sample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setAmountUnit' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiList values
**/
void *Sam_Sample_SetApplicationData(Sam_Sample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_Sample self
  @param  ApiString value
**/
void *Sam_Sample_SetBatchNum(Sam_Sample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBatchNum");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setBatchNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setBatchNum' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
void *Sam_Sample_SetColPosition(Sam_Sample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setColPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
void *Sam_Sample_SetCurrentAmount(Sam_Sample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setCurrentAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setCurrentAmount' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
void *Sam_Sample_SetCurrentAmountFlag(Sam_Sample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCurrentAmountFlag");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setCurrentAmountFlag'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setCurrentAmountFlag' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_Sample self
  @param  ApiString value
**/
void *Sam_Sample_SetDetails(Sam_Sample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiSet values
**/
void *Sam_Sample_SetDropAnnotations(Sam_Sample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setDropAnnotations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiSet values
**/
void *Sam_Sample_SetHazardPhrases(Sam_Sample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setHazardPhrases' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_Sample self
  @param  Hold_Holder value
**/
void *Sam_Sample_SetHolder(Sam_Sample self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setHolder' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
void *Sam_Sample_SetInitialAmount(Sam_Sample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInitialAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setInitialAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setInitialAmount' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  ApiSet values
**/
void *Sam_Sample_SetInputSamples(Sam_Sample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setInputSamples' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiFloat value
**/
void *Sam_Sample_SetIonicStrength(Sam_Sample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setIonicStrength' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
void *Sam_Sample_SetIsActive(Sam_Sample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setIsActive' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
void *Sam_Sample_SetIsHazard(Sam_Sample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setIsHazard' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiString value
**/
void *Sam_Sample_SetName(Sam_Sample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @param  ApiSet values
**/
void *Sam_Sample_SetNmrExperiments(Sam_Sample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setNmrExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_Sample self
  @param  Expe_OutputSample value
**/
void *Sam_Sample_SetOutputSample(Sam_Sample self, Expe_OutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
void *Sam_Sample_SetPh(Sam_Sample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setPh' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_Sample self
  @param  Sam_RefSample value
**/
void *Sam_Sample_SetRefSample(Sam_Sample self, Sam_RefSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setRefSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
void *Sam_Sample_SetRowPosition(Sam_Sample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setRowPosition' is not callable");
  
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
  @param  Sam_Sample self
  @param  ApiSet values
**/
void *Sam_Sample_SetSampleCategories(Sam_Sample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setSampleCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
void *Sam_Sample_SetSubPosition(Sam_Sample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'setSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'setSubPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedDropAnnotations(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedHazardPhrases(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedInputSamples(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedInputSamples' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedLocalRiskPhrases(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedLocalRiskPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedNmrExperiments(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedNmrExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedNmrExperiments' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedRPhrases(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedRPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedSPhrases(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedSPhrases' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedSampleCategories(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedSampleCategories' is not callable");
  
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
  @param  Sam_Sample self
  @returns   the result
**/
ApiList Sam_Sample_SortedSampleComponents(Sam_Sample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.Sample: cannot find method 'sortedSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.Sample: method 'sortedSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
