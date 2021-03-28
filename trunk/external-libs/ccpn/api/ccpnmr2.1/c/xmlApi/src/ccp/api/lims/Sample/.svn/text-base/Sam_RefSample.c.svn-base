
#include "ccp.h"

/*
  Reference data to which a 'real' sample conforms. This is a means to store details which are shared by instances of the same reagent but are supplier and batch independant.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  Impl_ApplicationData value
**/
void *Sam_RefSample_AddApplicationData(Sam_RefSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.RefSample.conformings

List of samples that are 
conforming to the RefSample.
  @param  Sam_RefSample self
  @param  Sam_Sample value
**/
void *Sam_RefSample_AddConforming(Sam_RefSample self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConforming");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addConforming'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addConforming' is not callable");
  
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
  @param  Sam_RefSample self
  @param  Clas_HazardPhrase value
**/
void *Sam_RefSample_AddHazardPhrase(Sam_RefSample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  Prot_RefInputSample value
**/
void *Sam_RefSample_AddRefInputSample(Sam_RefSample self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  Prot_RefOutputSample value
**/
void *Sam_RefSample_AddRefOutputSample(Sam_RefSample self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  Hold_RefSamplePosition value
**/
void *Sam_RefSample_AddRefSamplePosition(Sam_RefSample self, Hold_RefSamplePosition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefSamplePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addRefSamplePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addRefSamplePosition' is not callable");
  
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
  @param  Sam_RefSample self
  @param  Clas_SampleCategory value
**/
void *Sam_RefSample_AddSampleCategory(Sam_RefSample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'addSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'addSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Sample.RefSample
  @param  Sam_RefSample self
  @param  ApiBoolean complete
**/
void *Sam_RefSample_CheckAllValid(Sam_RefSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Sample.RefSample
  @param  Sam_RefSample self
  @param  ApiBoolean complete
**/
void *Sam_RefSample_CheckValid(Sam_RefSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'checkValid' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSample_FindAllApplicationData(Sam_RefSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSample_FindAllApplicationData_keyval0(Sam_RefSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSample_FindAllApplicationData_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSample_FindAllApplicationData_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSample_FindAllApplicationData_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
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
ApiList Sam_RefSample_FindAllApplicationData_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllConformings(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConformings");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllConformings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllConformings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllConformings_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllConformings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllConformings_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllConformings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllConformings_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllConformings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllConformings_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllConformings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllConformings_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllConformings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllHazardPhrases(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllHazardPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllHazardPhrases_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllHazardPhrases_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllHazardPhrases_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllHazardPhrases_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllHazardPhrases_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllLocalRiskPhrases(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllLocalRiskPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllLocalRiskPhrases_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllLocalRiskPhrases_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllLocalRiskPhrases_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllLocalRiskPhrases_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllLocalRiskPhrases_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllLocalRiskPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRPhrases(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllRPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRPhrases_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRPhrases_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRPhrases_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRPhrases_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllRPhrases_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllRPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefInputSamples(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefInputSamples_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefInputSamples_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefInputSamples_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefInputSamples_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllRefInputSamples_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllRefInputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefOutputSamples(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefOutputSamples_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefOutputSamples_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefOutputSamples_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefOutputSamples_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllRefOutputSamples_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllRefOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSamplePositions(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllRefSamplePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSamplePositions_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSamplePositions_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSamplePositions_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSamplePositions_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllRefSamplePositions_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSampleSources(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefSampleSources");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllRefSampleSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllRefSampleSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSampleSources_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllRefSampleSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSampleSources_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllRefSampleSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSampleSources_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllRefSampleSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllRefSampleSources_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllRefSampleSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllRefSampleSources_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllRefSampleSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSPhrases(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllSPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSPhrases_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSPhrases_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSPhrases_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSPhrases_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllSPhrases_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllSPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleCategories(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllSampleCategories' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleCategories_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleCategories_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleCategories_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleCategories_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllSampleCategories_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleComponents(Sam_RefSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findAllSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findAllSampleComponents' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleComponents_keyval0(Sam_RefSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleComponents_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleComponents_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_RefSample_FindAllSampleComponents_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_RefSample self
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
ApiSet Sam_RefSample_FindAllSampleComponents_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData(Sam_RefSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData_keyval0(Sam_RefSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
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
Impl_ApplicationData Sam_RefSample_FindFirstApplicationData_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Sam_RefSample_FindFirstConforming(Sam_RefSample self, ApiMap conditions)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConforming");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstConforming'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstConforming' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Sam_RefSample_FindFirstConforming_keyval0(Sam_RefSample self)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstConforming(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Sam_RefSample_FindFirstConforming_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstConforming(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Sam_RefSample_FindFirstConforming_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstConforming(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Sam_RefSample_FindFirstConforming_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstConforming(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.conformings

List of samples 
that are conforming to the RefSample.
  @param  Sam_RefSample self
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
Sam_Sample Sam_RefSample_FindFirstConforming_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstConforming(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase(Sam_RefSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstHazardPhrase' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase_keyval0(Sam_RefSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_RefSample self
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
Clas_HazardPhrase Sam_RefSample_FindFirstHazardPhrase_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase(Sam_RefSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLocalRiskPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstLocalRiskPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstLocalRiskPhrase' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase_keyval0(Sam_RefSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_RefSample self
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
Clas_HazardPhrase Sam_RefSample_FindFirstLocalRiskPhrase_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstLocalRiskPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase(Sam_RefSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstRPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstRPhrase' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase_keyval0(Sam_RefSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_RefSample self
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
Clas_HazardPhrase Sam_RefSample_FindFirstRPhrase_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstRPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample(Sam_RefSample self, ApiMap conditions)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample_keyval0(Sam_RefSample self)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
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
Prot_RefInputSample Sam_RefSample_FindFirstRefInputSample_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefInputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstRefInputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample(Sam_RefSample self, ApiMap conditions)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstRefOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample_keyval0(Sam_RefSample self)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
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
Prot_RefOutputSample Sam_RefSample_FindFirstRefOutputSample_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_RefOutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstRefOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition(Sam_RefSample self, ApiMap conditions)
{
  
  Hold_RefSamplePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefSamplePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstRefSamplePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstRefSamplePosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition_keyval0(Sam_RefSample self)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
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
Hold_RefSamplePosition Sam_RefSample_FindFirstRefSamplePosition_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource(Sam_RefSample self, ApiMap conditions)
{
  
  Sam_RefSampleSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefSampleSource");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstRefSampleSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstRefSampleSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource_keyval0(Sam_RefSample self)
{
  
  Sam_RefSampleSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstRefSampleSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Sam_RefSampleSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstRefSampleSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_RefSampleSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstRefSampleSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_RefSampleSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstRefSampleSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
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
Sam_RefSampleSource Sam_RefSample_FindFirstRefSampleSource_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_RefSampleSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstRefSampleSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase(Sam_RefSample self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstSPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstSPhrase' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase_keyval0(Sam_RefSample self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_RefSample self
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
Clas_HazardPhrase Sam_RefSample_FindFirstSPhrase_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstSPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory(Sam_RefSample self, ApiMap conditions)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstSampleCategory' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory_keyval0(Sam_RefSample self)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_RefSample self
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
Clas_SampleCategory Sam_RefSample_FindFirstSampleCategory_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_RefSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent(Sam_RefSample self, ApiMap conditions)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'findFirstSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'findFirstSampleComponent' is not callable");
  
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
  @param  Sam_RefSample self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent_keyval0(Sam_RefSample self)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent_keyval1(Sam_RefSample self, char * key, ApiObject value)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent_keyval2(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_RefSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent_keyval3(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_RefSample self
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
Sam_SampleComponent Sam_RefSample_FindFirstSampleComponent_keyval4(Sam_RefSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSample_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Sample.RefSample
  @param  Sam_RefSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Sam_RefSample_Get(Sam_RefSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_RefSample self
  @returns   the result
**/
Acco_AccessObject Sam_RefSample_GetAccess(Sam_RefSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getAccess' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
Acco_AccessObject Sam_RefSample_GetActiveAccess(Sam_RefSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getActiveAccess' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_GetApplicationData(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Sample.RefSample
  @param  Sam_RefSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Sam_RefSample Sam_RefSample_GetByKey(Sam_RefSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getByKey' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetClassName(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSample.conformings

List of samples that are 
conforming to the RefSample.
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetConformings(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConformings");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getConformings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getConformings' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetDetails(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getDetails' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_GetFieldNames(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getFieldNames' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetHazardPhrases(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getHazardPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiBoolean Sam_RefSample_GetInConstructor(Sam_RefSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getInConstructor' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiFloat Sam_RefSample_GetIonicStrength(Sam_RefSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getIonicStrength' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiBoolean Sam_RefSample_GetIsActive(Sam_RefSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getIsActive' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiBoolean Sam_RefSample_GetIsDeleted(Sam_RefSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_RefSample self
  @returns   the result
**/
ApiBoolean Sam_RefSample_GetIsHazard(Sam_RefSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getIsHazard' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetLocalRiskPhrases(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getLocalRiskPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetName(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getName' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetPackageName(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getPackageName' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetPackageShortName(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getPackageShortName' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
Sam_SampleStore Sam_RefSample_GetParent(Sam_RefSample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_RefSample self
  @returns   the result
**/
ApiFloat Sam_RefSample_GetPh(Sam_RefSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getPh' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiString Sam_RefSample_GetQualifiedName(Sam_RefSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getQualifiedName' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetRPhrases(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetRefInputSamples(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetRefOutputSamples(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetRefSamplePositions(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRefSamplePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSample.refSampleSources

child link to class 
RefSampleSource
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetRefSampleSources(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleSources");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRefSampleSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRefSampleSources' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
Impl_MemopsRoot Sam_RefSample_GetRoot(Sam_RefSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getRoot' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetSPhrases(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getSPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetSampleCategories(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getSampleCategories' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiSet Sam_RefSample_GetSampleComponents(Sam_RefSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.AbstractSample.sampleStore

parent link
  @param  Sam_RefSample self
  @returns   the result
**/
Sam_SampleStore Sam_RefSample_GetSampleStore(Sam_RefSample self)
{
  
  Sam_SampleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getSampleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getSampleStore' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
Impl_TopObject Sam_RefSample_GetTopObject(Sam_RefSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Sample.RefSample
  @param  Sam_SampleStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_RefSample Sam_RefSample_Init(Sam_SampleStore parent, ApiMap attrlinks)
{
  
  return Sam_SampleStore_NewRefSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Sample.RefSample
  @param  Sam_SampleStore parent
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
Sam_RefSample Sam_RefSample_Init_reqd(Sam_SampleStore parent, char * name, ApiSet sampleCategories)
{
  
  Sam_RefSample  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "sampleCategories", sampleCategories);
  
  obj = Sam_RefSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSample self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_RefSampleSource Sam_RefSample_NewRefSampleSource(Sam_RefSample self, ApiMap attrlinks)
{
  
  Sam_RefSampleSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefSampleSource");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'newRefSampleSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'newRefSampleSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSample self
  @param  char * catalogNum
  @param  Affi_Organisation supplier
  @returns  the new object
**/
Sam_RefSampleSource Sam_RefSample_NewRefSampleSource_reqd(Sam_RefSample self, char * catalogNum, Affi_Organisation supplier)
{
  
  Sam_RefSampleSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__catalogNum = ApiString_New(catalogNum);

  PyDict_SetItemString(attrlinks, "catalogNum", api__catalogNum);
  PyDict_SetItemString(attrlinks, "supplier", supplier);
  
  obj = Sam_RefSample_NewRefSampleSource(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__catalogNum);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSample self
  @param  Impl_ApplicationData value
**/
void *Sam_RefSample_RemoveApplicationData(Sam_RefSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @param  Sam_Sample value
**/
void *Sam_RefSample_RemoveConforming(Sam_RefSample self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConforming");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeConforming'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeConforming' is not callable");
  
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
  @param  Sam_RefSample self
  @param  Clas_HazardPhrase value
**/
void *Sam_RefSample_RemoveHazardPhrase(Sam_RefSample self, Clas_HazardPhrase value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeHazardPhrase' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  Prot_RefInputSample value
**/
void *Sam_RefSample_RemoveRefInputSample(Sam_RefSample self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  Prot_RefOutputSample value
**/
void *Sam_RefSample_RemoveRefOutputSample(Sam_RefSample self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  Hold_RefSamplePosition value
**/
void *Sam_RefSample_RemoveRefSamplePosition(Sam_RefSample self, Hold_RefSamplePosition value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefSamplePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeRefSamplePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeRefSamplePosition' is not callable");
  
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
  @param  Sam_RefSample self
  @param  Clas_SampleCategory value
**/
void *Sam_RefSample_RemoveSampleCategory(Sam_RefSample self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'removeSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'removeSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Sample.RefSample
  @param  Sam_RefSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Sam_RefSample_Set(Sam_RefSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_RefSample self
  @param  Acco_AccessObject value
**/
void *Sam_RefSample_SetAccess(Sam_RefSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setAccess' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiList values
**/
void *Sam_RefSample_SetApplicationData(Sam_RefSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSample.conformings

List of samples that are 
conforming to the RefSample.
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetConformings(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConformings");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setConformings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setConformings' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiString value
**/
void *Sam_RefSample_SetDetails(Sam_RefSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setDetails' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetHazardPhrases(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setHazardPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiFloat value
**/
void *Sam_RefSample_SetIonicStrength(Sam_RefSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIonicStrength");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setIonicStrength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setIonicStrength' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiBoolean value
**/
void *Sam_RefSample_SetIsActive(Sam_RefSample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsActive");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setIsActive' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_RefSample self
  @param  ApiBoolean value
**/
void *Sam_RefSample_SetIsHazard(Sam_RefSample self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsHazard");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setIsHazard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setIsHazard' is not callable");
  
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
  @param  Sam_RefSample self
  @param  ApiString value
**/
void *Sam_RefSample_SetName(Sam_RefSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_RefSample self
  @param  ApiFloat value
**/
void *Sam_RefSample_SetPh(Sam_RefSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPh");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setPh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setPh' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetRefInputSamples(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setRefInputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetRefOutputSamples(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setRefOutputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetRefSamplePositions(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setRefSamplePositions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_RefSample self
  @param  ApiSet values
**/
void *Sam_RefSample_SetSampleCategories(Sam_RefSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'setSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'setSampleCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.RefSample.conformings

List of samples that 
are conforming to the RefSample.
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedConformings(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConformings");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedConformings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedConformings' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedHazardPhrases(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedHazardPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedLocalRiskPhrases(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLocalRiskPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedLocalRiskPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedLocalRiskPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedRPhrases(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedRPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedRPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.RefSample.refInputSamples
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedRefInputSamples(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefInputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedRefInputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedRefInputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.RefSample.refOutputSamples
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedRefOutputSamples(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedRefOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedRefOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.RefSample.refSamplePositions
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedRefSamplePositions(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedRefSamplePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.RefSample.refSampleSources

child link to 
class RefSampleSource
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedRefSampleSources(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefSampleSources");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedRefSampleSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedRefSampleSources' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedSPhrases(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedSPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedSPhrases' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedSampleCategories(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedSampleCategories' is not callable");
  
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
  @param  Sam_RefSample self
  @returns   the result
**/
ApiList Sam_RefSample_SortedSampleComponents(Sam_RefSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSample: cannot find method 'sortedSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSample: method 'sortedSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
