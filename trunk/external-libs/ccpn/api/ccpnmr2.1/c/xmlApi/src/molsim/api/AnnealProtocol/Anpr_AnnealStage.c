
#include "ccp.h"

/*
  Annealing stage - one of several consecutive stges.
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealStage_AddApplicationData(Anpr_AnnealStage self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.AnnealProtocol.AnnealStage.functionParams

Parameters for 
the temperature varying function. Their number and meaning depends on 
the value of 'function'.
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_AddFunctionParam(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addFunctionParam");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'addFunctionParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'addFunctionParam' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealStage_CheckAllValid(Anpr_AnnealStage self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealStage_CheckValid(Anpr_AnnealStage self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'checkValid' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealStage_FindAllApplicationData(Anpr_AnnealStage self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealStage_FindAllApplicationData_keyval0(Anpr_AnnealStage self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealStage_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealStage_FindAllApplicationData_keyval1(Anpr_AnnealStage self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealStage_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealStage_FindAllApplicationData_keyval2(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealStage_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealStage_FindAllApplicationData_keyval3(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealStage_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
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
ApiList Anpr_AnnealStage_FindAllApplicationData_keyval4(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealStage_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealStage_FindAllPotentialScales(Anpr_AnnealStage self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'findAllPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'findAllPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealStage_FindAllPotentialScales_keyval0(Anpr_AnnealStage self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealStage_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealStage_FindAllPotentialScales_keyval1(Anpr_AnnealStage self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealStage_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealStage_FindAllPotentialScales_keyval2(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealStage_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealStage_FindAllPotentialScales_keyval3(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealStage_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
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
ApiSet Anpr_AnnealStage_FindAllPotentialScales_keyval4(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealStage_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData(Anpr_AnnealStage self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData_keyval0(Anpr_AnnealStage self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealStage_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData_keyval1(Anpr_AnnealStage self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealStage_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData_keyval2(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealStage_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData_keyval3(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealStage_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
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
Impl_ApplicationData Anpr_AnnealStage_FindFirstApplicationData_keyval4(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealStage_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale(Anpr_AnnealStage self, ApiMap conditions)
{
  
  Anpr_PotentialScale obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPotentialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'findFirstPotentialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'findFirstPotentialScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale_keyval0(Anpr_AnnealStage self)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealStage_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale_keyval1(Anpr_AnnealStage self, char * key, ApiObject value)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealStage_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale_keyval2(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealStage_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale_keyval3(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealStage_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
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
Anpr_PotentialScale Anpr_AnnealStage_FindFirstPotentialScale_keyval4(Anpr_AnnealStage self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealStage_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_AnnealStage_Get(Anpr_AnnealStage self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Acco_AccessObject Anpr_AnnealStage_GetAccess(Anpr_AnnealStage self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getAccess' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Acco_AccessObject Anpr_AnnealStage_GetActiveAccess(Anpr_AnnealStage self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.annealProtocol

parent link
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Anpr_AnnealProtocol Anpr_AnnealStage_GetAnnealProtocol(Anpr_AnnealStage self)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getAnnealProtocol' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiList Anpr_AnnealStage_GetApplicationData(Anpr_AnnealStage self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_AnnealStage Anpr_AnnealStage_GetByKey(Anpr_AnnealStage self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_AnnealStage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getByKey' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetClassName(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getClassName' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiList Anpr_AnnealStage_GetFieldNames(Anpr_AnnealStage self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.finalTemp

Final temperature 
in degrees K.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiFloat Anpr_AnnealStage_GetFinalTemp(Anpr_AnnealStage self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFinalTemp");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getFinalTemp'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getFinalTemp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_AnnealStage_GetFullKey(Anpr_AnnealStage self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.function

Function used for 
varying temperature. See ScaleFunction data type for details.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetFunction(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunction");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getFunction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.functionParams

Parameters for 
the temperature varying function. Their number and meaning depends on 
the value of 'function'.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiList Anpr_AnnealStage_GetFunctionParams(Anpr_AnnealStage self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunctionParams");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getFunctionParams'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getFunctionParams' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiBoolean Anpr_AnnealStage_GetInConstructor(Anpr_AnnealStage self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.initialTemp

Initial 
temperature in degrees K.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiFloat Anpr_AnnealStage_GetInitialTemp(Anpr_AnnealStage self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInitialTemp");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getInitialTemp'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getInitialTemp' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiBoolean Anpr_AnnealStage_GetIsDeleted(Anpr_AnnealStage self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @returns  Local object key
**/
ApiObject Anpr_AnnealStage_GetLocalKey(Anpr_AnnealStage self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.name

name of stage
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetName(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.numSteps

Number of annealing 
steps
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiInteger Anpr_AnnealStage_GetNumSteps(Anpr_AnnealStage self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumSteps");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getNumSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getNumSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.numSubSteps

Number of 
substeps (e.g. Molecular dynamics steps) for each main step
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiInteger Anpr_AnnealStage_GetNumSubSteps(Anpr_AnnealStage self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumSubSteps");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getNumSubSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getNumSubSteps' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetPackageName(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getPackageName' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetPackageShortName(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.parent

link to parent object 
- synonym for annealProtocol
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Anpr_AnnealProtocol Anpr_AnnealStage_GetParent(Anpr_AnnealStage self)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiSet Anpr_AnnealStage_GetPotentialScales(Anpr_AnnealStage self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getPotentialScales' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiString Anpr_AnnealStage_GetQualifiedName(Anpr_AnnealStage self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getQualifiedName' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Impl_MemopsRoot Anpr_AnnealStage_GetRoot(Anpr_AnnealStage self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.serial

Serial number of 
stage. Set autoamtically. Defines temporal order of stages.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiInteger Anpr_AnnealStage_GetSerial(Anpr_AnnealStage self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.timeStep

Time step in seconds
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiFloat Anpr_AnnealStage_GetTimeStep(Anpr_AnnealStage self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTimeStep");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getTimeStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getTimeStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealStage.timeStepScaling

Scling factor 
aplied to time step. Used in certain protocols such as CNS torsion angle 
dynamics. The actual timestep is self.timestep*seld.timeStepScaling. 
Default value is 1.0.
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiFloat Anpr_AnnealStage_GetTimeStepScaling(Anpr_AnnealStage self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTimeStepScaling");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getTimeStepScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getTimeStepScaling' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @returns   the result
**/
Impl_TopObject Anpr_AnnealStage_GetTopObject(Anpr_AnnealStage self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealProtocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealStage Anpr_AnnealStage_Init(Anpr_AnnealProtocol parent, ApiMap attrlinks)
{
  
  return Anpr_AnnealProtocol_NewAnnealStage(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealProtocol parent
  @param  ApiInteger numSteps
  @returns  the new object
**/
Anpr_AnnealStage Anpr_AnnealStage_Init_reqd(Anpr_AnnealProtocol parent, ApiInteger numSteps)
{
  
  Anpr_AnnealStage  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "numSteps", numSteps);
  
  obj = Anpr_AnnealStage_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealStage self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealStage_RemoveApplicationData(Anpr_AnnealStage self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.AnnealProtocol.AnnealStage.functionParams

Parameters 
for the temperature varying function. Their number and meaning depends 
on the value of 'function'.
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_RemoveFunctionParam(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFunctionParam");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'removeFunctionParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'removeFunctionParam' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_AnnealStage_Set(Anpr_AnnealStage self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealStage self
  @param  Acco_AccessObject value
**/
void *Anpr_AnnealStage_SetAccess(Anpr_AnnealStage self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setAccess' is not callable");
  
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
  @param  Anpr_AnnealStage self
  @param  ApiList values
**/
void *Anpr_AnnealStage_SetApplicationData(Anpr_AnnealStage self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.finalTemp

Final temperature 
in degrees K.
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_SetFinalTemp(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFinalTemp");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setFinalTemp'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setFinalTemp' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.function

Function used for 
varying temperature. See ScaleFunction data type for details.
  @param  Anpr_AnnealStage self
  @param  ApiString value
**/
void *Anpr_AnnealStage_SetFunction(Anpr_AnnealStage self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunction");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.functionParams

Parameters for 
the temperature varying function. Their number and meaning depends on 
the value of 'function'.
  @param  Anpr_AnnealStage self
  @param  ApiList values
**/
void *Anpr_AnnealStage_SetFunctionParams(Anpr_AnnealStage self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunctionParams");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setFunctionParams'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setFunctionParams' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.initialTemp

Initial 
temperature in degrees K.
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_SetInitialTemp(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInitialTemp");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setInitialTemp'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setInitialTemp' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.name

name of stage
  @param  Anpr_AnnealStage self
  @param  ApiString value
**/
void *Anpr_AnnealStage_SetName(Anpr_AnnealStage self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.numSteps

Number of annealing 
steps
  @param  Anpr_AnnealStage self
  @param  ApiInteger value
**/
void *Anpr_AnnealStage_SetNumSteps(Anpr_AnnealStage self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumSteps");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setNumSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setNumSteps' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.numSubSteps

Number of 
substeps (e.g. Molecular dynamics steps) for each main step
  @param  Anpr_AnnealStage self
  @param  ApiInteger value
**/
void *Anpr_AnnealStage_SetNumSubSteps(Anpr_AnnealStage self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumSubSteps");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setNumSubSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setNumSubSteps' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @param  ApiSet values
**/
void *Anpr_AnnealStage_SetPotentialScales(Anpr_AnnealStage self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setPotentialScales' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.serial

Serial number of 
stage. Set autoamtically. Defines temporal order of stages.
  @param  Anpr_AnnealStage self
  @param  ApiInteger value
**/
void *Anpr_AnnealStage_SetSerial(Anpr_AnnealStage self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.timeStep

Time step in seconds
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_SetTimeStep(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTimeStep");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setTimeStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setTimeStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealStage.timeStepScaling

Scling factor 
aplied to time step. Used in certain protocols such as CNS torsion angle 
dynamics. The actual timestep is self.timestep*seld.timeStepScaling. 
Default value is 1.0.
  @param  Anpr_AnnealStage self
  @param  ApiFloat value
**/
void *Anpr_AnnealStage_SetTimeStepScaling(Anpr_AnnealStage self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTimeStepScaling");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'setTimeStepScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'setTimeStepScaling' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
molsim.AnnealProtocol.AnnealStage.potentialScales

PotentialScales in 
use at this AnnealStage
  @param  Anpr_AnnealStage self
  @returns   the result
**/
ApiList Anpr_AnnealStage_SortedPotentialScales(Anpr_AnnealStage self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: cannot find method 'sortedPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealStage: method 'sortedPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
