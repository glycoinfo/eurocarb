
#include "ccp.h"

/*
  J coupling constraint. Ambiguous, may contain several JCouplingConstraintItems, each with a different assignment, describing alternative assignment possibilities.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_JCouplingConstraint_AddApplicationData(Nmrc_JCouplingConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'addApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_JCouplingConstraint_AddConstraintGroup(Nmrc_JCouplingConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'addConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'addConstraintGroup' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_JCouplingConstraint_AddNmrConstraintValidation(Nmrc_JCouplingConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'addNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'addNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_JCouplingConstraint_AddPeak(Nmrc_JCouplingConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiBoolean complete
**/
void *Nmrc_JCouplingConstraint_CheckAllValid(Nmrc_JCouplingConstraint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiBoolean complete
**/
void *Nmrc_JCouplingConstraint_CheckValid(Nmrc_JCouplingConstraint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'checkValid' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
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
ApiList Nmrc_JCouplingConstraint_FindAllApplicationData_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllConstraintGroups' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllConstraintGroups_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllItems(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllItems_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllItems_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllItems_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllItems_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllItems_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllPeakContribs' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllPeakContribs_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllPeaks' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllPeaks_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllViolations(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findAllViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findAllViolations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllViolations_keyval0(Nmrc_JCouplingConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllViolations_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllViolations_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraint_FindAllViolations_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
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
ApiSet Nmrc_JCouplingConstraint_FindAllViolations_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
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
Impl_ApplicationData Nmrc_JCouplingConstraint_FindFirstApplicationData_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstConstraintGroup' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_JCouplingConstraint self
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
Nmrc_ConstraintGroup Nmrc_JCouplingConstraint_FindFirstConstraintGroup_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Nmrc_JCouplingConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstItem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstItem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstItem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child 
link to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
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
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_FindFirstItem_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Vald_NmrConstraintValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_JCouplingConstraint self
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
Vald_NmrConstraintValidation Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstPeak' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintPeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstPeakContrib' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
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
Nmrc_ConstraintPeakContrib Nmrc_JCouplingConstraint_FindFirstPeakContrib_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_JCouplingConstraint self
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
Nmr_Peak Nmrc_JCouplingConstraint_FindFirstPeak_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation(Nmrc_JCouplingConstraint self, ApiMap conditions)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'findFirstViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'findFirstViolation' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation_keyval0(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation_keyval1(Nmrc_JCouplingConstraint self, char * key, ApiObject value)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation_keyval2(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation_keyval3(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_JCouplingConstraint self
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
Nmrc_Violation Nmrc_JCouplingConstraint_FindFirstViolation_keyval4(Nmrc_JCouplingConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_JCouplingConstraint_Get(Nmrc_JCouplingConstraint self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Acco_AccessObject Nmrc_JCouplingConstraint_GetAccess(Nmrc_JCouplingConstraint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getAccess' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_GetApplicationData(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_JCouplingConstraint Nmrc_JCouplingConstraint_GetByKey(Nmrc_JCouplingConstraint self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_JCouplingConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getByKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraint_GetClassName(Nmrc_JCouplingConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getClassName' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetConstraintGroups(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getConstraintGroups' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraint_GetDetails(Nmrc_JCouplingConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getDetails' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetError(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getError' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_GetFieldNames(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_JCouplingConstraint_GetFullKey(Nmrc_JCouplingConstraint self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_JCouplingConstraint_GetInConstructor(Nmrc_JCouplingConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_JCouplingConstraint_GetIsDeleted(Nmrc_JCouplingConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link to 
class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetItems(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @returns  Local object key
**/
ApiObject Nmrc_JCouplingConstraint_GetLocalKey(Nmrc_JCouplingConstraint self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getLocalKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetLowerLimit(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getLowerLimit' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Meth_Method Nmrc_JCouplingConstraint_GetMethod(Nmrc_JCouplingConstraint self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getMethod' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetNmrConstraintValidations(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetOrigData(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getOrigData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraint_GetPackageName(Nmrc_JCouplingConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraint_GetPackageShortName(Nmrc_JCouplingConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraint.parent

link to parent 
object - synonym for parentList
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Nmrc_JCouplingConstraintList Nmrc_JCouplingConstraint_GetParent(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_JCouplingConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraint.parentList

parent 
link
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Nmrc_JCouplingConstraintList Nmrc_JCouplingConstraint_GetParentList(Nmrc_JCouplingConstraint self)
{
  
  Nmrc_JCouplingConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParentList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getParentList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getParentList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetPeakContribs(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getPeakContribs' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetPeaks(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getPeaks' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraint_GetQualifiedName(Nmrc_JCouplingConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_JCouplingConstraint_GetRoot(Nmrc_JCouplingConstraint self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getRoot' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiInteger Nmrc_JCouplingConstraint_GetSerial(Nmrc_JCouplingConstraint self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getSerial' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetTargetValue(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getTargetValue' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
Impl_TopObject Nmrc_JCouplingConstraint_GetTopObject(Nmrc_JCouplingConstraint self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getTopObject' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetUpperLimit(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getUpperLimit' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraint_GetViolations(Nmrc_JCouplingConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getViolations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiFloat Nmrc_JCouplingConstraint_GetWeight(Nmrc_JCouplingConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_JCouplingConstraint Nmrc_JCouplingConstraint_Init(Nmrc_JCouplingConstraintList parent, ApiMap attrlinks)
{
  
  return Nmrc_JCouplingConstraintList_NewJCouplingConstraint(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList parent
  @returns  the new object
**/
Nmrc_JCouplingConstraint Nmrc_JCouplingConstraint_Init_reqd(Nmrc_JCouplingConstraintList parent)
{
  
  Nmrc_JCouplingConstraint  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrc_JCouplingConstraint_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_NewJCouplingConstraintItem(Nmrc_JCouplingConstraint self, ApiMap attrlinks)
{
  
  Nmrc_JCouplingConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newJCouplingConstraintItem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'newJCouplingConstraintItem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'newJCouplingConstraintItem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @param  ApiSet resonances
  @returns  the new object
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraint_NewJCouplingConstraintItem_reqd(Nmrc_JCouplingConstraint self, ApiSet resonances)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmrc_JCouplingConstraint_NewJCouplingConstraintItem(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_JCouplingConstraint_RemoveApplicationData(Nmrc_JCouplingConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'removeApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_JCouplingConstraint_RemoveConstraintGroup(Nmrc_JCouplingConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'removeConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'removeConstraintGroup' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_JCouplingConstraint_RemoveNmrConstraintValidation(Nmrc_JCouplingConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'removeNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'removeNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_JCouplingConstraint_RemovePeak(Nmrc_JCouplingConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraint self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_JCouplingConstraint_Set(Nmrc_JCouplingConstraint self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraint self
  @param  Acco_AccessObject value
**/
void *Nmrc_JCouplingConstraint_SetAccess(Nmrc_JCouplingConstraint self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setAccess' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiList values
**/
void *Nmrc_JCouplingConstraint_SetApplicationData(Nmrc_JCouplingConstraint self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiSet values
**/
void *Nmrc_JCouplingConstraint_SetConstraintGroups(Nmrc_JCouplingConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setConstraintGroups' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiString value
**/
void *Nmrc_JCouplingConstraint_SetDetails(Nmrc_JCouplingConstraint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setDetails' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetError(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setError' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetLowerLimit(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setLowerLimit' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  Meth_Method value
**/
void *Nmrc_JCouplingConstraint_SetMethod(Nmrc_JCouplingConstraint self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setMethod' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiSet values
**/
void *Nmrc_JCouplingConstraint_SetNmrConstraintValidations(Nmrc_JCouplingConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetOrigData(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setOrigData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiSet values
**/
void *Nmrc_JCouplingConstraint_SetPeaks(Nmrc_JCouplingConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setPeaks' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiInteger value
**/
void *Nmrc_JCouplingConstraint_SetSerial(Nmrc_JCouplingConstraint self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setSerial' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetTargetValue(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setTargetValue' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetUpperLimit(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setUpperLimit' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiSet values
**/
void *Nmrc_JCouplingConstraint_SetViolations(Nmrc_JCouplingConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setViolations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @param  ApiFloat value
**/
void *Nmrc_JCouplingConstraint_SetWeight(Nmrc_JCouplingConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'setWeight' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedConstraintGroups(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedConstraintGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.JCouplingConstraint.items

child link 
to class JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedItems(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedItems' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedNmrConstraintValidations(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedPeakContribs(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedPeakContribs' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedPeaks(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedPeaks' is not callable");
  
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
  @param  Nmrc_JCouplingConstraint self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraint_SortedViolations(Nmrc_JCouplingConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: cannot find method 'sortedViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraint: method 'sortedViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
