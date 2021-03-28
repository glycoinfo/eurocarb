
#include "ccp.h"

/*
  List of constraint violations, calculated over the structures linked to (if set). The violations may refer to constraints from different ConstraintLists.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ViolationList_AddApplicationData(Nmrc_ViolationList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  Coor_Model value
**/
void *Nmrc_ViolationList_AddMolStructure(Nmrc_ViolationList self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolStructure");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'addMolStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'addMolStructure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiBoolean complete
**/
void *Nmrc_ViolationList_CheckAllValid(Nmrc_ViolationList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiBoolean complete
**/
void *Nmrc_ViolationList_CheckValid(Nmrc_ViolationList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'checkValid' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ViolationList_FindAllApplicationData(Nmrc_ViolationList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ViolationList_FindAllApplicationData_keyval0(Nmrc_ViolationList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ViolationList_FindAllApplicationData_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ViolationList_FindAllApplicationData_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ViolationList_FindAllApplicationData_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
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
ApiList Nmrc_ViolationList_FindAllApplicationData_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllMolStructures(Nmrc_ViolationList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolStructures");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findAllMolStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findAllMolStructures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllMolStructures_keyval0(Nmrc_ViolationList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindAllMolStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllMolStructures_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindAllMolStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllMolStructures_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindAllMolStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllMolStructures_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindAllMolStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
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
ApiSet Nmrc_ViolationList_FindAllMolStructures_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindAllMolStructures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllViolations(Nmrc_ViolationList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findAllViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findAllViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllViolations_keyval0(Nmrc_ViolationList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllViolations_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllViolations_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_ViolationList_FindAllViolations_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
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
ApiSet Nmrc_ViolationList_FindAllViolations_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindAllViolations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData(Nmrc_ViolationList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData_keyval0(Nmrc_ViolationList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
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
Impl_ApplicationData Nmrc_ViolationList_FindFirstApplicationData_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nmrc_ViolationList_FindFirstMolStructure(Nmrc_ViolationList self, ApiMap conditions)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolStructure");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findFirstMolStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findFirstMolStructure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nmrc_ViolationList_FindFirstMolStructure_keyval0(Nmrc_ViolationList self)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindFirstMolStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nmrc_ViolationList_FindFirstMolStructure_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindFirstMolStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nmrc_ViolationList_FindFirstMolStructure_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindFirstMolStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Nmrc_ViolationList_FindFirstMolStructure_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindFirstMolStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
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
Coor_Model Nmrc_ViolationList_FindFirstMolStructure_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindFirstMolStructure(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation(Nmrc_ViolationList self, ApiMap conditions)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'findFirstViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'findFirstViolation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation_keyval0(Nmrc_ViolationList self)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ViolationList_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation_keyval1(Nmrc_ViolationList self, char * key, ApiObject value)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ViolationList_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation_keyval2(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ViolationList_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation_keyval3(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ViolationList_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.ViolationList.violations

child link 
to class Violation
  @param  Nmrc_ViolationList self
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
Nmrc_Violation Nmrc_ViolationList_FindFirstViolation_keyval4(Nmrc_ViolationList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_Violation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ViolationList_FindFirstViolation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_ViolationList_Get(Nmrc_ViolationList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Acco_AccessObject Nmrc_ViolationList_GetAccess(Nmrc_ViolationList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getAccess' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Acco_AccessObject Nmrc_ViolationList_GetActiveAccess(Nmrc_ViolationList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiList Nmrc_ViolationList_GetApplicationData(Nmrc_ViolationList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_ViolationList Nmrc_ViolationList_GetByKey(Nmrc_ViolationList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_ViolationList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getByKey' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiString Nmrc_ViolationList_GetClassName(Nmrc_ViolationList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ViolationList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiString Nmrc_ViolationList_GetDetails(Nmrc_ViolationList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getDetails' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiList Nmrc_ViolationList_GetFieldNames(Nmrc_ViolationList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_ViolationList_GetFullKey(Nmrc_ViolationList self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiBoolean Nmrc_ViolationList_GetInConstructor(Nmrc_ViolationList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiBoolean Nmrc_ViolationList_GetIsDeleted(Nmrc_ViolationList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @returns  Local object key
**/
ApiObject Nmrc_ViolationList_GetLocalKey(Nmrc_ViolationList self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiSet Nmrc_ViolationList_GetMolStructures(Nmrc_ViolationList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolStructures");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getMolStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getMolStructures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ViolationList.nmrConstraintStore

parent 
link
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_ViolationList_GetNmrConstraintStore(Nmrc_ViolationList self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiString Nmrc_ViolationList_GetPackageName(Nmrc_ViolationList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiString Nmrc_ViolationList_GetPackageShortName(Nmrc_ViolationList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ViolationList.parent

link to parent 
object - synonym for nmrConstraintStore
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_ViolationList_GetParent(Nmrc_ViolationList self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getParent' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiString Nmrc_ViolationList_GetQualifiedName(Nmrc_ViolationList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_ViolationList_GetRoot(Nmrc_ViolationList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ViolationList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiInteger Nmrc_ViolationList_GetSerial(Nmrc_ViolationList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getSerial' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @returns   the result
**/
Impl_TopObject Nmrc_ViolationList_GetTopObject(Nmrc_ViolationList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ViolationList.violations

child link to 
class Violation
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiSet Nmrc_ViolationList_GetViolations(Nmrc_ViolationList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'getViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'getViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_ViolationList Nmrc_ViolationList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewViolationList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
Nmrc_ViolationList Nmrc_ViolationList_Init_reqd(Nmrc_NmrConstraintStore parent)
{
  
  Nmrc_ViolationList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrc_ViolationList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_ViolationList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_Violation Nmrc_ViolationList_NewViolation(Nmrc_ViolationList self, ApiMap attrlinks)
{
  
  Nmrc_Violation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newViolation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'newViolation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'newViolation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_ViolationList self
  @param  float calcValue
  @param  Nmrc_AbstractConstraint constraint
  @param  float fractionViolated
  @param  float violation
  @returns  the new object
**/
Nmrc_Violation Nmrc_ViolationList_NewViolation_reqd(Nmrc_ViolationList self, float calcValue, Nmrc_AbstractConstraint constraint, float fractionViolated, float violation)
{
  
  Nmrc_Violation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__calcValue = ApiFloat_New(calcValue);
  ApiFloat api__fractionViolated = ApiFloat_New(fractionViolated);
  ApiFloat api__violation = ApiFloat_New(violation);

  PyDict_SetItemString(attrlinks, "calcValue", api__calcValue);
  PyDict_SetItemString(attrlinks, "constraint", constraint);
  PyDict_SetItemString(attrlinks, "fractionViolated", api__fractionViolated);
  PyDict_SetItemString(attrlinks, "violation", api__violation);
  
  obj = Nmrc_ViolationList_NewViolation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__calcValue);
  Py_DECREF(api__fractionViolated);
  Py_DECREF(api__violation);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ViolationList self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ViolationList_RemoveApplicationData(Nmrc_ViolationList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  Coor_Model value
**/
void *Nmrc_ViolationList_RemoveMolStructure(Nmrc_ViolationList self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolStructure");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'removeMolStructure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'removeMolStructure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_ViolationList_Set(Nmrc_ViolationList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ViolationList self
  @param  Acco_AccessObject value
**/
void *Nmrc_ViolationList_SetAccess(Nmrc_ViolationList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'setAccess' is not callable");
  
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
  @param  Nmrc_ViolationList self
  @param  ApiList values
**/
void *Nmrc_ViolationList_SetApplicationData(Nmrc_ViolationList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ViolationList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ViolationList self
  @param  ApiString value
**/
void *Nmrc_ViolationList_SetDetails(Nmrc_ViolationList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @param  ApiSet values
**/
void *Nmrc_ViolationList_SetMolStructures(Nmrc_ViolationList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolStructures");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'setMolStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'setMolStructures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ViolationList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ViolationList self
  @param  ApiInteger value
**/
void *Nmrc_ViolationList_SetSerial(Nmrc_ViolationList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.ViolationList.molStructures

MolStructure.Models 
used for calculating ViolationList
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiList Nmrc_ViolationList_SortedMolStructures(Nmrc_ViolationList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolStructures");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'sortedMolStructures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'sortedMolStructures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.ViolationList.violations

child link to 
class Violation
  @param  Nmrc_ViolationList self
  @returns   the result
**/
ApiList Nmrc_ViolationList_SortedViolations(Nmrc_ViolationList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: cannot find method 'sortedViolations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ViolationList: method 'sortedViolations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
