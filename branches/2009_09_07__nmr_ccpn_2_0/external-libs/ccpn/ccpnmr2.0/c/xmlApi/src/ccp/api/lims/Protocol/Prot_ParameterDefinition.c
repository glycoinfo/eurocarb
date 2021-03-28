
#include "ccp.h"

/*
  The list of possible parameters associated with a protocol where the values are associated with an Experiment.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
void *Prot_ParameterDefinition_AddApplicationData(Prot_ParameterDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  Expe_Parameter value
**/
void *Prot_ParameterDefinition_AddParameter(Prot_ParameterDefinition self, Expe_Parameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'addParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'addParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.ParameterDefinition.possibleValues

The list 
of possible values for the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_AddPossibleValue(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPossibleValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'addPossibleValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'addPossibleValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  ApiBoolean complete
**/
void *Prot_ParameterDefinition_CheckAllValid(Prot_ParameterDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  ApiBoolean complete
**/
void *Prot_ParameterDefinition_CheckValid(Prot_ParameterDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'checkValid' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_ParameterDefinition_FindAllApplicationData(Prot_ParameterDefinition self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_ParameterDefinition_FindAllApplicationData_keyval0(Prot_ParameterDefinition self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_ParameterDefinition_FindAllApplicationData_keyval1(Prot_ParameterDefinition self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_ParameterDefinition_FindAllApplicationData_keyval2(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_ParameterDefinition_FindAllApplicationData_keyval3(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
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
ApiList Prot_ParameterDefinition_FindAllApplicationData_keyval4(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_ParameterDefinition_FindAllParameters(Prot_ParameterDefinition self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'findAllParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_ParameterDefinition_FindAllParameters_keyval0(Prot_ParameterDefinition self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_ParameterDefinition_FindAllParameters_keyval1(Prot_ParameterDefinition self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_ParameterDefinition_FindAllParameters_keyval2(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_ParameterDefinition_FindAllParameters_keyval3(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
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
ApiSet Prot_ParameterDefinition_FindAllParameters_keyval4(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData(Prot_ParameterDefinition self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData_keyval0(Prot_ParameterDefinition self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData_keyval1(Prot_ParameterDefinition self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData_keyval2(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData_keyval3(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
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
Impl_ApplicationData Prot_ParameterDefinition_FindFirstApplicationData_keyval4(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter(Prot_ParameterDefinition self, ApiMap conditions)
{
  
  Expe_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'findFirstParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter_keyval0(Prot_ParameterDefinition self)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter_keyval1(Prot_ParameterDefinition self, char * key, ApiObject value)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter_keyval2(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter_keyval3(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
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
Expe_Parameter Prot_ParameterDefinition_FindFirstParameter_keyval4(Prot_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_ParameterDefinition_Get(Prot_ParameterDefinition self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Acco_AccessObject Prot_ParameterDefinition_GetAccess(Prot_ParameterDefinition self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getAccess' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiList Prot_ParameterDefinition_GetApplicationData(Prot_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_ParameterDefinition Prot_ParameterDefinition_GetByKey(Prot_ParameterDefinition self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getByKey' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetClassName(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.defaultValue

The default 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetDefaultValue(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDefaultValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getDefaultValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getDefaultValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetDisplayUnit(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getDisplayUnit' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiList Prot_ParameterDefinition_GetFieldNames(Prot_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Prot_ParameterDefinition_GetFullKey(Prot_ParameterDefinition self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getFullKey' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiBoolean Prot_ParameterDefinition_GetInConstructor(Prot_ParameterDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getInConstructor' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiBoolean Prot_ParameterDefinition_GetIsDeleted(Prot_ParameterDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.label

Label of the 
parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetLabel(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @returns  Local object key
**/
ApiObject Prot_ParameterDefinition_GetLocalKey(Prot_ParameterDefinition self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.mandatory

Flag to 
indicate whether it is mandatory for a value to be assigned to any 
Parameters derived from this ParameterDefinition before the Parameter's 
parent Experiment can be considered completed.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiBoolean Prot_ParameterDefinition_GetMandatory(Prot_ParameterDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMandatory");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getMandatory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getMandatory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.maxValue

The maximum 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetMaxValue(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getMaxValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getMaxValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.minValue

The minimum 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetMinValue(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getMinValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getMinValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.name

The name of the 
parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetName(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getName' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetPackageName(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getPackageName' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetPackageShortName(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetParamType(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParamType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getParamType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getParamType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiSet Prot_ParameterDefinition_GetParameters(Prot_ParameterDefinition self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.parent

link to parent 
object - synonym for protocol
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Prot_Protocol Prot_ParameterDefinition_GetParent(Prot_ParameterDefinition self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.possibleValues

The list 
of possible values for the parameter.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiList Prot_ParameterDefinition_GetPossibleValues(Prot_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPossibleValues");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getPossibleValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getPossibleValues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.protocol

parent link
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Prot_Protocol Prot_ParameterDefinition_GetProtocol(Prot_ParameterDefinition self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getProtocol' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetQualifiedName(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getQualifiedName' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Impl_MemopsRoot Prot_ParameterDefinition_GetRoot(Prot_ParameterDefinition self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.serial

Unique identifier.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiInteger Prot_ParameterDefinition_GetSerial(Prot_ParameterDefinition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.step

The step where the 
parameter definition should be defined.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Prot_Step Prot_ParameterDefinition_GetStep(Prot_ParameterDefinition self)
{
  
  Prot_Step obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getStep' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
Impl_TopObject Prot_ParameterDefinition_GetTopObject(Prot_ParameterDefinition self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.ParameterDefinition.unit

Unit of parameter 
(L, Kg, g/L, s-1, etc.
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiString Prot_ParameterDefinition_GetUnit(Prot_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_ParameterDefinition Prot_ParameterDefinition_Init(Prot_Protocol parent, ApiMap attrlinks)
{
  
  return Prot_Protocol_NewParameterDefinition(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_Protocol parent
  @returns  the new object
**/
Prot_ParameterDefinition Prot_ParameterDefinition_Init_reqd(Prot_Protocol parent)
{
  
  Prot_ParameterDefinition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Prot_ParameterDefinition_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
void *Prot_ParameterDefinition_RemoveApplicationData(Prot_ParameterDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  Expe_Parameter value
**/
void *Prot_ParameterDefinition_RemoveParameter(Prot_ParameterDefinition self, Expe_Parameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'removeParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'removeParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_RemovePossibleValue(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePossibleValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'removePossibleValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'removePossibleValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.ParameterDefinition
  @param  Prot_ParameterDefinition self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_ParameterDefinition_Set(Prot_ParameterDefinition self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_ParameterDefinition self
  @param  Acco_AccessObject value
**/
void *Prot_ParameterDefinition_SetAccess(Prot_ParameterDefinition self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setAccess' is not callable");
  
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
  @param  Prot_ParameterDefinition self
  @param  ApiList values
**/
void *Prot_ParameterDefinition_SetApplicationData(Prot_ParameterDefinition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.defaultValue

The default 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetDefaultValue(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDefaultValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setDefaultValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setDefaultValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetDisplayUnit(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.label

Label of the 
parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetLabel(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.mandatory

Flag to 
indicate whether it is mandatory for a value to be assigned to any 
Parameters derived from this ParameterDefinition before the Parameter's 
parent Experiment can be considered completed.
  @param  Prot_ParameterDefinition self
  @param  ApiBoolean value
**/
void *Prot_ParameterDefinition_SetMandatory(Prot_ParameterDefinition self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMandatory");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setMandatory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setMandatory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.maxValue

The maximum 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetMaxValue(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setMaxValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setMaxValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.minValue

The minimum 
value of the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetMinValue(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setMinValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setMinValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.name

The name of the 
parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetName(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetParamType(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParamType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setParamType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setParamType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @param  ApiSet values
**/
void *Prot_ParameterDefinition_SetParameters(Prot_ParameterDefinition self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setParameters' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.possibleValues

The list 
of possible values for the parameter.
  @param  Prot_ParameterDefinition self
  @param  ApiList values
**/
void *Prot_ParameterDefinition_SetPossibleValues(Prot_ParameterDefinition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPossibleValues");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setPossibleValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setPossibleValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.serial

Unique identifier.
  @param  Prot_ParameterDefinition self
  @param  ApiInteger value
**/
void *Prot_ParameterDefinition_SetSerial(Prot_ParameterDefinition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.step

The step where the 
parameter definition should be defined.
  @param  Prot_ParameterDefinition self
  @param  Prot_Step value
**/
void *Prot_ParameterDefinition_SetStep(Prot_ParameterDefinition self, Prot_Step value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.ParameterDefinition.unit

Unit of parameter 
(L, Kg, g/L, s-1, etc.
  @param  Prot_ParameterDefinition self
  @param  ApiString value
**/
void *Prot_ParameterDefinition_SetUnit(Prot_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.ParameterDefinition.parameters
  @param  Prot_ParameterDefinition self
  @returns   the result
**/
ApiList Prot_ParameterDefinition_SortedParameters(Prot_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.ParameterDefinition: method 'sortedParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
