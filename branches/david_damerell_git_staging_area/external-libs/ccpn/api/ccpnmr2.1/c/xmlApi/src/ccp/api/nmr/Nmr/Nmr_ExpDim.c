
#include "ccp.h"

/*
  Dimension of Experiment
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpDim_AddApplicationData(Nmr_ExpDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean complete
**/
void *Nmr_ExpDim_CheckAllValid(Nmr_ExpDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean complete
**/
void *Nmr_ExpDim_CheckValid(Nmr_ExpDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'checkValid' is not callable");
  
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
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDim_FindAllApplicationData(Nmr_ExpDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDim_FindAllApplicationData_keyval0(Nmr_ExpDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDim_FindAllApplicationData_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDim_FindAllApplicationData_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDim_FindAllApplicationData_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
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
ApiList Nmr_ExpDim_FindAllApplicationData_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllDataDims(Nmr_ExpDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findAllDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findAllDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllDataDims_keyval0(Nmr_ExpDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllDataDims_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllDataDims_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllDataDims_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
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
ApiSet Nmr_ExpDim_FindAllDataDims_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllExpDimRefs(Nmr_ExpDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findAllExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findAllExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval0(Nmr_ExpDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
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
ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData(Nmr_ExpDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval0(Nmr_ExpDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
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
Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim(Nmr_ExpDim self, ApiMap conditions)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findFirstDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findFirstDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval0(Nmr_ExpDim self)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
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
Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef(Nmr_ExpDim self, ApiMap conditions)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'findFirstExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'findFirstExpDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval0(Nmr_ExpDim self)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDim_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval1(Nmr_ExpDim self, char * key, ApiObject value)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDim_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDim_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDim_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
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
Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDim_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ExpDim_Get(Nmr_ExpDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDim self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpDim_GetAccess(Nmr_ExpDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getAccess' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpDim_GetActiveAccess(Nmr_ExpDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiList Nmr_ExpDim_GetApplicationData(Nmr_ExpDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ExpDim Nmr_ExpDim_GetByKey(Nmr_ExpDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiString Nmr_ExpDim_GetClassName(Nmr_ExpDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to ExpDim.
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiSet Nmr_ExpDim_GetDataDims(Nmr_ExpDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.dim

Dimension number. Dimensions go from one 
to numDim. It is recommended that dimensions are numbered in order of 
storage, so that dimension numDim has the slowest varying index, and 
that dim 1 should be the acquisition dimension, but programs should not 
rely on this.
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiInteger Nmr_ExpDim_GetDim(Nmr_ExpDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiSet Nmr_ExpDim_GetExpDimRefs(Nmr_ExpDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.experiment

parent link
  @param  Nmr_ExpDim self
  @returns   the result
**/
Nmr_Experiment Nmr_ExpDim_GetExperiment(Nmr_ExpDim self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getExperiment' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiList Nmr_ExpDim_GetFieldNames(Nmr_ExpDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ExpDim_GetFullKey(Nmr_ExpDim self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiBoolean Nmr_ExpDim_GetInConstructor(Nmr_ExpDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.isAcquisition

If true the relevant dimension 
is the acquisition dimension.
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiBoolean Nmr_ExpDim_GetIsAcquisition(Nmr_ExpDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsAcquisition");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getIsAcquisition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getIsAcquisition' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiBoolean Nmr_ExpDim_GetIsDeleted(Nmr_ExpDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @returns  Local object key
**/
ApiObject Nmr_ExpDim_GetLocalKey(Nmr_ExpDim self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiString Nmr_ExpDim_GetPackageName(Nmr_ExpDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiString Nmr_ExpDim_GetPackageShortName(Nmr_ExpDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.parent

link to parent object - synonym for 
experiment
  @param  Nmr_ExpDim self
  @returns   the result
**/
Nmr_Experiment Nmr_ExpDim_GetParent(Nmr_ExpDim self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getParent' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiString Nmr_ExpDim_GetQualifiedName(Nmr_ExpDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDim.refExpDim

Corresponding ExpDim in 
RefNmeExperiment
  @param  Nmr_ExpDim self
  @returns   the result
**/
Nmrx_RefExpDim Nmr_ExpDim_GetRefExpDim(Nmr_ExpDim self)
{
  
  Nmrx_RefExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getRefExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getRefExpDim' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ExpDim_GetRoot(Nmr_ExpDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getRoot' is not callable");
  
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
  @param  Nmr_ExpDim self
  @returns   the result
**/
Impl_TopObject Nmr_ExpDim_GetTopObject(Nmr_ExpDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpDim Nmr_ExpDim_Init(Nmr_Experiment parent, ApiMap attrlinks)
{
  
  return Nmr_Experiment_NewExpDim(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment parent
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_ExpDim Nmr_ExpDim_Init_reqd(Nmr_Experiment parent, ApiInteger dim)
{
  
  Nmr_ExpDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_ExpDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpDimRef Nmr_ExpDim_NewExpDimRef(Nmr_ExpDim self, ApiMap attrlinks)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'newExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'newExpDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim self
  @param  float sf
  @returns  the new object
**/
Nmr_ExpDimRef Nmr_ExpDim_NewExpDimRef_reqd(Nmr_ExpDim self, float sf)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__sf = ApiFloat_New(sf);

  PyDict_SetItemString(attrlinks, "sf", api__sf);
  
  obj = Nmr_ExpDim_NewExpDimRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sf);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpDim_RemoveApplicationData(Nmr_ExpDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ExpDim_Set(Nmr_ExpDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDim self
  @param  Acco_AccessObject value
**/
void *Nmr_ExpDim_SetAccess(Nmr_ExpDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setAccess' is not callable");
  
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
  @param  Nmr_ExpDim self
  @param  ApiList values
**/
void *Nmr_ExpDim_SetApplicationData(Nmr_ExpDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiSet values
**/
void *Nmr_ExpDim_SetDataDims(Nmr_ExpDim self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setDataDims' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDim.dim

Dimension number. Dimensions go from one 
to numDim. It is recommended that dimensions are numbered in order of 
storage, so that dimension numDim has the slowest varying index, and 
that dim 1 should be the acquisition dimension, but programs should not 
rely on this.
  @param  Nmr_ExpDim self
  @param  ApiInteger value
**/
void *Nmr_ExpDim_SetDim(Nmr_ExpDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDim.isAcquisition

If true the relevant dimension 
is the acquisition dimension.
  @param  Nmr_ExpDim self
  @param  ApiBoolean value
**/
void *Nmr_ExpDim_SetIsAcquisition(Nmr_ExpDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsAcquisition");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setIsAcquisition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setIsAcquisition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDim.refExpDim

Corresponding ExpDim in 
RefNmeExperiment
  @param  Nmr_ExpDim self
  @param  Nmrx_RefExpDim value
**/
void *Nmr_ExpDim_SetRefExpDim(Nmr_ExpDim self, Nmrx_RefExpDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'setRefExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'setRefExpDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiList Nmr_ExpDim_SortedDataDims(Nmr_ExpDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'sortedDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'sortedDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns   the result
**/
ApiList Nmr_ExpDim_SortedExpDimRefs(Nmr_ExpDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDim: cannot find method 'sortedExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDim: method 'sortedExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
