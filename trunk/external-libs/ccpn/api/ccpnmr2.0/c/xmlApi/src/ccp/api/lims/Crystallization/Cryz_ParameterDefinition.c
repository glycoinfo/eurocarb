
#include "ccp.h"

/*
  The list of possible parameters associated with a protocol where the values are associated with an Experiment.
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
void *Cryz_ParameterDefinition_AddApplicationData(Cryz_ParameterDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_AddPossibleValue(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPossibleValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'addPossibleValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'addPossibleValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean complete
**/
void *Cryz_ParameterDefinition_CheckAllValid(Cryz_ParameterDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean complete
**/
void *Cryz_ParameterDefinition_CheckValid(Cryz_ParameterDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'checkValid' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ParameterDefinition_FindAllApplicationData(Cryz_ParameterDefinition self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'findAllApplicationData' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval0(Cryz_ParameterDefinition self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
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
ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ParameterDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ParameterDefinition_FindAllParameters(Cryz_ParameterDefinition self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'findAllParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval0(Cryz_ParameterDefinition self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
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
ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ParameterDefinition_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData(Cryz_ParameterDefinition self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval0(Cryz_ParameterDefinition self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
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
Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ParameterDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter(Cryz_ParameterDefinition self, ApiMap conditions)
{
  
  Cryz_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'findFirstParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval0(Cryz_ParameterDefinition self)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
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
Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ParameterDefinition_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cryz_ParameterDefinition_Get(Cryz_ParameterDefinition self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
Acco_AccessObject Cryz_ParameterDefinition_GetAccess(Cryz_ParameterDefinition self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getAccess' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiList Cryz_ParameterDefinition_GetApplicationData(Cryz_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cryz_ParameterDefinition Cryz_ParameterDefinition_GetByKey(Cryz_ParameterDefinition self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cryz_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getByKey' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetClassName(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.crystallizationStore

parent 
link
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_ParameterDefinition_GetCrystallizationStore(Cryz_ParameterDefinition self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCrystallizationStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.defaultValue

The 
default value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetDefaultValue(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDefaultValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getDefaultValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getDefaultValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetDisplayUnit(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getDisplayUnit' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiList Cryz_ParameterDefinition_GetFieldNames(Cryz_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cryz_ParameterDefinition_GetFullKey(Cryz_ParameterDefinition self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getFullKey' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiBoolean Cryz_ParameterDefinition_GetInConstructor(Cryz_ParameterDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getInConstructor' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiBoolean Cryz_ParameterDefinition_GetIsDeleted(Cryz_ParameterDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.label

Label of the 
parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetLabel(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @returns  Local object key
**/
ApiObject Cryz_ParameterDefinition_GetLocalKey(Cryz_ParameterDefinition self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.maxValue

The 
maximum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetMaxValue(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getMaxValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getMaxValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.minValue

The 
minimum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetMinValue(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getMinValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getMinValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.name

The name of 
the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetName(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getName' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetPackageName(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getPackageName' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetPackageShortName(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetParamType(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParamType");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getParamType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getParamType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiSet Cryz_ParameterDefinition_GetParameters(Cryz_ParameterDefinition self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.parent

link to 
parent object - synonym for crystallizationStore
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_ParameterDefinition_GetParent(Cryz_ParameterDefinition self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiList Cryz_ParameterDefinition_GetPossibleValues(Cryz_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPossibleValues");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getPossibleValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getPossibleValues' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetQualifiedName(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getQualifiedName' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
Impl_MemopsRoot Cryz_ParameterDefinition_GetRoot(Cryz_ParameterDefinition self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.serial

Unique 
identifier.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiInteger Cryz_ParameterDefinition_GetSerial(Cryz_ParameterDefinition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getSerial' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
Impl_TopObject Cryz_ParameterDefinition_GetTopObject(Cryz_ParameterDefinition self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.unit

Unit of 
parameter (L, Kg, g/L, s-1, etc.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiString Cryz_ParameterDefinition_GetUnit(Cryz_ParameterDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_ParameterDefinition Cryz_ParameterDefinition_Init(Cryz_CrystallizationStore parent, ApiMap attrlinks)
{
  
  return Cryz_CrystallizationStore_NewParameterDefinition(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore parent
  @returns  the new object
**/
Cryz_ParameterDefinition Cryz_ParameterDefinition_Init_reqd(Cryz_CrystallizationStore parent)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cryz_ParameterDefinition_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
void *Cryz_ParameterDefinition_RemoveApplicationData(Cryz_ParameterDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.lims.Crystallization.ParameterDefinition.possibleValues

The list of 
possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_RemovePossibleValue(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePossibleValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'removePossibleValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'removePossibleValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cryz_ParameterDefinition_Set(Cryz_ParameterDefinition self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ParameterDefinition self
  @param  Acco_AccessObject value
**/
void *Cryz_ParameterDefinition_SetAccess(Cryz_ParameterDefinition self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setAccess' is not callable");
  
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
  @param  Cryz_ParameterDefinition self
  @param  ApiList values
**/
void *Cryz_ParameterDefinition_SetApplicationData(Cryz_ParameterDefinition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.defaultValue

The 
default value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetDefaultValue(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDefaultValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setDefaultValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setDefaultValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.Crystallization.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetDisplayUnit(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.label

Label of the 
parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetLabel(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.maxValue

The 
maximum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetMaxValue(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setMaxValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setMaxValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.minValue

The 
minimum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetMinValue(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinValue");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setMinValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setMinValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.name

The name of 
the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetName(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.Crystallization.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetParamType(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParamType");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setParamType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setParamType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiSet values
**/
void *Cryz_ParameterDefinition_SetParameters(Cryz_ParameterDefinition self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setParameters' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiList values
**/
void *Cryz_ParameterDefinition_SetPossibleValues(Cryz_ParameterDefinition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPossibleValues");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setPossibleValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setPossibleValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.serial

Unique 
identifier.
  @param  Cryz_ParameterDefinition self
  @param  ApiInteger value
**/
void *Cryz_ParameterDefinition_SetSerial(Cryz_ParameterDefinition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.unit

Unit of 
parameter (L, Kg, g/L, s-1, etc.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
void *Cryz_ParameterDefinition_SetUnit(Cryz_ParameterDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
ApiList Cryz_ParameterDefinition_SortedParameters(Cryz_ParameterDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ParameterDefinition: method 'sortedParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
