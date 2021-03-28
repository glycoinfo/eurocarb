
#include "ccp.h"

/*
  Group of constraints, for organisation, annotation, etc. purposes.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ConstraintGroup_AddApplicationData(Nmrc_ConstraintGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints 
included in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  Nmrc_AbstractConstraint value
**/
void *Nmrc_ConstraintGroup_AddConstraint(Nmrc_ConstraintGroup self, Nmrc_AbstractConstraint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'addConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'addConstraint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiBoolean complete
**/
void *Nmrc_ConstraintGroup_CheckAllValid(Nmrc_ConstraintGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiBoolean complete
**/
void *Nmrc_ConstraintGroup_CheckValid(Nmrc_ConstraintGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'checkValid' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintGroup_FindAllApplicationData(Nmrc_ConstraintGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintGroup_FindAllApplicationData_keyval0(Nmrc_ConstraintGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintGroup_FindAllApplicationData_keyval1(Nmrc_ConstraintGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintGroup_FindAllApplicationData_keyval2(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintGroup_FindAllApplicationData_keyval3(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
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
ApiList Nmrc_ConstraintGroup_FindAllApplicationData_keyval4(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ConstraintGroup_FindAllConstraints(Nmrc_ConstraintGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'findAllConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'findAllConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ConstraintGroup_FindAllConstraints_keyval0(Nmrc_ConstraintGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintGroup_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ConstraintGroup_FindAllConstraints_keyval1(Nmrc_ConstraintGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintGroup_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ConstraintGroup_FindAllConstraints_keyval2(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintGroup_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ConstraintGroup_FindAllConstraints_keyval3(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintGroup_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
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
ApiSet Nmrc_ConstraintGroup_FindAllConstraints_keyval4(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintGroup_FindAllConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData(Nmrc_ConstraintGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData_keyval0(Nmrc_ConstraintGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData_keyval1(Nmrc_ConstraintGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData_keyval2(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData_keyval3(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
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
Impl_ApplicationData Nmrc_ConstraintGroup_FindFirstApplicationData_keyval4(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint(Nmrc_ConstraintGroup self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'findFirstConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'findFirstConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint_keyval0(Nmrc_ConstraintGroup self)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintGroup_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint_keyval1(Nmrc_ConstraintGroup self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintGroup_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint_keyval2(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintGroup_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint_keyval3(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintGroup_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
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
Nmrc_AbstractConstraint Nmrc_ConstraintGroup_FindFirstConstraint_keyval4(Nmrc_ConstraintGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintGroup_FindFirstConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_ConstraintGroup_Get(Nmrc_ConstraintGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
Acco_AccessObject Nmrc_ConstraintGroup_GetAccess(Nmrc_ConstraintGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getAccess' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiList Nmrc_ConstraintGroup_GetApplicationData(Nmrc_ConstraintGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_ConstraintGroup Nmrc_ConstraintGroup_GetByKey(Nmrc_ConstraintGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_ConstraintGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getByKey' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiString Nmrc_ConstraintGroup_GetClassName(Nmrc_ConstraintGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints 
included in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiSet Nmrc_ConstraintGroup_GetConstraints(Nmrc_ConstraintGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintGroup.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiString Nmrc_ConstraintGroup_GetDetails(Nmrc_ConstraintGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getDetails' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiList Nmrc_ConstraintGroup_GetFieldNames(Nmrc_ConstraintGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_ConstraintGroup_GetFullKey(Nmrc_ConstraintGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiBoolean Nmrc_ConstraintGroup_GetInConstructor(Nmrc_ConstraintGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiBoolean Nmrc_ConstraintGroup_GetIsDeleted(Nmrc_ConstraintGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @returns  Local object key
**/
ApiObject Nmrc_ConstraintGroup_GetLocalKey(Nmrc_ConstraintGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintGroup.nmrConstraintStore

parent 
link
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_ConstraintGroup_GetNmrConstraintStore(Nmrc_ConstraintGroup self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiString Nmrc_ConstraintGroup_GetPackageName(Nmrc_ConstraintGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiString Nmrc_ConstraintGroup_GetPackageShortName(Nmrc_ConstraintGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintGroup.parent

link to parent 
object - synonym for nmrConstraintStore
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_ConstraintGroup_GetParent(Nmrc_ConstraintGroup self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getParent' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiString Nmrc_ConstraintGroup_GetQualifiedName(Nmrc_ConstraintGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_ConstraintGroup_GetRoot(Nmrc_ConstraintGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiInteger Nmrc_ConstraintGroup_GetSerial(Nmrc_ConstraintGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getSerial' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
Impl_TopObject Nmrc_ConstraintGroup_GetTopObject(Nmrc_ConstraintGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_ConstraintGroup Nmrc_ConstraintGroup_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewConstraintGroup(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
Nmrc_ConstraintGroup Nmrc_ConstraintGroup_Init_reqd(Nmrc_NmrConstraintStore parent)
{
  
  Nmrc_ConstraintGroup  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrc_ConstraintGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintGroup self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ConstraintGroup_RemoveApplicationData(Nmrc_ConstraintGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  Nmrc_AbstractConstraint value
**/
void *Nmrc_ConstraintGroup_RemoveConstraint(Nmrc_ConstraintGroup self, Nmrc_AbstractConstraint value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'removeConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'removeConstraint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.ConstraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_ConstraintGroup_Set(Nmrc_ConstraintGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ConstraintGroup self
  @param  Acco_AccessObject value
**/
void *Nmrc_ConstraintGroup_SetAccess(Nmrc_ConstraintGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'setAccess' is not callable");
  
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
  @param  Nmrc_ConstraintGroup self
  @param  ApiList values
**/
void *Nmrc_ConstraintGroup_SetApplicationData(Nmrc_ConstraintGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints 
included in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @param  ApiSet values
**/
void *Nmrc_ConstraintGroup_SetConstraints(Nmrc_ConstraintGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'setConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'setConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ConstraintGroup.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ConstraintGroup self
  @param  ApiString value
**/
void *Nmrc_ConstraintGroup_SetDetails(Nmrc_ConstraintGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ConstraintGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ConstraintGroup self
  @param  ApiInteger value
**/
void *Nmrc_ConstraintGroup_SetSerial(Nmrc_ConstraintGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.ConstraintGroup.constraints

Constraints included 
in constraintGroup
  @param  Nmrc_ConstraintGroup self
  @returns   the result
**/
ApiList Nmrc_ConstraintGroup_SortedConstraints(Nmrc_ConstraintGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: cannot find method 'sortedConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintGroup: method 'sortedConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
