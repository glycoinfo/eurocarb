
#include "ccp.h"

/*
  Dihedral angle constraint. Not ambiguous, must be assigned to a specific quartet of Resonances. The different Dihedral Constraint Items represent alternative possibilities for dihedral angle values, rather than alternative assignemnts.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DihedralConstraint_AddApplicationData(Nmrc_DihedralConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'addApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_DihedralConstraint_AddConstraintGroup(Nmrc_DihedralConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'addConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'addConstraintGroup' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_DihedralConstraint_AddNmrConstraintValidation(Nmrc_DihedralConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'addNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'addNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_DihedralConstraint_AddPeak(Nmrc_DihedralConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean complete
**/
void *Nmrc_DihedralConstraint_CheckAllValid(Nmrc_DihedralConstraint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean complete
**/
void *Nmrc_DihedralConstraint_CheckValid(Nmrc_DihedralConstraint self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'checkValid' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllApplicationData(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
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
ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllConstraintGroups' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllConstraintGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllItems(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllPeakContribs' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeaks(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllPeaks' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllResonances(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
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
ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllViolations(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findAllViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findAllViolations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval0(Nmrc_DihedralConstraint self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
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
ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval0(Nmrc_DihedralConstraint self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
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
Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstConstraintGroup' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
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
Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstConstraintGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmrc_DihedralConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstItem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstItem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstItem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
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
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Vald_NmrConstraintValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_DihedralConstraint self)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
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
Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstPeak' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmrc_ConstraintPeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstPeakContrib' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
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
Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
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
Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
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
Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation(Nmrc_DihedralConstraint self, ApiMap conditions)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'findFirstViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'findFirstViolation' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval0(Nmrc_DihedralConstraint self)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
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
Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraint_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_DihedralConstraint_Get(Nmrc_DihedralConstraint self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Acco_AccessObject Nmrc_DihedralConstraint_GetAccess(Nmrc_DihedralConstraint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Acco_AccessObject Nmrc_DihedralConstraint_GetActiveAccess(Nmrc_DihedralConstraint self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_GetApplicationData(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_DihedralConstraint Nmrc_DihedralConstraint_GetByKey(Nmrc_DihedralConstraint self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_DihedralConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getByKey' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraint_GetClassName(Nmrc_DihedralConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getClassName' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetConstraintGroups(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getConstraintGroups' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraint_GetDetails(Nmrc_DihedralConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getDetails' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_GetFieldNames(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_DihedralConstraint_GetFullKey(Nmrc_DihedralConstraint self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_DihedralConstraint_GetInConstructor(Nmrc_DihedralConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiBoolean Nmrc_DihedralConstraint_GetIsDeleted(Nmrc_DihedralConstraint self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link to 
class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetItems(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @returns  Local object key
**/
ApiObject Nmrc_DihedralConstraint_GetLocalKey(Nmrc_DihedralConstraint self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getLocalKey' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Meth_Method Nmrc_DihedralConstraint_GetMethod(Nmrc_DihedralConstraint self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getMethod' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetNmrConstraintValidations(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraint_GetOrigData(Nmrc_DihedralConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getOrigData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraint_GetPackageName(Nmrc_DihedralConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraint_GetPackageShortName(Nmrc_DihedralConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.parent

link to parent 
object - synonym for parentList
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Nmrc_DihedralConstraintList Nmrc_DihedralConstraint_GetParent(Nmrc_DihedralConstraint self)
{
  
  Nmrc_DihedralConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.parentList

parent link
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Nmrc_DihedralConstraintList Nmrc_DihedralConstraint_GetParentList(Nmrc_DihedralConstraint self)
{
  
  Nmrc_DihedralConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParentList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getParentList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getParentList' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetPeakContribs(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getPeakContribs' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetPeaks(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getPeaks' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraint_GetQualifiedName(Nmrc_DihedralConstraint self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances 
(in order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_GetResonances(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getResonances' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_DihedralConstraint_GetRoot(Nmrc_DihedralConstraint self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getRoot' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiInteger Nmrc_DihedralConstraint_GetSerial(Nmrc_DihedralConstraint self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getSerial' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
Impl_TopObject Nmrc_DihedralConstraint_GetTopObject(Nmrc_DihedralConstraint self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getTopObject' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiSet Nmrc_DihedralConstraint_GetViolations(Nmrc_DihedralConstraint self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getViolations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraint_GetWeight(Nmrc_DihedralConstraint self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_DihedralConstraint Nmrc_DihedralConstraint_Init(Nmrc_DihedralConstraintList parent, ApiMap attrlinks)
{
  
  return Nmrc_DihedralConstraintList_NewDihedralConstraint(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList parent
  @param  ApiList resonances
  @returns  the new object
**/
Nmrc_DihedralConstraint Nmrc_DihedralConstraint_Init_reqd(Nmrc_DihedralConstraintList parent, ApiList resonances)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmrc_DihedralConstraint_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_NewDihedralConstraintItem(Nmrc_DihedralConstraint self, ApiMap attrlinks)
{
  
  Nmrc_DihedralConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDihedralConstraintItem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'newDihedralConstraintItem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'newDihedralConstraintItem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  float lowerLimit
  @param  float upperLimit
  @returns  the new object
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_NewDihedralConstraintItem_reqd(Nmrc_DihedralConstraint self, float lowerLimit, float upperLimit)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__lowerLimit = ApiFloat_New(lowerLimit);
  ApiFloat api__upperLimit = ApiFloat_New(upperLimit);

  PyDict_SetItemString(attrlinks, "lowerLimit", api__lowerLimit);
  PyDict_SetItemString(attrlinks, "upperLimit", api__upperLimit);
  
  obj = Nmrc_DihedralConstraint_NewDihedralConstraintItem(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__lowerLimit);
  Py_DECREF(api__upperLimit);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DihedralConstraint_RemoveApplicationData(Nmrc_DihedralConstraint self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'removeApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Nmrc_ConstraintGroup value
**/
void *Nmrc_DihedralConstraint_RemoveConstraintGroup(Nmrc_DihedralConstraint self, Nmrc_ConstraintGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'removeConstraintGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'removeConstraintGroup' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Vald_NmrConstraintValidation value
**/
void *Nmrc_DihedralConstraint_RemoveNmrConstraintValidation(Nmrc_DihedralConstraint self, Vald_NmrConstraintValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'removeNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'removeNmrConstraintValidation' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Nmr_Peak value
**/
void *Nmrc_DihedralConstraint_RemovePeak(Nmrc_DihedralConstraint self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_DihedralConstraint_Set(Nmrc_DihedralConstraint self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraint self
  @param  Acco_AccessObject value
**/
void *Nmrc_DihedralConstraint_SetAccess(Nmrc_DihedralConstraint self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiList values
**/
void *Nmrc_DihedralConstraint_SetApplicationData(Nmrc_DihedralConstraint self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
void *Nmrc_DihedralConstraint_SetConstraintGroups(Nmrc_DihedralConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setConstraintGroups' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiString value
**/
void *Nmrc_DihedralConstraint_SetDetails(Nmrc_DihedralConstraint self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setDetails' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  Meth_Method value
**/
void *Nmrc_DihedralConstraint_SetMethod(Nmrc_DihedralConstraint self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setMethod' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
void *Nmrc_DihedralConstraint_SetNmrConstraintValidations(Nmrc_DihedralConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraint_SetOrigData(Nmrc_DihedralConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrigData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setOrigData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setOrigData' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
void *Nmrc_DihedralConstraint_SetPeaks(Nmrc_DihedralConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances 
(in order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiList values
**/
void *Nmrc_DihedralConstraint_SetResonances(Nmrc_DihedralConstraint self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setResonances' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiInteger value
**/
void *Nmrc_DihedralConstraint_SetSerial(Nmrc_DihedralConstraint self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setSerial' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
void *Nmrc_DihedralConstraint_SetViolations(Nmrc_DihedralConstraint self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setViolations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraint_SetWeight(Nmrc_DihedralConstraint self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'setWeight' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedConstraintGroups(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraintGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedConstraintGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedConstraintGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link to 
class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedItems(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedItems' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedNmrConstraintValidations(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedNmrConstraintValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedNmrConstraintValidations' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedPeakContribs(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedPeakContribs' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedPeaks(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedPeaks' is not callable");
  
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
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraint_SortedViolations(Nmrc_DihedralConstraint self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: cannot find method 'sortedViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraint: method 'sortedViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
