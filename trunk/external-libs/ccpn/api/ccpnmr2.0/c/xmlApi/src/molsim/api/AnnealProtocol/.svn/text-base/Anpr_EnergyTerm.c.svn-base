
#include "ccp.h"

/*
  Energy term used in a protocol,  with successive scaling factors, refPotentialTerms
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  Impl_ApplicationData value
**/
void *Anpr_EnergyTerm_AddApplicationData(Anpr_EnergyTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  Nsim_NmrSimEnergyTerm value
**/
void *Anpr_EnergyTerm_AddNmrSimEnergyTerm(Anpr_EnergyTerm self, Nsim_NmrSimEnergyTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'addNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'addNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean complete
**/
void *Anpr_EnergyTerm_CheckAllValid(Anpr_EnergyTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean complete
**/
void *Anpr_EnergyTerm_CheckValid(Anpr_EnergyTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'checkValid' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_EnergyTerm_FindAllApplicationData(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval0(Anpr_EnergyTerm self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
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
ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findAllNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findAllNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval0(Anpr_EnergyTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
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
ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllPotentialScales(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findAllPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findAllPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval0(Anpr_EnergyTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
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
ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindAllPotentialScales(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval0(Anpr_EnergyTerm self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
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
Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findFirstNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findFirstNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval0(Anpr_EnergyTerm self)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
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
Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale(Anpr_EnergyTerm self, ApiMap conditions)
{
  
  Anpr_PotentialScale obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPotentialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'findFirstPotentialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'findFirstPotentialScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval0(Anpr_EnergyTerm self)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_EnergyTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_EnergyTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_EnergyTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_EnergyTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
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
Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_PotentialScale  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_EnergyTerm_FindFirstPotentialScale(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_EnergyTerm_Get(Anpr_EnergyTerm self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
Acco_AccessObject Anpr_EnergyTerm_GetAccess(Anpr_EnergyTerm self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.annealProtocol

parent link
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
Anpr_AnnealProtocol Anpr_EnergyTerm_GetAnnealProtocol(Anpr_EnergyTerm self)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getAnnealProtocol' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiList Anpr_EnergyTerm_GetApplicationData(Anpr_EnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_EnergyTerm Anpr_EnergyTerm_GetByKey(Anpr_EnergyTerm self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getByKey' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetClassName(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.code

Name identifying 
EnergyTerm in the context of the application using the protocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetCode(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetDetails(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getDetails' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiList Anpr_EnergyTerm_GetFieldNames(Anpr_EnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_EnergyTerm_GetFullKey(Anpr_EnergyTerm self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getFullKey' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiBoolean Anpr_EnergyTerm_GetInConstructor(Anpr_EnergyTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getInConstructor' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiBoolean Anpr_EnergyTerm_GetIsDeleted(Anpr_EnergyTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @returns  Local object key
**/
ApiObject Anpr_EnergyTerm_GetLocalKey(Anpr_EnergyTerm self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.name

User-intelligible name of 
EnergyTerm
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetName(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiSet Anpr_EnergyTerm_GetNmrSimEnergyTerms(Anpr_EnergyTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getNmrSimEnergyTerms' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetPackageName(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getPackageName' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetPackageShortName(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.parent

link to parent object - 
synonym for annealProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
Anpr_AnnealProtocol Anpr_EnergyTerm_GetParent(Anpr_EnergyTerm self)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link to 
class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiSet Anpr_EnergyTerm_GetPotentialScales(Anpr_EnergyTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getPotentialScales' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiString Anpr_EnergyTerm_GetQualifiedName(Anpr_EnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getQualifiedName' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
Impl_MemopsRoot Anpr_EnergyTerm_GetRoot(Anpr_EnergyTerm self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.EnergyTerm.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiInteger Anpr_EnergyTerm_GetSerial(Anpr_EnergyTerm self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getSerial' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
Impl_TopObject Anpr_EnergyTerm_GetTopObject(Anpr_EnergyTerm self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_EnergyTerm Anpr_EnergyTerm_Init(Anpr_AnnealProtocol parent, ApiMap attrlinks)
{
  
  return Anpr_AnnealProtocol_NewEnergyTerm(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol parent
  @returns  the new object
**/
Anpr_EnergyTerm Anpr_EnergyTerm_Init_reqd(Anpr_AnnealProtocol parent)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anpr_EnergyTerm_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_PotentialScale Anpr_EnergyTerm_NewPotentialScale(Anpr_EnergyTerm self, ApiMap attrlinks)
{
  
  Anpr_PotentialScale obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPotentialScale");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'newPotentialScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'newPotentialScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm self
  @param  Anpr_AnnealStage annealStage
  @param  float finalScale
  @param  float initialScale
  @param  Anpr_RefPotentialTerm refPotentialTerm
  @returns  the new object
**/
Anpr_PotentialScale Anpr_EnergyTerm_NewPotentialScale_reqd(Anpr_EnergyTerm self, Anpr_AnnealStage annealStage, float finalScale, float initialScale, Anpr_RefPotentialTerm refPotentialTerm)
{
  
  Anpr_PotentialScale  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__finalScale = ApiFloat_New(finalScale);
  ApiFloat api__initialScale = ApiFloat_New(initialScale);

  PyDict_SetItemString(attrlinks, "annealStage", annealStage);
  PyDict_SetItemString(attrlinks, "finalScale", api__finalScale);
  PyDict_SetItemString(attrlinks, "initialScale", api__initialScale);
  PyDict_SetItemString(attrlinks, "refPotentialTerm", refPotentialTerm);
  
  obj = Anpr_EnergyTerm_NewPotentialScale(self, attrlinks);
  
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
  @param  Anpr_EnergyTerm self
  @param  Impl_ApplicationData value
**/
void *Anpr_EnergyTerm_RemoveApplicationData(Anpr_EnergyTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  Nsim_NmrSimEnergyTerm value
**/
void *Anpr_EnergyTerm_RemoveNmrSimEnergyTerm(Anpr_EnergyTerm self, Nsim_NmrSimEnergyTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'removeNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'removeNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_EnergyTerm_Set(Anpr_EnergyTerm self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_EnergyTerm self
  @param  Acco_AccessObject value
**/
void *Anpr_EnergyTerm_SetAccess(Anpr_EnergyTerm self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setAccess' is not callable");
  
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
  @param  Anpr_EnergyTerm self
  @param  ApiList values
**/
void *Anpr_EnergyTerm_SetApplicationData(Anpr_EnergyTerm self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.EnergyTerm.code

Name identifying 
EnergyTerm in the context of the application using the protocol
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
void *Anpr_EnergyTerm_SetCode(Anpr_EnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.EnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
void *Anpr_EnergyTerm_SetDetails(Anpr_EnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.EnergyTerm.name

User-intelligible name of 
EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
void *Anpr_EnergyTerm_SetName(Anpr_EnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiSet values
**/
void *Anpr_EnergyTerm_SetNmrSimEnergyTerms(Anpr_EnergyTerm self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.EnergyTerm.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anpr_EnergyTerm self
  @param  ApiInteger value
**/
void *Anpr_EnergyTerm_SetSerial(Anpr_EnergyTerm self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiList Anpr_EnergyTerm_SortedNmrSimEnergyTerms(Anpr_EnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'sortedNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'sortedNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
ApiList Anpr_EnergyTerm_SortedPotentialScales(Anpr_EnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPotentialScales");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: cannot find method 'sortedPotentialScales'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.EnergyTerm: method 'sortedPotentialScales' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
