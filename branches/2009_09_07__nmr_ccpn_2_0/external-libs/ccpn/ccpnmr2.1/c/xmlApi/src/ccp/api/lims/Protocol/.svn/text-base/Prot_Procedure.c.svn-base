
#include "ccp.h"

/*
  A procedure is a list of steps that can be repeated.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  Impl_ApplicationData value
**/
void *Prot_Procedure_AddApplicationData(Prot_Procedure self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Procedure.instrumentTypes

List of instrument 
type associated to a procedure.
  @param  Prot_Procedure self
  @param  Clas_InstrumentType value
**/
void *Prot_Procedure_AddInstrumentType(Prot_Procedure self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'addInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'addInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Protocol.Procedure.remarks

Some remarks.
  @param  Prot_Procedure self
  @param  ApiString value
**/
void *Prot_Procedure_AddRemark(Prot_Procedure self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRemark");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'addRemark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'addRemark' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  ApiBoolean complete
**/
void *Prot_Procedure_CheckAllValid(Prot_Procedure self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  ApiBoolean complete
**/
void *Prot_Procedure_CheckValid(Prot_Procedure self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'checkValid' is not callable");
  
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
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Procedure_FindAllApplicationData(Prot_Procedure self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findAllApplicationData' is not callable");
  
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
  @param  Prot_Procedure self
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Procedure_FindAllApplicationData_keyval0(Prot_Procedure self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Procedure_FindAllApplicationData_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Procedure_FindAllApplicationData_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Prot_Procedure_FindAllApplicationData_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
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
ApiList Prot_Procedure_FindAllApplicationData_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllInstrumentTypes(Prot_Procedure self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findAllInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findAllInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllInstrumentTypes_keyval0(Prot_Procedure self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllInstrumentTypes_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllInstrumentTypes_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllInstrumentTypes_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
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
ApiSet Prot_Procedure_FindAllInstrumentTypes_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllSteps(Prot_Procedure self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findAllSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findAllSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllSteps_keyval0(Prot_Procedure self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindAllSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllSteps_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindAllSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllSteps_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindAllSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Prot_Procedure_FindAllSteps_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindAllSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
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
ApiSet Prot_Procedure_FindAllSteps_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindAllSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData(Prot_Procedure self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findFirstApplicationData' is not callable");
  
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
  @param  Prot_Procedure self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData_keyval0(Prot_Procedure self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
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
Impl_ApplicationData Prot_Procedure_FindFirstApplicationData_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType(Prot_Procedure self, ApiMap conditions)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findFirstInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findFirstInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType_keyval0(Prot_Procedure self)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
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
Clas_InstrumentType Prot_Procedure_FindFirstInstrumentType_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Step Prot_Procedure_FindFirstStep(Prot_Procedure self, ApiMap conditions)
{
  
  Prot_Step obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'findFirstStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'findFirstStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
  @returns  the first value that satisfies the conditions 
**/
Prot_Step Prot_Procedure_FindFirstStep_keyval0(Prot_Procedure self)
{
  
  Prot_Step  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Prot_Procedure_FindFirstStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Step Prot_Procedure_FindFirstStep_keyval1(Prot_Procedure self, char * key, ApiObject value)
{
  
  Prot_Step  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Prot_Procedure_FindFirstStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Step Prot_Procedure_FindFirstStep_keyval2(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Step  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Prot_Procedure_FindFirstStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Step Prot_Procedure_FindFirstStep_keyval3(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Step  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Prot_Procedure_FindFirstStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Protocol.Procedure.steps

child link to class 
Step
  @param  Prot_Procedure self
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
Prot_Step Prot_Procedure_FindFirstStep_keyval4(Prot_Procedure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Step  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Prot_Procedure_FindFirstStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Prot_Procedure_Get(Prot_Procedure self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_Procedure self
  @returns   the result
**/
Acco_AccessObject Prot_Procedure_GetAccess(Prot_Procedure self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getAccess' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
Acco_AccessObject Prot_Procedure_GetActiveAccess(Prot_Procedure self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getActiveAccess' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiList Prot_Procedure_GetApplicationData(Prot_Procedure self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Prot_Procedure Prot_Procedure_GetByKey(Prot_Procedure self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Prot_Procedure obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getByKey' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetClassName(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.details

Details field for comments.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetDetails(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getDetails' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiList Prot_Procedure_GetFieldNames(Prot_Procedure self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Prot_Procedure_GetFullKey(Prot_Procedure self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getFullKey' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiBoolean Prot_Procedure_GetInConstructor(Prot_Procedure self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.instrumentTypes

List of instrument 
type associated to a procedure.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiSet Prot_Procedure_GetInstrumentTypes(Prot_Procedure self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getInstrumentTypes' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiBoolean Prot_Procedure_GetIsDeleted(Prot_Procedure self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @returns  Local object key
**/
ApiObject Prot_Procedure_GetLocalKey(Prot_Procedure self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.name

The name of the procedure.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetName(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.numCycles

The number of times the 
procedure is repeated.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiInteger Prot_Procedure_GetNumCycles(Prot_Procedure self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumCycles");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getNumCycles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getNumCycles' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetPackageName(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getPackageName' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetPackageShortName(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.parent

link to parent object - 
synonym for protocol
  @param  Prot_Procedure self
  @returns   the result
**/
Prot_Protocol Prot_Procedure_GetParent(Prot_Procedure self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.procNumber

The place of the 
procedure in the order of procedures of the protocol. Need not be 
sequential, successive procdedures could be numbered 
(-10,0,10,12,17,20,...). The procedures are performed according to 
increasing value of this attribute.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiInteger Prot_Procedure_GetProcNumber(Prot_Procedure self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProcNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getProcNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getProcNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.protocol

parent link
  @param  Prot_Procedure self
  @returns   the result
**/
Prot_Protocol Prot_Procedure_GetProtocol(Prot_Procedure self)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getProtocol' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetQualifiedName(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.remarks

Some remarks.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiList Prot_Procedure_GetRemarks(Prot_Procedure self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemarks");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getRemarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getRemarks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.role

The role of the procedure that 
it takes for a protocol .
  @param  Prot_Procedure self
  @returns   the result
**/
ApiString Prot_Procedure_GetRole(Prot_Procedure self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getRole' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
Impl_MemopsRoot Prot_Procedure_GetRoot(Prot_Procedure self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.serial

Unique identifier.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiInteger Prot_Procedure_GetSerial(Prot_Procedure self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @returns   the result
**/
ApiSet Prot_Procedure_GetSteps(Prot_Procedure self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getSteps' is not callable");
  
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
  @param  Prot_Procedure self
  @returns   the result
**/
Impl_TopObject Prot_Procedure_GetTopObject(Prot_Procedure self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Protocol.Procedure
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_Procedure Prot_Procedure_Init(Prot_Protocol parent, ApiMap attrlinks)
{
  
  return Prot_Protocol_NewProcedure(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Protocol.Procedure
  @param  Prot_Protocol parent
  @param  ApiInteger procNumber
  @returns  the new object
**/
Prot_Procedure Prot_Procedure_Init_reqd(Prot_Protocol parent, ApiInteger procNumber)
{
  
  Prot_Procedure  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "procNumber", procNumber);
  
  obj = Prot_Procedure_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.AddStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_AddStep Prot_Procedure_NewAddStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_AddStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAddStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newAddStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newAddStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.AddStep
  @param  Prot_Procedure self
  @param  Prot_RefInputSample refInputSample
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_AddStep Prot_Procedure_NewAddStep_reqd(Prot_Procedure self, Prot_RefInputSample refInputSample, ApiInteger stepNumber)
{
  
  Prot_AddStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "refInputSample", refInputSample);
  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewAddStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.CentrifugationStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_CentrifugationStep Prot_Procedure_NewCentrifugationStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_CentrifugationStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCentrifugationStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newCentrifugationStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newCentrifugationStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.CentrifugationStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_CentrifugationStep Prot_Procedure_NewCentrifugationStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_CentrifugationStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewCentrifugationStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.FiltrationStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_FiltrationStep Prot_Procedure_NewFiltrationStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_FiltrationStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newFiltrationStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newFiltrationStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newFiltrationStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.FiltrationStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_FiltrationStep Prot_Procedure_NewFiltrationStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_FiltrationStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewFiltrationStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_FlowStep Prot_Procedure_NewFlowStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_FlowStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newFlowStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newFlowStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newFlowStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_FlowStep Prot_Procedure_NewFlowStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_FlowStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewFlowStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.PressStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_PressStep Prot_Procedure_NewPressStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_PressStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPressStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newPressStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newPressStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.PressStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_PressStep Prot_Procedure_NewPressStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_PressStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewPressStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.SonicationStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_SonicationStep Prot_Procedure_NewSonicationStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_SonicationStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSonicationStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newSonicationStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newSonicationStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.SonicationStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_SonicationStep Prot_Procedure_NewSonicationStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_SonicationStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewSonicationStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.Step
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_Step Prot_Procedure_NewStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_Step obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.Step
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_Step Prot_Procedure_NewStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_Step  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.TemperatureStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_TemperatureStep Prot_Procedure_NewTemperatureStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_TemperatureStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTemperatureStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newTemperatureStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newTemperatureStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.TemperatureStep
  @param  Prot_Procedure self
  @param  float finalTemperature
  @param  float initialTemperature
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_TemperatureStep Prot_Procedure_NewTemperatureStep_reqd(Prot_Procedure self, float finalTemperature, float initialTemperature, ApiInteger stepNumber)
{
  
  Prot_TemperatureStep  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__finalTemperature = ApiFloat_New(finalTemperature);
  ApiFloat api__initialTemperature = ApiFloat_New(initialTemperature);

  PyDict_SetItemString(attrlinks, "finalTemperature", api__finalTemperature);
  PyDict_SetItemString(attrlinks, "initialTemperature", api__initialTemperature);
  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewTemperatureStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__finalTemperature);
  Py_DECREF(api__initialTemperature);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.WaitStep
  @param  Prot_Procedure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Prot_WaitStep Prot_Procedure_NewWaitStep(Prot_Procedure self, ApiMap attrlinks)
{
  
  Prot_WaitStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newWaitStep");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'newWaitStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'newWaitStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Protocol.WaitStep
  @param  Prot_Procedure self
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Prot_WaitStep Prot_Procedure_NewWaitStep_reqd(Prot_Procedure self, ApiInteger stepNumber)
{
  
  Prot_WaitStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Prot_Procedure_NewWaitStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_Procedure self
  @param  Impl_ApplicationData value
**/
void *Prot_Procedure_RemoveApplicationData(Prot_Procedure self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @param  Clas_InstrumentType value
**/
void *Prot_Procedure_RemoveInstrumentType(Prot_Procedure self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'removeInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'removeInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Protocol.Procedure.remarks

Some remarks.
  @param  Prot_Procedure self
  @param  ApiString value
**/
void *Prot_Procedure_RemoveRemark(Prot_Procedure self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRemark");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'removeRemark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'removeRemark' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Protocol.Procedure
  @param  Prot_Procedure self
  @param  ApiString name
  @param  ApiObject value
**/
void *Prot_Procedure_Set(Prot_Procedure self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_Procedure self
  @param  Acco_AccessObject value
**/
void *Prot_Procedure_SetAccess(Prot_Procedure self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setAccess' is not callable");
  
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
  @param  Prot_Procedure self
  @param  ApiList values
**/
void *Prot_Procedure_SetApplicationData(Prot_Procedure self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.details

Details field for comments.
  @param  Prot_Procedure self
  @param  ApiString value
**/
void *Prot_Procedure_SetDetails(Prot_Procedure self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.instrumentTypes

List of instrument 
type associated to a procedure.
  @param  Prot_Procedure self
  @param  ApiSet values
**/
void *Prot_Procedure_SetInstrumentTypes(Prot_Procedure self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setInstrumentTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.name

The name of the procedure.
  @param  Prot_Procedure self
  @param  ApiString value
**/
void *Prot_Procedure_SetName(Prot_Procedure self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.numCycles

The number of times the 
procedure is repeated.
  @param  Prot_Procedure self
  @param  ApiInteger value
**/
void *Prot_Procedure_SetNumCycles(Prot_Procedure self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumCycles");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setNumCycles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setNumCycles' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.procNumber

The place of the 
procedure in the order of procedures of the protocol. Need not be 
sequential, successive procdedures could be numbered 
(-10,0,10,12,17,20,...). The procedures are performed according to 
increasing value of this attribute.
  @param  Prot_Procedure self
  @param  ApiInteger value
**/
void *Prot_Procedure_SetProcNumber(Prot_Procedure self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProcNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setProcNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setProcNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.remarks

Some remarks.
  @param  Prot_Procedure self
  @param  ApiList values
**/
void *Prot_Procedure_SetRemarks(Prot_Procedure self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemarks");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setRemarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setRemarks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.role

The role of the procedure that 
it takes for a protocol .
  @param  Prot_Procedure self
  @param  ApiString value
**/
void *Prot_Procedure_SetRole(Prot_Procedure self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Protocol.Procedure.serial

Unique identifier.
  @param  Prot_Procedure self
  @param  ApiInteger value
**/
void *Prot_Procedure_SetSerial(Prot_Procedure self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Procedure.instrumentTypes

List of 
instrument type associated to a procedure.
  @param  Prot_Procedure self
  @returns   the result
**/
ApiList Prot_Procedure_SortedInstrumentTypes(Prot_Procedure self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'sortedInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'sortedInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Protocol.Procedure.steps

child link to class Step
  @param  Prot_Procedure self
  @returns   the result
**/
ApiList Prot_Procedure_SortedSteps(Prot_Procedure self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSteps");
  
  if (!method)
    return raiseApiException("ccp.lims.Protocol.Procedure: cannot find method 'sortedSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Protocol.Procedure: method 'sortedSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
