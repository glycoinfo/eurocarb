
#include "ccp.h"

/*
  Validation result for one or more NmrConstraint.AbstractConstraints
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_NmrConstraintValidation_AddApplicationData(Vald_NmrConstraintValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  Nmrc_AbstractConstraint value
**/
void *Vald_NmrConstraintValidation_AddNmrConstraint(Vald_NmrConstraintValidation self, Nmrc_AbstractConstraint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraint");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'addNmrConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'addNmrConstraint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for 
ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean complete
**/
void *Vald_NmrConstraintValidation_CheckAllValid(Vald_NmrConstraintValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean complete
**/
void *Vald_NmrConstraintValidation_CheckValid(Vald_NmrConstraintValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'checkValid' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_NmrConstraintValidation_FindAllApplicationData(Vald_NmrConstraintValidation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval0(Vald_NmrConstraintValidation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_NmrConstraintValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_NmrConstraintValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_NmrConstraintValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_NmrConstraintValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
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
ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_NmrConstraintValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints(Vald_NmrConstraintValidation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraints");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'findAllNmrConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'findAllNmrConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval0(Vald_NmrConstraintValidation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_NmrConstraintValidation_FindAllNmrConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_NmrConstraintValidation_FindAllNmrConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_NmrConstraintValidation_FindAllNmrConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_NmrConstraintValidation_FindAllNmrConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
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
ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_NmrConstraintValidation_FindAllNmrConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData(Vald_NmrConstraintValidation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval0(Vald_NmrConstraintValidation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_NmrConstraintValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_NmrConstraintValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_NmrConstraintValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_NmrConstraintValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
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
Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_NmrConstraintValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint(Vald_NmrConstraintValidation self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraint");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'findFirstNmrConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'findFirstNmrConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval0(Vald_NmrConstraintValidation self)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_NmrConstraintValidation_FindFirstNmrConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_NmrConstraintValidation_FindFirstNmrConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_NmrConstraintValidation_FindFirstNmrConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_NmrConstraintValidation_FindFirstNmrConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
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
Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_NmrConstraintValidation_FindFirstNmrConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_NmrConstraintValidation_Get(Vald_NmrConstraintValidation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Acco_AccessObject Vald_NmrConstraintValidation_GetAccess(Vald_NmrConstraintValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getAccess' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiList Vald_NmrConstraintValidation_GetApplicationData(Vald_NmrConstraintValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiBoolean Vald_NmrConstraintValidation_GetBooleanValue(Vald_NmrConstraintValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_NmrConstraintValidation Vald_NmrConstraintValidation_GetByKey(Vald_NmrConstraintValidation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Vald_NmrConstraintValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getByKey' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetClassName(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetContext(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getContext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetDetails(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getDetails' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiList Vald_NmrConstraintValidation_GetFieldNames(Vald_NmrConstraintValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiFloat Vald_NmrConstraintValidation_GetFigOfMerit(Vald_NmrConstraintValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiFloat Vald_NmrConstraintValidation_GetFloatValue(Vald_NmrConstraintValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getFloatValue' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiBoolean Vald_NmrConstraintValidation_GetInConstructor(Vald_NmrConstraintValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiInteger Vald_NmrConstraintValidation_GetIntValue(Vald_NmrConstraintValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getIntValue' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiBoolean Vald_NmrConstraintValidation_GetIsDeleted(Vald_NmrConstraintValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetKeyword(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Kwdf_KeywordDefinition Vald_NmrConstraintValidation_GetKeywordDefinition(Vald_NmrConstraintValidation self)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getKeywordDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiSet Vald_NmrConstraintValidation_GetNmrConstraints(Vald_NmrConstraintValidation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraints");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getNmrConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getNmrConstraints' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetPackageName(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getPackageName' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetPackageShortName(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_NmrConstraintValidation_GetParent(Vald_NmrConstraintValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getParent' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetQualifiedName(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Impl_MemopsRoot Vald_NmrConstraintValidation_GetRoot(Vald_NmrConstraintValidation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiInteger Vald_NmrConstraintValidation_GetSerial(Vald_NmrConstraintValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_NmrConstraintValidation_GetValidationStore(Vald_NmrConstraintValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiString Vald_NmrConstraintValidation_GetTextValue(Vald_NmrConstraintValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getTextValue' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
Impl_TopObject Vald_NmrConstraintValidation_GetTopObject(Vald_NmrConstraintValidation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_NmrConstraintValidation Vald_NmrConstraintValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks)
{
  
  return Vald_ValidationStore_NewNmrConstraintValidation(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_NmrConstraintValidation Vald_NmrConstraintValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_NmrConstraintValidation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_NmrConstraintValidation_RemoveApplicationData(Vald_NmrConstraintValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  Nmrc_AbstractConstraint value
**/
void *Vald_NmrConstraintValidation_RemoveNmrConstraint(Vald_NmrConstraintValidation self, Nmrc_AbstractConstraint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraint");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'removeNmrConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'removeNmrConstraint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_NmrConstraintValidation_Set(Vald_NmrConstraintValidation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_NmrConstraintValidation self
  @param  Acco_AccessObject value
**/
void *Vald_NmrConstraintValidation_SetAccess(Vald_NmrConstraintValidation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setAccess' is not callable");
  
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
  @param  Vald_NmrConstraintValidation self
  @param  ApiList values
**/
void *Vald_NmrConstraintValidation_SetApplicationData(Vald_NmrConstraintValidation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean value
**/
void *Vald_NmrConstraintValidation_SetBooleanValue(Vald_NmrConstraintValidation self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
void *Vald_NmrConstraintValidation_SetContext(Vald_NmrConstraintValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
void *Vald_NmrConstraintValidation_SetDetails(Vald_NmrConstraintValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_NmrConstraintValidation self
  @param  ApiFloat value
**/
void *Vald_NmrConstraintValidation_SetFigOfMerit(Vald_NmrConstraintValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiFloat value
**/
void *Vald_NmrConstraintValidation_SetFloatValue(Vald_NmrConstraintValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiInteger value
**/
void *Vald_NmrConstraintValidation_SetIntValue(Vald_NmrConstraintValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
void *Vald_NmrConstraintValidation_SetKeyword(Vald_NmrConstraintValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiSet values
**/
void *Vald_NmrConstraintValidation_SetNmrConstraints(Vald_NmrConstraintValidation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraints");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setNmrConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setNmrConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_NmrConstraintValidation self
  @param  ApiInteger value
**/
void *Vald_NmrConstraintValidation_SetSerial(Vald_NmrConstraintValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
void *Vald_NmrConstraintValidation_SetTextValue(Vald_NmrConstraintValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.StructureValidation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
ApiList Vald_NmrConstraintValidation_SortedNmrConstraints(Vald_NmrConstraintValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraints");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: cannot find method 'sortedNmrConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.NmrConstraintValidation: method 'sortedNmrConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
