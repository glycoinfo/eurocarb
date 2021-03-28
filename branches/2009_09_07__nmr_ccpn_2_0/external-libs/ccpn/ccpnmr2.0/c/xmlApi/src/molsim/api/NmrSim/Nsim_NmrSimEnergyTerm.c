
#include "ccp.h"

/*
  Energy potential term used in Nmr simulation run
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  Impl_ApplicationData value
**/
void *Nsim_NmrSimEnergyTerm_AddApplicationData(Nsim_NmrSimEnergyTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint lists 
used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  Nmrc_AbstractConstraintList value
**/
void *Nsim_NmrSimEnergyTerm_AddConstraintList(Nsim_NmrSimEnergyTerm self, Nmrc_AbstractConstraintList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'addConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'addConstraintList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiBoolean complete
**/
void *Nsim_NmrSimEnergyTerm_CheckAllValid(Nsim_NmrSimEnergyTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiBoolean complete
**/
void *Nsim_NmrSimEnergyTerm_CheckValid(Nsim_NmrSimEnergyTerm self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'checkValid' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findAllApplicationData' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
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
ApiList Nsim_NmrSimEnergyTerm_FindAllApplicationData_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findAllConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findAllConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
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
ApiSet Nsim_NmrSimEnergyTerm_FindAllConstraintLists_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEnergyTermParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findAllEnergyTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findAllEnergyTermParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
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
ApiSet Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindAllEnergyTermParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_NmrSimEnergyTerm self
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
Impl_ApplicationData Nsim_NmrSimEnergyTerm_FindFirstApplicationData_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findFirstConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findFirstConstraintList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
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
Nmrc_AbstractConstraintList Nsim_NmrSimEnergyTerm_FindFirstConstraintList_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(Nsim_NmrSimEnergyTerm self, ApiMap conditions)
{
  
  Nsim_EnergyTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEnergyTermParameter");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'findFirstEnergyTermParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'findFirstEnergyTermParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter_keyval0(Nsim_NmrSimEnergyTerm self)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter_keyval1(Nsim_NmrSimEnergyTerm self, char * key, ApiObject value)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter_keyval2(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter_keyval3(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
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
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter_keyval4(Nsim_NmrSimEnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_NmrSimEnergyTerm_FindFirstEnergyTermParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nsim_NmrSimEnergyTerm_Get(Nsim_NmrSimEnergyTerm self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Acco_AccessObject Nsim_NmrSimEnergyTerm_GetAccess(Nsim_NmrSimEnergyTerm self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getAccess' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiList Nsim_NmrSimEnergyTerm_GetApplicationData(Nsim_NmrSimEnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nsim_NmrSimEnergyTerm Nsim_NmrSimEnergyTerm_GetByKey(Nsim_NmrSimEnergyTerm self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getByKey' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetClassName(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.code

Code for (type of) energy 
term, as used in the application being run. Part of class key
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetCode(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint lists 
used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiSet Nsim_NmrSimEnergyTerm_GetConstraintLists(Nsim_NmrSimEnergyTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetDetails(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.energyTerm

Restraint protocol 
followed by Restraint Group
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Anpr_EnergyTerm Nsim_NmrSimEnergyTerm_GetEnergyTerm(Nsim_NmrSimEnergyTerm self)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child link 
to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiSet Nsim_NmrSimEnergyTerm_GetEnergyTermParameters(Nsim_NmrSimEnergyTerm self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnergyTermParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getEnergyTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getEnergyTermParameters' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiList Nsim_NmrSimEnergyTerm_GetFieldNames(Nsim_NmrSimEnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nsim_NmrSimEnergyTerm_GetFullKey(Nsim_NmrSimEnergyTerm self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getFullKey' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimEnergyTerm_GetInConstructor(Nsim_NmrSimEnergyTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getInConstructor' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiBoolean Nsim_NmrSimEnergyTerm_GetIsDeleted(Nsim_NmrSimEnergyTerm self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @returns  Local object key
**/
ApiObject Nsim_NmrSimEnergyTerm_GetLocalKey(Nsim_NmrSimEnergyTerm self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.name

Usert-intelligible name of 
Energy Term
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetName(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getName' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetPackageName(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getPackageName' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetPackageShortName(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.parent

link to parent object - 
synonym for run
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Nsim_Run Nsim_NmrSimEnergyTerm_GetParent(Nsim_NmrSimEnergyTerm self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getParent' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiString Nsim_NmrSimEnergyTerm_GetQualifiedName(Nsim_NmrSimEnergyTerm self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getQualifiedName' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Impl_MemopsRoot Nsim_NmrSimEnergyTerm_GetRoot(Nsim_NmrSimEnergyTerm self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.run

parent link
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Nsim_Run Nsim_NmrSimEnergyTerm_GetRun(Nsim_NmrSimEnergyTerm self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRun");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.NmrSimEnergyTerm.termId

Index of Energy Term. 
DIstinguishes this term from others with the same code. Part of the 
class key.
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiInteger Nsim_NmrSimEnergyTerm_GetTermId(Nsim_NmrSimEnergyTerm self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTermId");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getTermId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getTermId' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
Impl_TopObject Nsim_NmrSimEnergyTerm_GetTopObject(Nsim_NmrSimEnergyTerm self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_NmrSimEnergyTerm Nsim_NmrSimEnergyTerm_Init(Nsim_Run parent, ApiMap attrlinks)
{
  
  return Nsim_Run_NewNmrSimEnergyTerm(parent, attrlinks);
}

/**
  Constructor for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run parent
  @param  char * code
  @param  ApiInteger termId
  @returns  the new object
**/
Nsim_NmrSimEnergyTerm Nsim_NmrSimEnergyTerm_Init_reqd(Nsim_Run parent, char * code, ApiInteger termId)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "termId", termId);
  
  obj = Nsim_NmrSimEnergyTerm_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_NewEnergyTermParameter(Nsim_NmrSimEnergyTerm self, ApiMap attrlinks)
{
  
  Nsim_EnergyTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newEnergyTermParameter");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'newEnergyTermParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'newEnergyTermParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @param  char * code
  @param  float value
  @returns  the new object
**/
Nsim_EnergyTermParameter Nsim_NmrSimEnergyTerm_NewEnergyTermParameter_reqd(Nsim_NmrSimEnergyTerm self, char * code, float value)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nsim_NmrSimEnergyTerm_NewEnergyTermParameter(self, attrlinks);
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @param  Impl_ApplicationData value
**/
void *Nsim_NmrSimEnergyTerm_RemoveApplicationData(Nsim_NmrSimEnergyTerm self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  Nmrc_AbstractConstraintList value
**/
void *Nsim_NmrSimEnergyTerm_RemoveConstraintList(Nsim_NmrSimEnergyTerm self, Nmrc_AbstractConstraintList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintList");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'removeConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'removeConstraintList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nsim_NmrSimEnergyTerm_Set(Nsim_NmrSimEnergyTerm self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_NmrSimEnergyTerm self
  @param  Acco_AccessObject value
**/
void *Nsim_NmrSimEnergyTerm_SetAccess(Nsim_NmrSimEnergyTerm self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setAccess' is not callable");
  
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
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiList values
**/
void *Nsim_NmrSimEnergyTerm_SetApplicationData(Nsim_NmrSimEnergyTerm self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.code

Code for (type of) energy 
term, as used in the application being run. Part of class key
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiString value
**/
void *Nsim_NmrSimEnergyTerm_SetCode(Nsim_NmrSimEnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint lists 
used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiSet values
**/
void *Nsim_NmrSimEnergyTerm_SetConstraintLists(Nsim_NmrSimEnergyTerm self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setConstraintLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiString value
**/
void *Nsim_NmrSimEnergyTerm_SetDetails(Nsim_NmrSimEnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.energyTerm

Restraint protocol 
followed by Restraint Group
  @param  Nsim_NmrSimEnergyTerm self
  @param  Anpr_EnergyTerm value
**/
void *Nsim_NmrSimEnergyTerm_SetEnergyTerm(Nsim_NmrSimEnergyTerm self, Anpr_EnergyTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setEnergyTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.name

Usert-intelligible name of 
Energy Term
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiString value
**/
void *Nsim_NmrSimEnergyTerm_SetName(Nsim_NmrSimEnergyTerm self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.NmrSimEnergyTerm.termId

Index of Energy Term. 
DIstinguishes this term from others with the same code. Part of the 
class key.
  @param  Nsim_NmrSimEnergyTerm self
  @param  ApiInteger value
**/
void *Nsim_NmrSimEnergyTerm_SetTermId(Nsim_NmrSimEnergyTerm self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTermId");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'setTermId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'setTermId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.NmrSimEnergyTerm.constraintLists

Constraint 
lists used in RestraintGroup
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiList Nsim_NmrSimEnergyTerm_SortedConstraintLists(Nsim_NmrSimEnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraintLists");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'sortedConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'sortedConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.NmrSim.NmrSimEnergyTerm.energyTermParameters

child 
link to class EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm self
  @returns   the result
**/
ApiList Nsim_NmrSimEnergyTerm_SortedEnergyTermParameters(Nsim_NmrSimEnergyTerm self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEnergyTermParameters");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: cannot find method 'sortedEnergyTermParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.NmrSimEnergyTerm: method 'sortedEnergyTermParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
