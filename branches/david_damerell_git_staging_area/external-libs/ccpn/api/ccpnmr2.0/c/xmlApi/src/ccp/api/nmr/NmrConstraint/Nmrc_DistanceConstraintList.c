
#include "ccp.h"

/*
  List of Distance Constraints
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DistanceConstraintList_AddApplicationData(Nmrc_DistanceConstraintList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  Nmr_Experiment value
**/
void *Nmrc_DistanceConstraintList_AddExperiment(Nmrc_DistanceConstraintList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DistanceConstraintList self
  @param  ApiInteger value
**/
void *Nmrc_DistanceConstraintList_AddExperimentSerial(Nmrc_DistanceConstraintList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperimentSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addExperimentSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addExperimentSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiInteger value
**/
void *Nmrc_DistanceConstraintList_AddMeasureListSerial(Nmrc_DistanceConstraintList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMeasureListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addMeasureListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addMeasureListSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nmrc_DistanceConstraintList_AddMeasurementList(Nmrc_DistanceConstraintList self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
void *Nmrc_DistanceConstraintList_AddNmrConstraintListValidation(Nmrc_DistanceConstraintList self, Vald_NmrConstraintListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraintListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addNmrConstraintListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addNmrConstraintListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
void *Nmrc_DistanceConstraintList_AddNmrSimEnergyTerm(Nmrc_DistanceConstraintList self, Nsim_NmrSimEnergyTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'addNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'addNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiBoolean complete
**/
void *Nmrc_DistanceConstraintList_CheckAllValid(Nmrc_DistanceConstraintList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiBoolean complete
**/
void *Nmrc_DistanceConstraintList_CheckValid(Nmrc_DistanceConstraintList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'checkValid' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
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
ApiList Nmrc_DistanceConstraintList_FindAllApplicationData_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
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
ApiSet Nmrc_DistanceConstraintList_FindAllConstraints_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
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
ApiSet Nmrc_DistanceConstraintList_FindAllExperiments_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
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
ApiSet Nmrc_DistanceConstraintList_FindAllMeasurementLists_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllNmrConstraintListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllNmrConstraintListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
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
ApiSet Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrConstraintListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findAllNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findAllNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_DistanceConstraintList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
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
ApiSet Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindAllNmrSimEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
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
Impl_ApplicationData Nmrc_DistanceConstraintList_FindFirstApplicationData_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Nmrc_DistanceConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
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
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_FindFirstConstraint_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
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
Nmr_Experiment Nmrc_DistanceConstraintList_FindFirstExperiment_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
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
Nmr_AbstractMeasurementList Nmrc_DistanceConstraintList_FindFirstMeasurementList_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Vald_NmrConstraintListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstNmrConstraintListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstNmrConstraintListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
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
Vald_NmrConstraintListValidation Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrConstraintListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_DistanceConstraintList self, ApiMap conditions)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'findFirstNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'findFirstNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_DistanceConstraintList self)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_DistanceConstraintList self, char * key, ApiObject value)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
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
Nsim_NmrSimEnergyTerm Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_DistanceConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_NmrSimEnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DistanceConstraintList_FindFirstNmrSimEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_DistanceConstraintList_Get(Nmrc_DistanceConstraintList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Acco_AccessObject Nmrc_DistanceConstraintList_GetAccess(Nmrc_DistanceConstraintList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getAccess' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_GetApplicationData(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_DistanceConstraintList Nmrc_DistanceConstraintList_GetByKey(Nmrc_DistanceConstraintList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_DistanceConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getByKey' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetClassName(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Nmrc_ConditionState Nmrc_DistanceConstraintList_GetConditionState(Nmrc_DistanceConstraintList self)
{
  
  Nmrc_ConditionState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConditionState");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getConditionState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getConditionState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child 
link to class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetConstraints(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetDetails(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetExperimentSerials(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getExperimentSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getExperimentSerials' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetExperiments(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getExperiments' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_GetFieldNames(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getFieldNames' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiBoolean Nmrc_DistanceConstraintList_GetInConstructor(Nmrc_DistanceConstraintList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiBoolean Nmrc_DistanceConstraintList_GetIsDeleted(Nmrc_DistanceConstraintList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetMeasureListSerials(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasureListSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getMeasureListSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getMeasureListSerials' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetMeasurementLists(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Meth_Method Nmrc_DistanceConstraintList_GetMethod(Nmrc_DistanceConstraintList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetName(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetNmrConstraintListValidations(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getNmrConstraintListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getNmrConstraintListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_DistanceConstraintList_GetNmrConstraintStore(Nmrc_DistanceConstraintList self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiSet Nmrc_DistanceConstraintList_GetNmrSimEnergyTerms(Nmrc_DistanceConstraintList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getNmrSimEnergyTerms' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetPackageName(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetPackageShortName(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_DistanceConstraintList_GetParent(Nmrc_DistanceConstraintList self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getParent' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetQualifiedName(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_DistanceConstraintList_GetRoot(Nmrc_DistanceConstraintList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiInteger Nmrc_DistanceConstraintList_GetSerial(Nmrc_DistanceConstraintList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getSerial' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
Impl_TopObject Nmrc_DistanceConstraintList_GetTopObject(Nmrc_DistanceConstraintList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiString Nmrc_DistanceConstraintList_GetUnit(Nmrc_DistanceConstraintList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiBoolean Nmrc_DistanceConstraintList_GetUsedForCalculation(Nmrc_DistanceConstraintList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUsedForCalculation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'getUsedForCalculation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'getUsedForCalculation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_DistanceConstraintList Nmrc_DistanceConstraintList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewDistanceConstraintList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
Nmrc_DistanceConstraintList Nmrc_DistanceConstraintList_Init_reqd(Nmrc_NmrConstraintStore parent)
{
  
  Nmrc_DistanceConstraintList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrc_DistanceConstraintList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_NewDistanceConstraint(Nmrc_DistanceConstraintList self, ApiMap attrlinks)
{
  
  Nmrc_DistanceConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDistanceConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'newDistanceConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'newDistanceConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @returns  the new object
**/
Nmrc_DistanceConstraint Nmrc_DistanceConstraintList_NewDistanceConstraint_reqd(Nmrc_DistanceConstraintList self)
{
  
  Nmrc_DistanceConstraint  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrc_DistanceConstraintList_NewDistanceConstraint(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintList self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DistanceConstraintList_RemoveApplicationData(Nmrc_DistanceConstraintList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  Nmr_Experiment value
**/
void *Nmrc_DistanceConstraintList_RemoveExperiment(Nmrc_DistanceConstraintList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DistanceConstraintList self
  @param  ApiInteger value
**/
void *Nmrc_DistanceConstraintList_RemoveExperimentSerial(Nmrc_DistanceConstraintList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperimentSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeExperimentSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeExperimentSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiInteger value
**/
void *Nmrc_DistanceConstraintList_RemoveMeasureListSerial(Nmrc_DistanceConstraintList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMeasureListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeMeasureListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeMeasureListSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
void *Nmrc_DistanceConstraintList_RemoveMeasurementList(Nmrc_DistanceConstraintList self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
void *Nmrc_DistanceConstraintList_RemoveNmrConstraintListValidation(Nmrc_DistanceConstraintList self, Vald_NmrConstraintListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraintListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeNmrConstraintListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeNmrConstraintListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
void *Nmrc_DistanceConstraintList_RemoveNmrSimEnergyTerm(Nmrc_DistanceConstraintList self, Nsim_NmrSimEnergyTerm value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'removeNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'removeNmrSimEnergyTerm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.DistanceConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_DistanceConstraintList_Set(Nmrc_DistanceConstraintList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DistanceConstraintList self
  @param  Acco_AccessObject value
**/
void *Nmrc_DistanceConstraintList_SetAccess(Nmrc_DistanceConstraintList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setAccess' is not callable");
  
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
  @param  Nmrc_DistanceConstraintList self
  @param  ApiList values
**/
void *Nmrc_DistanceConstraintList_SetApplicationData(Nmrc_DistanceConstraintList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_DistanceConstraintList self
  @param  Nmrc_ConditionState value
**/
void *Nmrc_DistanceConstraintList_SetConditionState(Nmrc_DistanceConstraintList self, Nmrc_ConditionState value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConditionState");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setConditionState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setConditionState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiString value
**/
void *Nmrc_DistanceConstraintList_SetDetails(Nmrc_DistanceConstraintList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetExperimentSerials(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setExperimentSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setExperimentSerials' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetExperiments(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetMeasureListSerials(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasureListSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setMeasureListSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setMeasureListSerials' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetMeasurementLists(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setMeasurementLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_DistanceConstraintList self
  @param  Meth_Method value
**/
void *Nmrc_DistanceConstraintList_SetMethod(Nmrc_DistanceConstraintList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiString value
**/
void *Nmrc_DistanceConstraintList_SetName(Nmrc_DistanceConstraintList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetNmrConstraintListValidations(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setNmrConstraintListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setNmrConstraintListValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @param  ApiSet values
**/
void *Nmrc_DistanceConstraintList_SetNmrSimEnergyTerms(Nmrc_DistanceConstraintList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiInteger value
**/
void *Nmrc_DistanceConstraintList_SetSerial(Nmrc_DistanceConstraintList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiString value
**/
void *Nmrc_DistanceConstraintList_SetUnit(Nmrc_DistanceConstraintList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_DistanceConstraintList self
  @param  ApiBoolean value
**/
void *Nmrc_DistanceConstraintList_SetUsedForCalculation(Nmrc_DistanceConstraintList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUsedForCalculation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'setUsedForCalculation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'setUsedForCalculation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.DistanceConstraintList.constraints

child link to 
class DistanceConstraint
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_SortedConstraints(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'sortedConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'sortedConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_SortedExperiments(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_SortedMeasurementLists(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'sortedMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'sortedMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_SortedNmrConstraintListValidations(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'sortedNmrConstraintListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'sortedNmrConstraintListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DistanceConstraintList self
  @returns   the result
**/
ApiList Nmrc_DistanceConstraintList_SortedNmrSimEnergyTerms(Nmrc_DistanceConstraintList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSimEnergyTerms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: cannot find method 'sortedNmrSimEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DistanceConstraintList: method 'sortedNmrSimEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
