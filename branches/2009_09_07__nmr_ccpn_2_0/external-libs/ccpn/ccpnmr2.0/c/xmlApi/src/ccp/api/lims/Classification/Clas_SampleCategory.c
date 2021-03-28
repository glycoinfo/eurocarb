
#include "ccp.h"

/*
  The category of the sample classified by namingSystem. Different organisations can have their own categories.
*/

/* package ccp.api.lims.Classification */

/**
  Add for ccp.lims.Classification.SampleCategory.abstractSamples

List of 
sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  Sam_AbstractSample value
**/
void *Clas_SampleCategory_AddAbstractSample(Clas_SampleCategory self, Sam_AbstractSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAbstractSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'addAbstractSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'addAbstractSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_SampleCategory_AddApplicationData(Clas_SampleCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  Clas_ExperimentType value
**/
void *Clas_SampleCategory_AddExperimentType(Clas_SampleCategory self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'addExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'addExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  ApiBoolean complete
**/
void *Clas_SampleCategory_CheckAllValid(Clas_SampleCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  ApiBoolean complete
**/
void *Clas_SampleCategory_CheckValid(Clas_SampleCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllAbstractSamples(Clas_SampleCategory self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAbstractSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findAllAbstractSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findAllAbstractSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllAbstractSamples_keyval0(Clas_SampleCategory self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindAllAbstractSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllAbstractSamples_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindAllAbstractSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllAbstractSamples_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindAllAbstractSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllAbstractSamples_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindAllAbstractSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
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
ApiSet Clas_SampleCategory_FindAllAbstractSamples_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindAllAbstractSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleCategory_FindAllApplicationData(Clas_SampleCategory self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleCategory_FindAllApplicationData_keyval0(Clas_SampleCategory self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleCategory_FindAllApplicationData_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleCategory_FindAllApplicationData_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleCategory_FindAllApplicationData_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
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
ApiList Clas_SampleCategory_FindAllApplicationData_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllExperimentTypes(Clas_SampleCategory self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findAllExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findAllExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllExperimentTypes_keyval0(Clas_SampleCategory self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllExperimentTypes_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllExperimentTypes_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleCategory_FindAllExperimentTypes_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
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
ApiSet Clas_SampleCategory_FindAllExperimentTypes_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample(Clas_SampleCategory self, ApiMap conditions)
{
  
  Sam_AbstractSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAbstractSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findFirstAbstractSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findFirstAbstractSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
  @returns  the first value that satisfies the conditions 
**/
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample_keyval0(Clas_SampleCategory self)
{
  
  Sam_AbstractSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindFirstAbstractSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  Sam_AbstractSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindFirstAbstractSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_AbstractSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindFirstAbstractSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_AbstractSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindFirstAbstractSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.abstractSamples

List of sample 
asociated to a sample category.
  @param  Clas_SampleCategory self
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
Sam_AbstractSample Clas_SampleCategory_FindFirstAbstractSample_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_AbstractSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindFirstAbstractSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData(Clas_SampleCategory self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData_keyval0(Clas_SampleCategory self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleCategory self
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
Impl_ApplicationData Clas_SampleCategory_FindFirstApplicationData_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType(Clas_SampleCategory self, ApiMap conditions)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'findFirstExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'findFirstExperimentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType_keyval0(Clas_SampleCategory self)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleCategory_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType_keyval1(Clas_SampleCategory self, char * key, ApiObject value)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleCategory_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType_keyval2(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleCategory_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType_keyval3(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleCategory_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
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
Clas_ExperimentType Clas_SampleCategory_FindFirstExperimentType_keyval4(Clas_SampleCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleCategory_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_SampleCategory_Get(Clas_SampleCategory self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for ccp.lims.Classification.SampleCategory.abstractSamples

List of 
sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiSet Clas_SampleCategory_GetAbstractSamples(Clas_SampleCategory self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAbstractSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getAbstractSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getAbstractSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleCategory self
  @returns   the result
**/
Acco_AccessObject Clas_SampleCategory_GetAccess(Clas_SampleCategory self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getAccess' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiList Clas_SampleCategory_GetApplicationData(Clas_SampleCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_SampleCategory Clas_SampleCategory_GetByKey(Clas_SampleCategory self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getByKey' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetClassName(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.SampleCategory.classification

parent 
link
  @param  Clas_SampleCategory self
  @returns   the result
**/
Clas_Classification Clas_SampleCategory_GetClassification(Clas_SampleCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetDetails(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiSet Clas_SampleCategory_GetExperimentTypes(Clas_SampleCategory self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getExperimentTypes' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiList Clas_SampleCategory_GetFieldNames(Clas_SampleCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_SampleCategory_GetFullKey(Clas_SampleCategory self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getFullKey' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiBoolean Clas_SampleCategory_GetInConstructor(Clas_SampleCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getInConstructor' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiBoolean Clas_SampleCategory_GetIsDeleted(Clas_SampleCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @returns  Local object key
**/
ApiObject Clas_SampleCategory_GetLocalKey(Clas_SampleCategory self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetName(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getName' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetPackageName(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getPackageName' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetPackageShortName(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.SampleCategory.parent

link to parent 
object - synonym for classification
  @param  Clas_SampleCategory self
  @returns   the result
**/
Clas_Classification Clas_SampleCategory_GetParent(Clas_SampleCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getParent' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiString Clas_SampleCategory_GetQualifiedName(Clas_SampleCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
Impl_MemopsRoot Clas_SampleCategory_GetRoot(Clas_SampleCategory self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getRoot' is not callable");
  
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
  @param  Clas_SampleCategory self
  @returns   the result
**/
Impl_TopObject Clas_SampleCategory_GetTopObject(Clas_SampleCategory self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.SampleCategory
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_SampleCategory Clas_SampleCategory_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewSampleCategory(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.SampleCategory
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_SampleCategory Clas_SampleCategory_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_SampleCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_SampleCategory_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  Sam_AbstractSample value
**/
void *Clas_SampleCategory_RemoveAbstractSample(Clas_SampleCategory self, Sam_AbstractSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAbstractSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'removeAbstractSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'removeAbstractSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Clas_SampleCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_SampleCategory_RemoveApplicationData(Clas_SampleCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  Clas_ExperimentType value
**/
void *Clas_SampleCategory_RemoveExperimentType(Clas_SampleCategory self, Clas_ExperimentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'removeExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'removeExperimentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.SampleCategory
  @param  Clas_SampleCategory self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_SampleCategory_Set(Clas_SampleCategory self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for ccp.lims.Classification.SampleCategory.abstractSamples

List of 
sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @param  ApiSet values
**/
void *Clas_SampleCategory_SetAbstractSamples(Clas_SampleCategory self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAbstractSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setAbstractSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setAbstractSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleCategory self
  @param  Acco_AccessObject value
**/
void *Clas_SampleCategory_SetAccess(Clas_SampleCategory self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setAccess' is not callable");
  
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
  @param  Clas_SampleCategory self
  @param  ApiList values
**/
void *Clas_SampleCategory_SetApplicationData(Clas_SampleCategory self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleCategory self
  @param  ApiString value
**/
void *Clas_SampleCategory_SetDetails(Clas_SampleCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.SampleCategory.experimentTypes

List of 
experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @param  ApiSet values
**/
void *Clas_SampleCategory_SetExperimentTypes(Clas_SampleCategory self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setExperimentTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleCategory self
  @param  ApiString value
**/
void *Clas_SampleCategory_SetName(Clas_SampleCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.SampleCategory.abstractSamples

List 
of sample asociated to a sample category.
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiList Clas_SampleCategory_SortedAbstractSamples(Clas_SampleCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAbstractSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'sortedAbstractSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'sortedAbstractSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.SampleCategory.experimentTypes

List 
of experiment type associated a sample category.
  @param  Clas_SampleCategory self
  @returns   the result
**/
ApiList Clas_SampleCategory_SortedExperimentTypes(Clas_SampleCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleCategory: cannot find method 'sortedExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleCategory: method 'sortedExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
