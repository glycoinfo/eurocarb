
#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  Impl_ApplicationData value
**/
void *Calc_Run_AddApplicationData(Calc_Run self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean complete
**/
void *Calc_Run_CheckAllValid(Calc_Run self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean complete
**/
void *Calc_Run_CheckValid(Calc_Run self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'checkValid' is not callable");
  
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
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_Run_FindAllApplicationData(Calc_Run self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findAllApplicationData' is not callable");
  
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
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_Run_FindAllApplicationData_keyval0(Calc_Run self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_Run_FindAllApplicationData_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_Run_FindAllApplicationData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_Run_FindAllApplicationData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
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
ApiList Calc_Run_FindAllApplicationData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllData(Calc_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findAllData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findAllData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllData_keyval0(Calc_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindAllData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllData_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindAllData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindAllData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindAllData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
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
ApiSet Calc_Run_FindAllData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindAllData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllInputs(Calc_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findAllInputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findAllInputs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllInputs_keyval0(Calc_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindAllInputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllInputs_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindAllInputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllInputs_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindAllInputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllInputs_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindAllInputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
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
ApiSet Calc_Run_FindAllInputs_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindAllInputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllOutputs(Calc_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOutputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findAllOutputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findAllOutputs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllOutputs_keyval0(Calc_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindAllOutputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllOutputs_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindAllOutputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllOutputs_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindAllOutputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllOutputs_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindAllOutputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
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
ApiSet Calc_Run_FindAllOutputs_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindAllOutputs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllRunParameters(Calc_Run self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findAllRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findAllRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllRunParameters_keyval0(Calc_Run self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllRunParameters_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllRunParameters_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_Run_FindAllRunParameters_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
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
ApiSet Calc_Run_FindAllRunParameters_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_Run_FindFirstApplicationData(Calc_Run self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findFirstApplicationData' is not callable");
  
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
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval0(Calc_Run self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
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
Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstData(Calc_Run self, ApiMap conditions)
{
  
  Calc_Data obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findFirstData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findFirstData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstData_keyval0(Calc_Run self)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindFirstData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstData_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindFirstData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindFirstData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindFirstData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
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
Calc_Data Calc_Run_FindFirstData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindFirstData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstInput(Calc_Run self, ApiMap conditions)
{
  
  Calc_Data obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInput");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findFirstInput'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findFirstInput' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstInput_keyval0(Calc_Run self)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindFirstInput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstInput_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindFirstInput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstInput_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindFirstInput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstInput_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindFirstInput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
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
Calc_Data Calc_Run_FindFirstInput_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindFirstInput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstOutput(Calc_Run self, ApiMap conditions)
{
  
  Calc_Data obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOutput");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findFirstOutput'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findFirstOutput' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstOutput_keyval0(Calc_Run self)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindFirstOutput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstOutput_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindFirstOutput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstOutput_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindFirstOutput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_Data Calc_Run_FindFirstOutput_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindFirstOutput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
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
Calc_Data Calc_Run_FindFirstOutput_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_Data  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindFirstOutput(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_Run_FindFirstRunParameter(Calc_Run self, ApiMap conditions)
{
  
  Calc_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'findFirstRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'findFirstRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval0(Calc_Run self)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval1(Calc_Run self, char * key, ApiObject value)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
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
Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_Run_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Calc_Run_Get(Calc_Run self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Run self
  @returns   the result
**/
Acco_AccessObject Calc_Run_GetAccess(Calc_Run self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getAccess' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
Acco_AccessObject Calc_Run_GetActiveAccess(Calc_Run self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getActiveAccess' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_GetApplicationData(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Calc_Run Calc_Run_GetByKey(Calc_Run self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getByKey' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetClassName(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns   the result
**/
ApiSet Calc_Run_GetData(Calc_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetDetails(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getDetails' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_GetFieldNames(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Calc_Run_GetFullKey(Calc_Run self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getFullKey' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiBoolean Calc_Run_GetInConstructor(Calc_Run self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link inputs
  @param  Calc_Run self
  @returns   the result
**/
ApiSet Calc_Run_GetInputs(Calc_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getInputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getInputs' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiBoolean Calc_Run_GetIsDeleted(Calc_Run self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @returns  Local object key
**/
ApiObject Calc_Run_GetLocalKey(Calc_Run self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.nmrCalcStore

parent link
  @param  Calc_Run self
  @returns   the result
**/
Calc_NmrCalcStore Calc_Run_GetNmrCalcStore(Calc_Run self)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrCalcStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getNmrCalcStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getNmrCalcStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.operator

Person submitting the calculation
  @param  Calc_Run self
  @returns   the result
**/
Affi_Person Calc_Run_GetOperator(Calc_Run self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOperator");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getOperator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getOperator' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link outputs
  @param  Calc_Run self
  @returns   the result
**/
ApiSet Calc_Run_GetOutputs(Calc_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getOutputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getOutputs' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetPackageName(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getPackageName' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetPackageShortName(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.parent

link to parent object - synonym for 
nmrCalcStore
  @param  Calc_Run self
  @returns   the result
**/
Calc_NmrCalcStore Calc_Run_GetParent(Calc_Run self)
{
  
  Calc_NmrCalcStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getParent' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetQualifiedName(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getQualifiedName' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
Impl_MemopsRoot Calc_Run_GetRoot(Calc_Run self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns   the result
**/
ApiSet Calc_Run_GetRunParameters(Calc_Run self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Run self
  @returns   the result
**/
ApiInteger Calc_Run_GetSerial(Calc_Run self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.status

Calculation status
  @param  Calc_Run self
  @returns   the result
**/
ApiString Calc_Run_GetStatus(Calc_Run self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Run.structureGeneration

NMR Structure 
generation that run contributes to
  @param  Calc_Run self
  @returns   the result
**/
Nmr_StructureGeneration Calc_Run_GetStructureGeneration(Calc_Run self)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getStructureGeneration' is not callable");
  
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
  @param  Calc_Run self
  @returns   the result
**/
Impl_TopObject Calc_Run_GetTopObject(Calc_Run self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_Run Calc_Run_Init(Calc_NmrCalcStore parent, ApiMap attrlinks)
{
  
  return Calc_NmrCalcStore_NewRun(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore parent
  @returns  the new object
**/
Calc_Run Calc_Run_Init_reqd(Calc_NmrCalcStore parent)
{
  
  Calc_Run  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Calc_Run_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_ConstraintStoreData Calc_Run_NewConstraintStoreData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_ConstraintStoreData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newConstraintStoreData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newConstraintStoreData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newConstraintStoreData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run self
  @param  ApiInteger constraintStoreSerial
  @returns  the new object
**/
Calc_ConstraintStoreData Calc_Run_NewConstraintStoreData_reqd(Calc_Run self, ApiInteger constraintStoreSerial)
{
  
  Calc_ConstraintStoreData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "constraintStoreSerial", constraintStoreSerial);
  
  obj = Calc_Run_NewConstraintStoreData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_DerivedListData Calc_Run_NewDerivedListData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_DerivedListData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDerivedListData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newDerivedListData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newDerivedListData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run self
  @param  ApiInteger derivedDataListSerial
  @returns  the new object
**/
Calc_DerivedListData Calc_Run_NewDerivedListData_reqd(Calc_Run self, ApiInteger derivedDataListSerial)
{
  
  Calc_DerivedListData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "derivedDataListSerial", derivedDataListSerial);
  
  obj = Calc_Run_NewDerivedListData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_ExternalData Calc_Run_NewExternalData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_ExternalData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExternalData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newExternalData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newExternalData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run self
  @returns  the new object
**/
Calc_ExternalData Calc_Run_NewExternalData_reqd(Calc_Run self)
{
  
  Calc_ExternalData  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Calc_Run_NewExternalData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MeasurementListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_MeasurementListData Calc_Run_NewMeasurementListData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_MeasurementListData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMeasurementListData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newMeasurementListData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newMeasurementListData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MeasurementListData
  @param  Calc_Run self
  @param  ApiInteger measurementListSerial
  @returns  the new object
**/
Calc_MeasurementListData Calc_Run_NewMeasurementListData_reqd(Calc_Run self, ApiInteger measurementListSerial)
{
  
  Calc_MeasurementListData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "measurementListSerial", measurementListSerial);
  
  obj = Calc_Run_NewMeasurementListData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_MolResidueData Calc_Run_NewMolResidueData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_MolResidueData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolResidueData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newMolResidueData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newMolResidueData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run self
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
Calc_MolResidueData Calc_Run_NewMolResidueData_reqd(Calc_Run self, char * chainCode, char * molSystemCode)
{
  
  Calc_MolResidueData  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Calc_Run_NewMolResidueData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_MolSystemData Calc_Run_NewMolSystemData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_MolSystemData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolSystemData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newMolSystemData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newMolSystemData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run self
  @param  char * molSystemCode
  @returns  the new object
**/
Calc_MolSystemData Calc_Run_NewMolSystemData_reqd(Calc_Run self, char * molSystemCode)
{
  
  Calc_MolSystemData  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Calc_Run_NewMolSystemData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_PeakListData Calc_Run_NewPeakListData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_PeakListData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakListData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newPeakListData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newPeakListData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run self
  @returns  the new object
**/
Calc_PeakListData Calc_Run_NewPeakListData_reqd(Calc_Run self)
{
  
  Calc_PeakListData  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Calc_Run_NewPeakListData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_RunParameter Calc_Run_NewRunParameter(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run self
  @param  char * code
  @returns  the new object
**/
Calc_RunParameter Calc_Run_NewRunParameter_reqd(Calc_Run self, char * code)
{
  
  Calc_RunParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  
  obj = Calc_Run_NewRunParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_SpectrumData Calc_Run_NewSpectrumData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_SpectrumData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectrumData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newSpectrumData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newSpectrumData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run self
  @returns  the new object
**/
Calc_SpectrumData Calc_Run_NewSpectrumData_reqd(Calc_Run self)
{
  
  Calc_SpectrumData  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Calc_Run_NewSpectrumData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_SpinSystemData Calc_Run_NewSpinSystemData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_SpinSystemData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpinSystemData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newSpinSystemData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newSpinSystemData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run self
  @param  ApiInteger resonanceGroupSerial
  @returns  the new object
**/
Calc_SpinSystemData Calc_Run_NewSpinSystemData_reqd(Calc_Run self, ApiInteger resonanceGroupSerial)
{
  
  Calc_SpinSystemData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonanceGroupSerial", resonanceGroupSerial);
  
  obj = Calc_Run_NewSpinSystemData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_StructureEnsembleData Calc_Run_NewStructureEnsembleData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_StructureEnsembleData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStructureEnsembleData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newStructureEnsembleData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newStructureEnsembleData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run self
  @param  ApiInteger ensembleId
  @param  char * molSystemCode
  @returns  the new object
**/
Calc_StructureEnsembleData Calc_Run_NewStructureEnsembleData_reqd(Calc_Run self, ApiInteger ensembleId, char * molSystemCode)
{
  
  Calc_StructureEnsembleData  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "ensembleId", ensembleId);
  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Calc_Run_NewStructureEnsembleData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_ViolationListData Calc_Run_NewViolationListData(Calc_Run self, ApiMap attrlinks)
{
  
  Calc_ViolationListData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newViolationListData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'newViolationListData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'newViolationListData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run self
  @param  ApiInteger constraintStoreSerial
  @param  ApiInteger violationListSerial
  @returns  the new object
**/
Calc_ViolationListData Calc_Run_NewViolationListData_reqd(Calc_Run self, ApiInteger constraintStoreSerial, ApiInteger violationListSerial)
{
  
  Calc_ViolationListData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "constraintStoreSerial", constraintStoreSerial);
  PyDict_SetItemString(attrlinks, "violationListSerial", violationListSerial);
  
  obj = Calc_Run_NewViolationListData(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  Impl_ApplicationData value
**/
void *Calc_Run_RemoveApplicationData(Calc_Run self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiString name
  @param  ApiObject value
**/
void *Calc_Run_Set(Calc_Run self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Run self
  @param  Acco_AccessObject value
**/
void *Calc_Run_SetAccess(Calc_Run self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setAccess' is not callable");
  
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
  @param  Calc_Run self
  @param  ApiList values
**/
void *Calc_Run_SetApplicationData(Calc_Run self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Run self
  @param  ApiString value
**/
void *Calc_Run_SetDetails(Calc_Run self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Run.operator

Person submitting the calculation
  @param  Calc_Run self
  @param  Affi_Person value
**/
void *Calc_Run_SetOperator(Calc_Run self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOperator");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setOperator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setOperator' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Run self
  @param  ApiInteger value
**/
void *Calc_Run_SetSerial(Calc_Run self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Run.status

Calculation status
  @param  Calc_Run self
  @param  ApiString value
**/
void *Calc_Run_SetStatus(Calc_Run self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Run.structureGeneration

NMR Structure 
generation that run contributes to
  @param  Calc_Run self
  @param  Nmr_StructureGeneration value
**/
void *Calc_Run_SetStructureGeneration(Calc_Run self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'setStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'setStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_SortedData(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'sortedData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'sortedData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_SortedInputs(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'sortedInputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'sortedInputs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_SortedOutputs(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOutputs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'sortedOutputs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'sortedOutputs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns   the result
**/
ApiList Calc_Run_SortedRunParameters(Calc_Run self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.Run: cannot find method 'sortedRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.Run: method 'sortedRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
