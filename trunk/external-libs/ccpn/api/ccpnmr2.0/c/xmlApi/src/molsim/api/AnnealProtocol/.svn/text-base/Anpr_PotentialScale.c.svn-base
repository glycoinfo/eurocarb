
#include "ccp.h"

/*
  Restraint potential scaling
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  Impl_ApplicationData value
**/
void *Anpr_PotentialScale_AddApplicationData(Anpr_PotentialScale self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
void *Anpr_PotentialScale_AddFunctionParam(Anpr_PotentialScale self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addFunctionParam");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'addFunctionParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'addFunctionParam' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean complete
**/
void *Anpr_PotentialScale_CheckAllValid(Anpr_PotentialScale self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean complete
**/
void *Anpr_PotentialScale_CheckValid(Anpr_PotentialScale self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'checkValid' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_PotentialScale_FindAllApplicationData(Anpr_PotentialScale self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_PotentialScale_FindAllApplicationData_keyval0(Anpr_PotentialScale self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_PotentialScale_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_PotentialScale_FindAllApplicationData_keyval1(Anpr_PotentialScale self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_PotentialScale_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_PotentialScale_FindAllApplicationData_keyval2(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_PotentialScale_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_PotentialScale_FindAllApplicationData_keyval3(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_PotentialScale_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
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
ApiList Anpr_PotentialScale_FindAllApplicationData_keyval4(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_PotentialScale_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData(Anpr_PotentialScale self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval0(Anpr_PotentialScale self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_PotentialScale_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval1(Anpr_PotentialScale self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_PotentialScale_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval2(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_PotentialScale_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval3(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_PotentialScale_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
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
Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval4(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_PotentialScale_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_PotentialScale_Get(Anpr_PotentialScale self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Acco_AccessObject Anpr_PotentialScale_GetAccess(Anpr_PotentialScale self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.annealStage

AnnealStage to 
which Potential scale refers
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Anpr_AnnealStage Anpr_PotentialScale_GetAnnealStage(Anpr_PotentialScale self)
{
  
  Anpr_AnnealStage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealStage");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getAnnealStage'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getAnnealStage' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiList Anpr_PotentialScale_GetApplicationData(Anpr_PotentialScale self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_PotentialScale Anpr_PotentialScale_GetByKey(Anpr_PotentialScale self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_PotentialScale obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getByKey' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetClassName(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.code

Code identifying teh 
relevant potential scale in the context of the application using the 
protocol. INtended for potential terms that have more than one defining 
parameter being contnuopusly varied, like Haddock RDC angle projections 
restraints. For terms that have only one scaling constant (the normal 
case) this should be left to its default value 'std'.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetCode(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.energyTerm

parent link
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Anpr_EnergyTerm Anpr_PotentialScale_GetEnergyTerm(Anpr_PotentialScale self)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getEnergyTerm' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiList Anpr_PotentialScale_GetFieldNames(Anpr_PotentialScale self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.finalScale

Scale at the 
end of the stage.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiFloat Anpr_PotentialScale_GetFinalScale(Anpr_PotentialScale self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFinalScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getFinalScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getFinalScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_PotentialScale_GetFullKey(Anpr_PotentialScale self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.function

Function used for 
scaling. See ScaleFunction data type for details
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetFunction(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunction");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getFunction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiList Anpr_PotentialScale_GetFunctionParams(Anpr_PotentialScale self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunctionParams");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getFunctionParams'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getFunctionParams' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiBoolean Anpr_PotentialScale_GetInConstructor(Anpr_PotentialScale self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.initialScale

Scale at the 
start of the stage
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiFloat Anpr_PotentialScale_GetInitialScale(Anpr_PotentialScale self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInitialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getInitialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getInitialScale' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiBoolean Anpr_PotentialScale_GetIsDeleted(Anpr_PotentialScale self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @returns  Local object key
**/
ApiObject Anpr_PotentialScale_GetLocalKey(Anpr_PotentialScale self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getLocalKey' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetPackageName(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getPackageName' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetPackageShortName(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.parent

link to parent 
object - synonym for energyTerm
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Anpr_EnergyTerm Anpr_PotentialScale_GetParent(Anpr_PotentialScale self)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getParent' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
ApiString Anpr_PotentialScale_GetQualifiedName(Anpr_PotentialScale self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.PotentialScale.refPotentialTerm

Potential 
term applied
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Anpr_RefPotentialTerm Anpr_PotentialScale_GetRefPotentialTerm(Anpr_PotentialScale self)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefPotentialTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getRefPotentialTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getRefPotentialTerm' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Impl_MemopsRoot Anpr_PotentialScale_GetRoot(Anpr_PotentialScale self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getRoot' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @returns   the result
**/
Impl_TopObject Anpr_PotentialScale_GetTopObject(Anpr_PotentialScale self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_PotentialScale Anpr_PotentialScale_Init(Anpr_EnergyTerm parent, ApiMap attrlinks)
{
  
  return Anpr_EnergyTerm_NewPotentialScale(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm parent
  @param  Anpr_AnnealStage annealStage
  @param  float finalScale
  @param  float initialScale
  @param  Anpr_RefPotentialTerm refPotentialTerm
  @returns  the new object
**/
Anpr_PotentialScale Anpr_PotentialScale_Init_reqd(Anpr_EnergyTerm parent, Anpr_AnnealStage annealStage, float finalScale, float initialScale, Anpr_RefPotentialTerm refPotentialTerm)
{
  
  Anpr_PotentialScale  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__finalScale = ApiFloat_New(finalScale);
  ApiFloat api__initialScale = ApiFloat_New(initialScale);

  PyDict_SetItemString(attrlinks, "annealStage", annealStage);
  PyDict_SetItemString(attrlinks, "finalScale", api__finalScale);
  PyDict_SetItemString(attrlinks, "initialScale", api__initialScale);
  PyDict_SetItemString(attrlinks, "refPotentialTerm", refPotentialTerm);
  
  obj = Anpr_PotentialScale_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__finalScale);
  Py_DECREF(api__initialScale);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  Impl_ApplicationData value
**/
void *Anpr_PotentialScale_RemoveApplicationData(Anpr_PotentialScale self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
molsim.AnnealProtocol.PotentialScale.functionParams

Parameters for the 
scaling function. Their number and meaning depends on the value of 
'function'.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
void *Anpr_PotentialScale_RemoveFunctionParam(Anpr_PotentialScale self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFunctionParam");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'removeFunctionParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'removeFunctionParam' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_PotentialScale_Set(Anpr_PotentialScale self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_PotentialScale self
  @param  Acco_AccessObject value
**/
void *Anpr_PotentialScale_SetAccess(Anpr_PotentialScale self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.annealStage

AnnealStage to 
which Potential scale refers
  @param  Anpr_PotentialScale self
  @param  Anpr_AnnealStage value
**/
void *Anpr_PotentialScale_SetAnnealStage(Anpr_PotentialScale self, Anpr_AnnealStage value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnealStage");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setAnnealStage'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setAnnealStage' is not callable");
  
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
  @param  Anpr_PotentialScale self
  @param  ApiList values
**/
void *Anpr_PotentialScale_SetApplicationData(Anpr_PotentialScale self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.code

Code identifying teh 
relevant potential scale in the context of the application using the 
protocol. INtended for potential terms that have more than one defining 
parameter being contnuopusly varied, like Haddock RDC angle projections 
restraints. For terms that have only one scaling constant (the normal 
case) this should be left to its default value 'std'.
  @param  Anpr_PotentialScale self
  @param  ApiString value
**/
void *Anpr_PotentialScale_SetCode(Anpr_PotentialScale self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.finalScale

Scale at the 
end of the stage.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
void *Anpr_PotentialScale_SetFinalScale(Anpr_PotentialScale self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFinalScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setFinalScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setFinalScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.function

Function used for 
scaling. See ScaleFunction data type for details
  @param  Anpr_PotentialScale self
  @param  ApiString value
**/
void *Anpr_PotentialScale_SetFunction(Anpr_PotentialScale self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunction");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @param  ApiList values
**/
void *Anpr_PotentialScale_SetFunctionParams(Anpr_PotentialScale self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunctionParams");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setFunctionParams'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setFunctionParams' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.initialScale

Scale at the 
start of the stage
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
void *Anpr_PotentialScale_SetInitialScale(Anpr_PotentialScale self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInitialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setInitialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setInitialScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.PotentialScale.refPotentialTerm

Potential 
term applied
  @param  Anpr_PotentialScale self
  @param  Anpr_RefPotentialTerm value
**/
void *Anpr_PotentialScale_SetRefPotentialTerm(Anpr_PotentialScale self, Anpr_RefPotentialTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefPotentialTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: cannot find method 'setRefPotentialTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.PotentialScale: method 'setRefPotentialTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
