
#include "ccp.h"

/*
  An OutputSampleDef is used to specify that an Experiment created from the parent Protocol should have an OutputSample that accepts Samples belonging to the specified SampleCategory (any if OutputSampleDef.sampleCategory is null).
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  Impl_ApplicationData value
**/
void *Prot_RefOutputSample_AddApplicationData(Prot_RefOutputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  Expe_OutputSample value
**/
void *Prot_RefOutputSample_AddOutputSample(Prot_RefOutputSample self, Expe_OutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'addOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'addOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean complete
**/
void *Prot_RefOutputSample_CheckAllValid(Prot_RefOutputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean complete
**/
void *Prot_RefOutputSample_CheckValid(Prot_RefOutputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'checkValid' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefOutputSample_FindAllApplicationData(Prot_RefOutputSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefOutputSample_FindAllApplicationData_keyval0(Prot_RefOutputSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefOutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefOutputSample_FindAllApplicationData_keyval1(Prot_RefOutputSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefOutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefOutputSample_FindAllApplicationData_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefOutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_RefOutputSample_FindAllApplicationData_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefOutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
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
ApiList Prot_RefOutputSample_FindAllApplicationData_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefOutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefOutputSample_FindAllOutputSamples(Prot_RefOutputSample self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'findAllOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'findAllOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval0(Prot_RefOutputSample self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefOutputSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval1(Prot_RefOutputSample self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefOutputSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefOutputSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefOutputSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
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
ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefOutputSample_FindAllOutputSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData(Prot_RefOutputSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval0(Prot_RefOutputSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefOutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval1(Prot_RefOutputSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefOutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefOutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefOutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
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
Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefOutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample(Prot_RefOutputSample self, ApiMap conditions)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'findFirstOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'findFirstOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval0(Prot_RefOutputSample self)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_RefOutputSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval1(Prot_RefOutputSample self, char * key, ApiObject value)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_RefOutputSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_RefOutputSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_RefOutputSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
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
Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_OutputSample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_RefOutputSample_FindFirstOutputSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_RefOutputSample_Get(Prot_RefOutputSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Acco_AccessObject Prot_RefOutputSample_GetAccess(Prot_RefOutputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.amount

The default amount of 
Sample to create for an OutputSample created from this OutputSampleDef.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiFloat Prot_RefOutputSample_GetAmount(Prot_RefOutputSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getAmount' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiList Prot_RefOutputSample_GetApplicationData(Prot_RefOutputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_RefOutputSample Prot_RefOutputSample_GetByKey(Prot_RefOutputSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getByKey' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetClassName(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.displayUnit

The unit to 
display for OutputSampleDef.amount.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetDisplayUnit(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getDisplayUnit' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiList Prot_RefOutputSample_GetFieldNames(Prot_RefOutputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Prot_RefOutputSample_GetFullKey(Prot_RefOutputSample self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getFullKey' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiBoolean Prot_RefOutputSample_GetInConstructor(Prot_RefOutputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getInConstructor' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiBoolean Prot_RefOutputSample_GetIsDeleted(Prot_RefOutputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @returns  Local object key
**/
ApiObject Prot_RefOutputSample_GetLocalKey(Prot_RefOutputSample self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.name

The name of the 
OutputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to OutputSample.name when an OutputSample is created from 
an OutputSampleDef.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetName(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiSet Prot_RefOutputSample_GetOutputSamples(Prot_RefOutputSample self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getOutputSamples' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetPackageName(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getPackageName' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetPackageShortName(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.parent

link to parent object 
- synonym for protocol
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Prot_Protocol Prot_RefOutputSample_GetParent(Prot_RefOutputSample self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.protocol

parent link
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Prot_Protocol Prot_RefOutputSample_GetProtocol(Prot_RefOutputSample self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getProtocol' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetQualifiedName(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.refSample
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Sam_RefSample Prot_RefOutputSample_GetRefSample(Prot_RefOutputSample self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getRefSample' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Impl_MemopsRoot Prot_RefOutputSample_GetRoot(Prot_RefOutputSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.serial

Unique identifier.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiInteger Prot_RefOutputSample_GetSerial(Prot_RefOutputSample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Prot_Step Prot_RefOutputSample_GetStep(Prot_RefOutputSample self)
{
  
  Prot_Step obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getStep' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @returns   the result
**/
Impl_TopObject Prot_RefOutputSample_GetTopObject(Prot_RefOutputSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.RefOutputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for OutputSampleDef.amount
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiString Prot_RefOutputSample_GetUnit(Prot_RefOutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_RefOutputSample Prot_RefOutputSample_Init(Prot_Protocol parent, ApiMap attrlinks)
{
  
  return Prot_Protocol_NewRefOutputSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol parent
  @returns  the new object
**/
Prot_RefOutputSample Prot_RefOutputSample_Init_reqd(Prot_Protocol parent)
{
  
  Prot_RefOutputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_RefOutputSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  Impl_ApplicationData value
**/
void *Prot_RefOutputSample_RemoveApplicationData(Prot_RefOutputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  Expe_OutputSample value
**/
void *Prot_RefOutputSample_RemoveOutputSample(Prot_RefOutputSample self, Expe_OutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'removeOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'removeOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_RefOutputSample_Set(Prot_RefOutputSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefOutputSample self
  @param  Acco_AccessObject value
**/
void *Prot_RefOutputSample_SetAccess(Prot_RefOutputSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.amount

The default amount of 
Sample to create for an OutputSample created from this OutputSampleDef.
  @param  Prot_RefOutputSample self
  @param  ApiFloat value
**/
void *Prot_RefOutputSample_SetAmount(Prot_RefOutputSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setAmount' is not callable");
  
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
  @param  Prot_RefOutputSample self
  @param  ApiList values
**/
void *Prot_RefOutputSample_SetApplicationData(Prot_RefOutputSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.displayUnit

The unit to 
display for OutputSampleDef.amount.
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
void *Prot_RefOutputSample_SetDisplayUnit(Prot_RefOutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.name

The name of the 
OutputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to OutputSample.name when an OutputSample is created from 
an OutputSampleDef.
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
void *Prot_RefOutputSample_SetName(Prot_RefOutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiSet values
**/
void *Prot_RefOutputSample_SetOutputSamples(Prot_RefOutputSample self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setOutputSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.refSample
  @param  Prot_RefOutputSample self
  @param  Sam_RefSample value
**/
void *Prot_RefOutputSample_SetRefSample(Prot_RefOutputSample self, Sam_RefSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setRefSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.serial

Unique identifier.
  @param  Prot_RefOutputSample self
  @param  ApiInteger value
**/
void *Prot_RefOutputSample_SetSerial(Prot_RefOutputSample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefOutputSample self
  @param  Prot_Step value
**/
void *Prot_RefOutputSample_SetStep(Prot_RefOutputSample self, Prot_Step value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.RefOutputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for OutputSampleDef.amount
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
void *Prot_RefOutputSample_SetUnit(Prot_RefOutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns   the result
**/
ApiList Prot_RefOutputSample_SortedOutputSamples(Prot_RefOutputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: cannot find method 'sortedOutputSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.RefOutputSample: method 'sortedOutputSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
