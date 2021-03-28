
#include "ccp.h"

/*
  Reference Energy Potential term. Defines the shape of the potential function. May be a term in an existing potential function, or a restraint energy term. May be characterised by parameters. The precise interpretation generally requires reference to the application.
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  Impl_ApplicationData value
**/
void *Anpr_RefPotentialTerm_AddApplicationData(Anpr_RefPotentialTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiBoolean complete
**/
void *Anpr_RefPotentialTerm_CheckAllValid(Anpr_RefPotentialTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiBoolean complete
**/
void *Anpr_RefPotentialTerm_CheckValid(Anpr_RefPotentialTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'checkValid' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefPotentialTerm_FindAllApplicationData(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefPotentialTerm_FindAllApplicationData_keyval0(Anpr_RefPotentialTerm self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefPotentialTerm_FindAllApplicationData_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefPotentialTerm_FindAllApplicationData_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefPotentialTerm_FindAllApplicationData_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
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
ApiList Anpr_RefPotentialTerm_FindAllApplicationData_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findAllPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findAllPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales_keyval0(Anpr_RefPotentialTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
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
ApiSet Anpr_RefPotentialTerm_FindAllPotentialScales_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefTermParameters");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findAllRefTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findAllRefTermParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters_keyval0(Anpr_RefPotentialTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindAllRefTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindAllRefTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindAllRefTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindAllRefTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
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
ApiSet Anpr_RefPotentialTerm_FindAllRefTermParameters_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindAllRefTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData_keyval0(Anpr_RefPotentialTerm self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
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
Impl_ApplicationData Anpr_RefPotentialTerm_FindFirstApplicationData_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  Anpr_PotentialScale obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPotentialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findFirstPotentialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findFirstPotentialScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale_keyval0(Anpr_RefPotentialTerm self)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
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
Anpr_PotentialScale Anpr_RefPotentialTerm_FindFirstPotentialScale_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter(Anpr_RefPotentialTerm self, ApiMap conditions)
{
  
  Anpr_RefTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefTermParameter");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'findFirstRefTermParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'findFirstRefTermParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter_keyval0(Anpr_RefPotentialTerm self)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefPotentialTerm_FindFirstRefTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter_keyval1(Anpr_RefPotentialTerm self, char * key, ApiObject value)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefPotentialTerm_FindFirstRefTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter_keyval2(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefPotentialTerm_FindFirstRefTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter_keyval3(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefPotentialTerm_FindFirstRefTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
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
Anpr_RefTermParameter Anpr_RefPotentialTerm_FindFirstRefTermParameter_keyval4(Anpr_RefPotentialTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefPotentialTerm_FindFirstRefTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_RefPotentialTerm_Get(Anpr_RefPotentialTerm self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
Acco_AccessObject Anpr_RefPotentialTerm_GetAccess(Anpr_RefPotentialTerm self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
molsim.AnnealProtocol.RefPotentialTerm.annealProtocolStore

parent link
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
Anpr_AnnealProtocolStore Anpr_RefPotentialTerm_GetAnnealProtocolStore(Anpr_RefPotentialTerm self)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getAnnealProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.application

Name of 
application that uses the RefPotentialTerm. Part of Object key. 
RefPotentialTerm not limited to a single application should have 
application 'general'.
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetApplication(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getApplication' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiList Anpr_RefPotentialTerm_GetApplicationData(Anpr_RefPotentialTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_RefPotentialTerm Anpr_RefPotentialTerm_GetByKey(Anpr_RefPotentialTerm self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getByKey' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetClassName(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
molsim.AnnealProtocol.RefPotentialTerm.code

Application-specific name 
for the RefPotentialTerm. Part of class key.
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetCode(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetDetails(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getDetails' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiList Anpr_RefPotentialTerm_GetFieldNames(Anpr_RefPotentialTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_RefPotentialTerm_GetFullKey(Anpr_RefPotentialTerm self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getFullKey' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiBoolean Anpr_RefPotentialTerm_GetInConstructor(Anpr_RefPotentialTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.index

Hand-entered 
serial number of RefPotentialTerm. Part of class key. To distinguish 
versions with same application and code but e.g. different parameters.
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiInteger Anpr_RefPotentialTerm_GetIndex(Anpr_RefPotentialTerm self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIndex");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getIndex'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getIndex' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiBoolean Anpr_RefPotentialTerm_GetIsDeleted(Anpr_RefPotentialTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns  Local object key
**/
ApiObject Anpr_RefPotentialTerm_GetLocalKey(Anpr_RefPotentialTerm self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.name

name of 
RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetName(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getName' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetPackageName(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getPackageName' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetPackageShortName(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.parent

link to parent 
object - synonym for annealProtocolStore
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
Anpr_AnnealProtocolStore Anpr_RefPotentialTerm_GetParent(Anpr_RefPotentialTerm self)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiSet Anpr_RefPotentialTerm_GetPotentialScales(Anpr_RefPotentialTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getPotentialScales' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiString Anpr_RefPotentialTerm_GetQualifiedName(Anpr_RefPotentialTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child 
link to class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiSet Anpr_RefPotentialTerm_GetRefTermParameters(Anpr_RefPotentialTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefTermParameters");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getRefTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getRefTermParameters' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
Impl_MemopsRoot Anpr_RefPotentialTerm_GetRoot(Anpr_RefPotentialTerm self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getRoot' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
Impl_TopObject Anpr_RefPotentialTerm_GetTopObject(Anpr_RefPotentialTerm self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_RefPotentialTerm Anpr_RefPotentialTerm_Init(Anpr_AnnealProtocolStore parent, ApiMap attrlinks)
{
  
  return Anpr_AnnealProtocolStore_NewRefPotentialTerm(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore parent
  @param  char * code
  @param  ApiInteger index
  @returns  the new object
**/
Anpr_RefPotentialTerm Anpr_RefPotentialTerm_Init_reqd(Anpr_AnnealProtocolStore parent, char * code, ApiInteger index)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "index", index);
  
  obj = Anpr_RefPotentialTerm_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_NewRefTermParameter(Anpr_RefPotentialTerm self, ApiMap attrlinks)
{
  
  Anpr_RefTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefTermParameter");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'newRefTermParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'newRefTermParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @param  char * code
  @param  float value
  @returns  the new object
**/
Anpr_RefTermParameter Anpr_RefPotentialTerm_NewRefTermParameter_reqd(Anpr_RefPotentialTerm self, char * code, float value)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Anpr_RefPotentialTerm_NewRefTermParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefPotentialTerm self
  @param  Impl_ApplicationData value
**/
void *Anpr_RefPotentialTerm_RemoveApplicationData(Anpr_RefPotentialTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_RefPotentialTerm_Set(Anpr_RefPotentialTerm self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_RefPotentialTerm self
  @param  Acco_AccessObject value
**/
void *Anpr_RefPotentialTerm_SetAccess(Anpr_RefPotentialTerm self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefPotentialTerm.application

Name of 
application that uses the RefPotentialTerm. Part of Object key. 
RefPotentialTerm not limited to a single application should have 
application 'general'.
  @param  Anpr_RefPotentialTerm self
  @param  ApiString value
**/
void *Anpr_RefPotentialTerm_SetApplication(Anpr_RefPotentialTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setApplication' is not callable");
  
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
  @param  Anpr_RefPotentialTerm self
  @param  ApiList values
**/
void *Anpr_RefPotentialTerm_SetApplicationData(Anpr_RefPotentialTerm self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
molsim.AnnealProtocol.RefPotentialTerm.code

Application-specific name 
for the RefPotentialTerm. Part of class key.
  @param  Anpr_RefPotentialTerm self
  @param  ApiString value
**/
void *Anpr_RefPotentialTerm_SetCode(Anpr_RefPotentialTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefPotentialTerm.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_RefPotentialTerm self
  @param  ApiString value
**/
void *Anpr_RefPotentialTerm_SetDetails(Anpr_RefPotentialTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefPotentialTerm.index

Hand-entered 
serial number of RefPotentialTerm. Part of class key. To distinguish 
versions with same application and code but e.g. different parameters.
  @param  Anpr_RefPotentialTerm self
  @param  ApiInteger value
**/
void *Anpr_RefPotentialTerm_SetIndex(Anpr_RefPotentialTerm self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIndex");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setIndex'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setIndex' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefPotentialTerm.name

name of 
RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiString value
**/
void *Anpr_RefPotentialTerm_SetName(Anpr_RefPotentialTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @param  ApiSet values
**/
void *Anpr_RefPotentialTerm_SetPotentialScales(Anpr_RefPotentialTerm self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'setPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'setPotentialScales' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
molsim.AnnealProtocol.RefPotentialTerm.potentialScales

PotentialScales 
using RefPotentialTerm
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiList Anpr_RefPotentialTerm_SortedPotentialScales(Anpr_RefPotentialTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'sortedPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'sortedPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
molsim.AnnealProtocol.RefPotentialTerm.refTermParameters

child link to 
class RefTermParameter
  @param  Anpr_RefPotentialTerm self
  @returns   the result
**/
ApiList Anpr_RefPotentialTerm_SortedRefTermParameters(Anpr_RefPotentialTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefTermParameters");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: cannot find method 'sortedRefTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefPotentialTerm: method 'sortedRefTermParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
