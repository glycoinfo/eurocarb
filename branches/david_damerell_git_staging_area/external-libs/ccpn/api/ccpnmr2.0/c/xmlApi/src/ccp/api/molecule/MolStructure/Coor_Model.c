
#include "ccp.h"

/*
  A single structure instance that is part of the structure ensemble. Corresponds to a PDB MODEL.
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  Impl_ApplicationData value
**/
void *Coor_Model_AddApplicationData(Coor_Model self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  Nsim_Run value
**/
void *Coor_Model_AddInputToNmrRun(Coor_Model self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'addInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Model.structureGroups

StructureGroups 
that Model belongs to.
  @param  Coor_Model self
  @param  Mols_StructureGroup value
**/
void *Coor_Model_AddStructureGroup(Coor_Model self, Mols_StructureGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'addStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'addStructureGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Model.structureValidations

Validation 
results for Model
  @param  Coor_Model self
  @param  Vald_StructureValidation value
**/
void *Coor_Model_AddStructureValidation(Coor_Model self, Vald_StructureValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'addStructureValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'addStructureValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  Nmrc_ViolationList value
**/
void *Coor_Model_AddViolationList(Coor_Model self, Nmrc_ViolationList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addViolationList");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'addViolationList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'addViolationList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  ApiBoolean complete
**/
void *Coor_Model_CheckAllValid(Coor_Model self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  ApiBoolean complete
**/
void *Coor_Model_CheckValid(Coor_Model self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'checkValid' is not callable");
  
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
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Model_FindAllApplicationData(Coor_Model self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Model_FindAllApplicationData_keyval0(Coor_Model self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Model_FindAllApplicationData_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Model_FindAllApplicationData_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Model_FindAllApplicationData_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
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
ApiList Coor_Model_FindAllApplicationData_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllCoords(Coor_Model self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllCoords_keyval0(Coor_Model self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllCoords_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllCoords_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllCoords_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
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
ApiSet Coor_Model_FindAllCoords_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllInputToNmrRuns(Coor_Model self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllInputToNmrRuns_keyval0(Coor_Model self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllInputToNmrRuns_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllInputToNmrRuns_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllInputToNmrRuns_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
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
ApiSet Coor_Model_FindAllInputToNmrRuns_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureGroups(Coor_Model self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureGroups_keyval0(Coor_Model self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureGroups_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureGroups_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureGroups_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
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
ApiSet Coor_Model_FindAllStructureGroups_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureValidations(Coor_Model self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllStructureValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllStructureValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureValidations_keyval0(Coor_Model self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllStructureValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureValidations_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllStructureValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureValidations_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllStructureValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllStructureValidations_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllStructureValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
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
ApiSet Coor_Model_FindAllStructureValidations_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllStructureValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllViolationLists(Coor_Model self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllViolationLists");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findAllViolationLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findAllViolationLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllViolationLists_keyval0(Coor_Model self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindAllViolationLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllViolationLists_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindAllViolationLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllViolationLists_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindAllViolationLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Model_FindAllViolationLists_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindAllViolationLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
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
ApiSet Coor_Model_FindAllViolationLists_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindAllViolationLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Model_FindFirstApplicationData(Coor_Model self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Model_FindFirstApplicationData_keyval0(Coor_Model self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Model_FindFirstApplicationData_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Model_FindFirstApplicationData_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Model_FindFirstApplicationData_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
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
Impl_ApplicationData Coor_Model_FindFirstApplicationData_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Model_FindFirstCoord(Coor_Model self, ApiMap conditions)
{
  
  Coor_Coord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Model_FindFirstCoord_keyval0(Coor_Model self)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Model_FindFirstCoord_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Model_FindFirstCoord_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Model_FindFirstCoord_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Model.coords

Coordinates in 
model
  @param  Coor_Model self
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
Coor_Coord Coor_Model_FindFirstCoord_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Coor_Model_FindFirstInputToNmrRun(Coor_Model self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstInputToNmrRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Coor_Model_FindFirstInputToNmrRun_keyval0(Coor_Model self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Coor_Model_FindFirstInputToNmrRun_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Coor_Model_FindFirstInputToNmrRun_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Coor_Model_FindFirstInputToNmrRun_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs where 
structure used as input
  @param  Coor_Model self
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
Nsim_Run Coor_Model_FindFirstInputToNmrRun_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Coor_Model_FindFirstStructureGroup(Coor_Model self, ApiMap conditions)
{
  
  Mols_StructureGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstStructureGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Coor_Model_FindFirstStructureGroup_keyval0(Coor_Model self)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Coor_Model_FindFirstStructureGroup_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Coor_Model_FindFirstStructureGroup_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Coor_Model_FindFirstStructureGroup_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
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
Mols_StructureGroup Coor_Model_FindFirstStructureGroup_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_StructureValidation Coor_Model_FindFirstStructureValidation(Coor_Model self, ApiMap conditions)
{
  
  Vald_StructureValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstStructureValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstStructureValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Vald_StructureValidation Coor_Model_FindFirstStructureValidation_keyval0(Coor_Model self)
{
  
  Vald_StructureValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstStructureValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_StructureValidation Coor_Model_FindFirstStructureValidation_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Vald_StructureValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstStructureValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_StructureValidation Coor_Model_FindFirstStructureValidation_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_StructureValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstStructureValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_StructureValidation Coor_Model_FindFirstStructureValidation_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_StructureValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstStructureValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
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
Vald_StructureValidation Coor_Model_FindFirstStructureValidation_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_StructureValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstStructureValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ViolationList Coor_Model_FindFirstViolationList(Coor_Model self, ApiMap conditions)
{
  
  Nmrc_ViolationList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstViolationList");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'findFirstViolationList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'findFirstViolationList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ViolationList Coor_Model_FindFirstViolationList_keyval0(Coor_Model self)
{
  
  Nmrc_ViolationList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Model_FindFirstViolationList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ViolationList Coor_Model_FindFirstViolationList_keyval1(Coor_Model self, char * key, ApiObject value)
{
  
  Nmrc_ViolationList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Model_FindFirstViolationList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ViolationList Coor_Model_FindFirstViolationList_keyval2(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ViolationList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Model_FindFirstViolationList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ViolationList Coor_Model_FindFirstViolationList_keyval3(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ViolationList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Model_FindFirstViolationList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
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
Nmrc_ViolationList Coor_Model_FindFirstViolationList_keyval4(Coor_Model self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ViolationList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Model_FindFirstViolationList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_Model_Get(Coor_Model self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Model self
  @returns   the result
**/
Acco_AccessObject Coor_Model_GetAccess(Coor_Model self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getAccess' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_GetApplicationData(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_Model Coor_Model_GetByKey(Coor_Model self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getByKey' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetClassName(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @returns   the result
**/
ApiSet Coor_Model_GetCoords(Coor_Model self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.details

Free text, for notes, 
explanatory comments, etc.
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetDetails(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getDetails' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_GetFieldNames(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_Model_GetFullKey(Coor_Model self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getFullKey' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiBoolean Coor_Model_GetInConstructor(Coor_Model self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @returns   the result
**/
ApiSet Coor_Model_GetInputToNmrRuns(Coor_Model self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getInputToNmrRuns' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiBoolean Coor_Model_GetIsDeleted(Coor_Model self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @returns  Local object key
**/
ApiObject Coor_Model_GetLocalKey(Coor_Model self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.name

Name of model
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetName(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getName' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetPackageName(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getPackageName' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetPackageShortName(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.parent

link to parent object - 
synonym for structureEnsemble
  @param  Coor_Model self
  @returns   the result
**/
Coor_StructureEnsemble Coor_Model_GetParent(Coor_Model self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getParent' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
ApiString Coor_Model_GetQualifiedName(Coor_Model self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getQualifiedName' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
Impl_MemopsRoot Coor_Model_GetRoot(Coor_Model self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Coor_Model self
  @returns   the result
**/
ApiInteger Coor_Model_GetSerial(Coor_Model self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.structureEnsemble

parent link
  @param  Coor_Model self
  @returns   the result
**/
Coor_StructureEnsemble Coor_Model_GetStructureEnsemble(Coor_Model self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getStructureEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.structureGroups

StructureGroups 
that Model belongs to.
  @param  Coor_Model self
  @returns   the result
**/
ApiSet Coor_Model_GetStructureGroups(Coor_Model self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Model.structureValidations

Validation 
results for Model
  @param  Coor_Model self
  @returns   the result
**/
ApiSet Coor_Model_GetStructureValidations(Coor_Model self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getStructureValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getStructureValidations' is not callable");
  
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
  @param  Coor_Model self
  @returns   the result
**/
Impl_TopObject Coor_Model_GetTopObject(Coor_Model self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @returns   the result
**/
ApiSet Coor_Model_GetViolationLists(Coor_Model self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getViolationLists");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'getViolationLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'getViolationLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.Model
  @param  Coor_StructureEnsemble parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Model Coor_Model_Init(Coor_StructureEnsemble parent, ApiMap attrlinks)
{
  
  return Coor_StructureEnsemble_NewModel(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.Model
  @param  Coor_StructureEnsemble parent
  @returns  the new object
**/
Coor_Model Coor_Model_Init_reqd(Coor_StructureEnsemble parent)
{
  
  Coor_Model  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Coor_Model_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Model self
  @param  Impl_ApplicationData value
**/
void *Coor_Model_RemoveApplicationData(Coor_Model self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  Nsim_Run value
**/
void *Coor_Model_RemoveInputToNmrRun(Coor_Model self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'removeInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @param  Mols_StructureGroup value
**/
void *Coor_Model_RemoveStructureGroup(Coor_Model self, Mols_StructureGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'removeStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'removeStructureGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @param  Vald_StructureValidation value
**/
void *Coor_Model_RemoveStructureValidation(Coor_Model self, Vald_StructureValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'removeStructureValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'removeStructureValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  Nmrc_ViolationList value
**/
void *Coor_Model_RemoveViolationList(Coor_Model self, Nmrc_ViolationList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeViolationList");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'removeViolationList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'removeViolationList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.Model
  @param  Coor_Model self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_Model_Set(Coor_Model self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Model self
  @param  Acco_AccessObject value
**/
void *Coor_Model_SetAccess(Coor_Model self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setAccess' is not callable");
  
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
  @param  Coor_Model self
  @param  ApiList values
**/
void *Coor_Model_SetApplicationData(Coor_Model self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @param  ApiSet values
**/
void *Coor_Model_SetCoords(Coor_Model self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setCoords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.details

Free text, for notes, 
explanatory comments, etc.
  @param  Coor_Model self
  @param  ApiString value
**/
void *Coor_Model_SetDetails(Coor_Model self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @param  ApiSet values
**/
void *Coor_Model_SetInputToNmrRuns(Coor_Model self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setInputToNmrRuns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.name

Name of model
  @param  Coor_Model self
  @param  ApiString value
**/
void *Coor_Model_SetName(Coor_Model self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Coor_Model self
  @param  ApiInteger value
**/
void *Coor_Model_SetSerial(Coor_Model self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.structureGroups

StructureGroups 
that Model belongs to.
  @param  Coor_Model self
  @param  ApiSet values
**/
void *Coor_Model_SetStructureGroups(Coor_Model self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setStructureGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Model.structureValidations

Validation 
results for Model
  @param  Coor_Model self
  @param  ApiSet values
**/
void *Coor_Model_SetStructureValidations(Coor_Model self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setStructureValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setStructureValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @param  ApiSet values
**/
void *Coor_Model_SetViolationLists(Coor_Model self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setViolationLists");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'setViolationLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'setViolationLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Model.coords

Coordinates in model
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_SortedCoords(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'sortedCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'sortedCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Model.inputToNmrRuns

NmrSim.Runs 
where structure used as input
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_SortedInputToNmrRuns(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.Model.structureGroups

StructureGroups that 
Model belongs to.
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_SortedStructureGroups(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'sortedStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'sortedStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.Model.structureValidations

Validation results 
for Model
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_SortedStructureValidations(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'sortedStructureValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'sortedStructureValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.Model.violationLists

NmrConstraint.ViolationLists 
calculated using Model
  @param  Coor_Model self
  @returns   the result
**/
ApiList Coor_Model_SortedViolationLists(Coor_Model self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedViolationLists");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Model: cannot find method 'sortedViolationLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Model: method 'sortedViolationLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
