
#include "ccp.h"

/*
  Constraint with a single interval for the constrained value. May be used to constraint to a specific value (targetValue) to constrain to within an interval, or both.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_SingleConstraint_AddApplicationData(Nmrc_SingleConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_SingleConstraint_AddConstraintGroup(Nmrc_SingleConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'addConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'addConstraintGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_SingleConstraint_AddNmrConstraintValidation(Nmrc_SingleConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'addNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'addNmrConstraintValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_SingleConstraint_AddPeak(Nmrc_SingleConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_SingleConstraint_FindAllApplicationData(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
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
ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllConstraintGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
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
ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllNmrConstraintValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
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
ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
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
ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeaks(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
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
ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllViolations(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findAllViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findAllViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval0(Nmrc_SingleConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
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
ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval0(Nmrc_SingleConstraint self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
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
Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstConstraintGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval0(Nmrc_SingleConstraint self)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
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
Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Vald_NmrConstraintValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstNmrConstraintValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_SingleConstraint self)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
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
Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintPeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstPeakContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval0(Nmrc_SingleConstraint self)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
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
Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval0(Nmrc_SingleConstraint self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
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
Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation(Nmrc_SingleConstraint self, ApiMap conditions)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'findFirstViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'findFirstViolation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval0(Nmrc_SingleConstraint self)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_SingleConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_SingleConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_SingleConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_SingleConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
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
Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_SingleConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Acco_AccessObject Nmrc_SingleConstraint_GetAccess(Nmrc_SingleConstraint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getAccess' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Acco_AccessObject Nmrc_SingleConstraint_GetActiveAccess(Nmrc_SingleConstraint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_GetApplicationData(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.SingleConstraint
  @param  Nmrc_SingleConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_SingleConstraint Nmrc_SingleConstraint_GetByKey(Nmrc_SingleConstraint self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_SingleConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getByKey' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiString Nmrc_SingleConstraint_GetClassName(Nmrc_SingleConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiSet Nmrc_SingleConstraint_GetConstraintGroups(Nmrc_SingleConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getConstraintGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiString Nmrc_SingleConstraint_GetDetails(Nmrc_SingleConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetError(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getError' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_GetFieldNames(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getFieldNames' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_SingleConstraint_GetInConstructor(Nmrc_SingleConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_SingleConstraint_GetIsDeleted(Nmrc_SingleConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetLowerLimit(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getLowerLimit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Meth_Method Nmrc_SingleConstraint_GetMethod(Nmrc_SingleConstraint self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiSet Nmrc_SingleConstraint_GetNmrConstraintValidations(Nmrc_SingleConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getNmrConstraintValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetOrigData(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getOrigData' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiString Nmrc_SingleConstraint_GetPackageName(Nmrc_SingleConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiString Nmrc_SingleConstraint_GetPackageShortName(Nmrc_SingleConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.parentList

parent link
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Nmrc_AbstractConstraintList Nmrc_SingleConstraint_GetParentList(Nmrc_SingleConstraint self)
{
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiSet Nmrc_SingleConstraint_GetPeakContribs(Nmrc_SingleConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiSet Nmrc_SingleConstraint_GetPeaks(Nmrc_SingleConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getPeaks' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiString Nmrc_SingleConstraint_GetQualifiedName(Nmrc_SingleConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_SingleConstraint_GetRoot(Nmrc_SingleConstraint self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiInteger Nmrc_SingleConstraint_GetSerial(Nmrc_SingleConstraint self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetTargetValue(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getTargetValue' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
Impl_TopObject Nmrc_SingleConstraint_GetTopObject(Nmrc_SingleConstraint self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetUpperLimit(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getUpperLimit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiSet Nmrc_SingleConstraint_GetViolations(Nmrc_SingleConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiFloat Nmrc_SingleConstraint_GetWeight(Nmrc_SingleConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_SingleConstraint_RemoveApplicationData(Nmrc_SingleConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_SingleConstraint_RemoveConstraintGroup(Nmrc_SingleConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'removeConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'removeConstraintGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_SingleConstraint_RemoveNmrConstraintValidation(Nmrc_SingleConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'removeNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'removeNmrConstraintValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_SingleConstraint_RemovePeak(Nmrc_SingleConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_SingleConstraint self
  @param  Acco_AccessObject value
**/
void *Nmrc_SingleConstraint_SetAccess(Nmrc_SingleConstraint self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setAccess' is not callable");
  
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
  @param  Nmrc_SingleConstraint self
  @param  ApiList values
**/
void *Nmrc_SingleConstraint_SetApplicationData(Nmrc_SingleConstraint self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
void *Nmrc_SingleConstraint_SetConstraintGroups(Nmrc_SingleConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setConstraintGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_SingleConstraint self
  @param  ApiString value
**/
void *Nmrc_SingleConstraint_SetDetails(Nmrc_SingleConstraint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetError(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetLowerLimit(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setLowerLimit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_SingleConstraint self
  @param  Meth_Method value
**/
void *Nmrc_SingleConstraint_SetMethod(Nmrc_SingleConstraint self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
void *Nmrc_SingleConstraint_SetNmrConstraintValidations(Nmrc_SingleConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setNmrConstraintValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetOrigData(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setOrigData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
void *Nmrc_SingleConstraint_SetPeaks(Nmrc_SingleConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_SingleConstraint self
  @param  ApiInteger value
**/
void *Nmrc_SingleConstraint_SetSerial(Nmrc_SingleConstraint self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetTargetValue(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setTargetValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetUpperLimit(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setUpperLimit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
void *Nmrc_SingleConstraint_SetViolations(Nmrc_SingleConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setViolations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
void *Nmrc_SingleConstraint_SetWeight(Nmrc_SingleConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_SortedConstraintGroups(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'sortedConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'sortedConstraintGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_SortedNmrConstraintValidations(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'sortedNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'sortedNmrConstraintValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_SortedPeakContribs(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'sortedPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_SortedPeaks(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
ApiList Nmrc_SingleConstraint_SortedViolations(Nmrc_SingleConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: cannot find method 'sortedViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.SingleConstraint: method 'sortedViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
