
#include "ccp.h"

/*
  Reference Experiment. Selects experiment dimensions from the steps available in the NmrExpPrototype
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  Impl_ApplicationData value
**/
void *Nmrx_RefExperiment_AddApplicationData(Nmrx_RefExperiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiBoolean complete
**/
void *Nmrx_RefExperiment_CheckAllValid(Nmrx_RefExperiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiBoolean complete
**/
void *Nmrx_RefExperiment_CheckValid(Nmrx_RefExperiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'checkValid' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExperiment_FindAllApplicationData(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExperiment_FindAllApplicationData_keyval0(Nmrx_RefExperiment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExperiment_FindAllApplicationData_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExperiment_FindAllApplicationData_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExperiment_FindAllApplicationData_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
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
ApiList Nmrx_RefExperiment_FindAllApplicationData_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllRefExpDims(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findAllRefExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findAllRefExpDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllRefExpDims_keyval0(Nmrx_RefExperiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindAllRefExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllRefExpDims_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindAllRefExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllRefExpDims_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindAllRefExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllRefExpDims_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindAllRefExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
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
ApiSet Nmrx_RefExperiment_FindAllRefExpDims_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindAllRefExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllSystematicNames(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSystematicNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findAllSystematicNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findAllSystematicNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllSystematicNames_keyval0(Nmrx_RefExperiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindAllSystematicNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllSystematicNames_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindAllSystematicNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllSystematicNames_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindAllSystematicNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExperiment_FindAllSystematicNames_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindAllSystematicNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
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
ApiSet Nmrx_RefExperiment_FindAllSystematicNames_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindAllSystematicNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData_keyval0(Nmrx_RefExperiment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
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
Impl_ApplicationData Nmrx_RefExperiment_FindFirstApplicationData_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  Nmrx_RefExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findFirstRefExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findFirstRefExpDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim_keyval0(Nmrx_RefExperiment self)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindFirstRefExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindFirstRefExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindFirstRefExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindFirstRefExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child 
link to class RefExpDim
  @param  Nmrx_RefExperiment self
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
Nmrx_RefExpDim Nmrx_RefExperiment_FindFirstRefExpDim_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindFirstRefExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName(Nmrx_RefExperiment self, ApiMap conditions)
{
  
  Nmrx_SystematicName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSystematicName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'findFirstSystematicName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'findFirstSystematicName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName_keyval0(Nmrx_RefExperiment self)
{
  
  Nmrx_SystematicName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExperiment_FindFirstSystematicName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName_keyval1(Nmrx_RefExperiment self, char * key, ApiObject value)
{
  
  Nmrx_SystematicName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExperiment_FindFirstSystematicName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName_keyval2(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_SystematicName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExperiment_FindFirstSystematicName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName_keyval3(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_SystematicName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExperiment_FindFirstSystematicName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child link to 
class SystematicName
  @param  Nmrx_RefExperiment self
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
Nmrx_SystematicName Nmrx_RefExperiment_FindFirstSystematicName_keyval4(Nmrx_RefExperiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_SystematicName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExperiment_FindFirstSystematicName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_RefExperiment_Get(Nmrx_RefExperiment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Acco_AccessObject Nmrx_RefExperiment_GetAccess(Nmrx_RefExperiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getAccess' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Acco_AccessObject Nmrx_RefExperiment_GetActiveAccess(Nmrx_RefExperiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiList Nmrx_RefExperiment_GetApplicationData(Nmrx_RefExperiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_RefExperiment Nmrx_RefExperiment_GetByKey(Nmrx_RefExperiment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_RefExperiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getByKey' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetClassName(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getClassName' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiList Nmrx_RefExperiment_GetFieldNames(Nmrx_RefExperiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_RefExperiment_GetFullKey(Nmrx_RefExperiment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getFullKey' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiBoolean Nmrx_RefExperiment_GetInConstructor(Nmrx_RefExperiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiBoolean Nmrx_RefExperiment_GetIsDeleted(Nmrx_RefExperiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.isReversed

Is experiment 
carried out with the transfer steps and sequence of ExpMeasurements in 
reverse  order relative to the order given in the ExpGraphs?
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiBoolean Nmrx_RefExperiment_GetIsReversed(Nmrx_RefExperiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReversed");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getIsReversed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getIsReversed' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @returns  Local object key
**/
ApiObject Nmrx_RefExperiment_GetLocalKey(Nmrx_RefExperiment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.name

name of 
RefExperiment
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetName(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.nmrExpPrototype

parent 
link
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_RefExperiment_GetNmrExpPrototype(Nmrx_RefExperiment self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpPrototype");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getNmrExpPrototype' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetPackageName(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetPackageShortName(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.parent

link to parent 
object - synonym for nmrExpPrototype
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_RefExperiment_GetParent(Nmrx_RefExperiment self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getParent' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetQualifiedName(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link to 
class RefExpDim
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiSet Nmrx_RefExperiment_GetRefExpDims(Nmrx_RefExperiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getRefExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getRefExpDims' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_RefExperiment_GetRoot(Nmrx_RefExperiment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiInteger Nmrx_RefExperiment_GetSerial(Nmrx_RefExperiment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.synonym

Alternative name 
of RefExperiment. Intended for longer, more precisely descriptive names. 
Dimensionality, if desired, should be given as a prefix separated by a 
dot, e.g. '3D.'. Detailed indications of transfer mechanisms (e.g. 
'HSQC', 'HMQC', should be given in the same manner as other transfer 
mechanisms (like 'NOESY').
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiString Nmrx_RefExperiment_GetSynonym(Nmrx_RefExperiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonym");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getSynonym' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiSet Nmrx_RefExperiment_GetSystematicNames(Nmrx_RefExperiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSystematicNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getSystematicNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getSystematicNames' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
Impl_TopObject Nmrx_RefExperiment_GetTopObject(Nmrx_RefExperiment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_RefExperiment Nmrx_RefExperiment_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks)
{
  
  return Nmrx_NmrExpPrototype_NewRefExperiment(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_NmrExpPrototype parent
  @returns  the new object
**/
Nmrx_RefExperiment Nmrx_RefExperiment_Init_reqd(Nmrx_NmrExpPrototype parent)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_RefExperiment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.RefExpDim
  @param  Nmrx_RefExperiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_RefExpDim Nmrx_RefExperiment_NewRefExpDim(Nmrx_RefExperiment self, ApiMap attrlinks)
{
  
  Nmrx_RefExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'newRefExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'newRefExpDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.RefExpDim
  @param  Nmrx_RefExperiment self
  @param  ApiInteger dim
  @returns  the new object
**/
Nmrx_RefExpDim Nmrx_RefExperiment_NewRefExpDim_reqd(Nmrx_RefExperiment self, ApiInteger dim)
{
  
  Nmrx_RefExpDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmrx_RefExperiment_NewRefExpDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.SystematicName
  @param  Nmrx_RefExperiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_SystematicName Nmrx_RefExperiment_NewSystematicName(Nmrx_RefExperiment self, ApiMap attrlinks)
{
  
  Nmrx_SystematicName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSystematicName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'newSystematicName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'newSystematicName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.SystematicName
  @param  Nmrx_RefExperiment self
  @param  char * name
  @param  char * namingSystem
  @returns  the new object
**/
Nmrx_SystematicName Nmrx_RefExperiment_NewSystematicName_reqd(Nmrx_RefExperiment self, char * name, char * namingSystem)
{
  
  Nmrx_SystematicName  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);
  ApiString api__namingSystem = ApiString_New(namingSystem);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  
  obj = Nmrx_RefExperiment_NewSystematicName(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  Py_DECREF(api__namingSystem);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExperiment self
  @param  Impl_ApplicationData value
**/
void *Nmrx_RefExperiment_RemoveApplicationData(Nmrx_RefExperiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_RefExperiment_Set(Nmrx_RefExperiment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExperiment self
  @param  Acco_AccessObject value
**/
void *Nmrx_RefExperiment_SetAccess(Nmrx_RefExperiment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setAccess' is not callable");
  
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
  @param  Nmrx_RefExperiment self
  @param  ApiList values
**/
void *Nmrx_RefExperiment_SetApplicationData(Nmrx_RefExperiment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExperiment.isReversed

Is experiment 
carried out with the transfer steps and sequence of ExpMeasurements in 
reverse  order relative to the order given in the ExpGraphs?
  @param  Nmrx_RefExperiment self
  @param  ApiBoolean value
**/
void *Nmrx_RefExperiment_SetIsReversed(Nmrx_RefExperiment self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsReversed");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setIsReversed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setIsReversed' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExperiment.name

name of 
RefExperiment
  @param  Nmrx_RefExperiment self
  @param  ApiString value
**/
void *Nmrx_RefExperiment_SetName(Nmrx_RefExperiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExperiment.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExperiment self
  @param  ApiInteger value
**/
void *Nmrx_RefExperiment_SetSerial(Nmrx_RefExperiment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExperiment.synonym

Alternative name 
of RefExperiment. Intended for longer, more precisely descriptive names. 
Dimensionality, if desired, should be given as a prefix separated by a 
dot, e.g. '3D.'. Detailed indications of transfer mechanisms (e.g. 
'HSQC', 'HMQC', should be given in the same manner as other transfer 
mechanisms (like 'NOESY').
  @param  Nmrx_RefExperiment self
  @param  ApiString value
**/
void *Nmrx_RefExperiment_SetSynonym(Nmrx_RefExperiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonym");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'setSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'setSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.RefExperiment.refExpDims

child link 
to class RefExpDim
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiList Nmrx_RefExperiment_SortedRefExpDims(Nmrx_RefExperiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'sortedRefExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'sortedRefExpDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.RefExperiment.systematicNames

child 
link to class SystematicName
  @param  Nmrx_RefExperiment self
  @returns   the result
**/
ApiList Nmrx_RefExperiment_SortedSystematicNames(Nmrx_RefExperiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSystematicNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: cannot find method 'sortedSystematicNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExperiment: method 'sortedSystematicNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
