
#include "ccp.h"

/*
  Ensemble of three-dimensional structures (atomic coordinates) for the MolSystem or part of it.
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  Impl_ApplicationData value
**/
void *Coor_StructureEnsemble_AddApplicationData(Coor_StructureEnsemble self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Nmr_StructureAnalysis value
**/
void *Coor_StructureEnsemble_AddStructureAnalysis(Coor_StructureEnsemble self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'addStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'addStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Vald_ValidationStore value
**/
void *Coor_StructureEnsemble_AddValidationStore(Coor_StructureEnsemble self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'addValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'addValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiBoolean complete
**/
void *Coor_StructureEnsemble_CheckAllValid(Coor_StructureEnsemble self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiBoolean complete
**/
void *Coor_StructureEnsemble_CheckValid(Coor_StructureEnsemble self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllActiveRepositories(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllActiveRepositories_keyval0(Coor_StructureEnsemble self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllActiveRepositories_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllActiveRepositories_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllActiveRepositories_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
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
ApiList Coor_StructureEnsemble_FindAllActiveRepositories_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllApplicationData(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllApplicationData_keyval0(Coor_StructureEnsemble self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllApplicationData_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllApplicationData_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_StructureEnsemble_FindAllApplicationData_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
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
ApiList Coor_StructureEnsemble_FindAllApplicationData_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllCoordChains(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCoordChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllCoordChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllCoordChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllCoordChains_keyval0(Coor_StructureEnsemble self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllCoordChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllCoordChains_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllCoordChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllCoordChains_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllCoordChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllCoordChains_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllCoordChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
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
ApiSet Coor_StructureEnsemble_FindAllCoordChains_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllCoordChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEnsembleValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllEnsembleValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllEnsembleValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations_keyval0(Coor_StructureEnsemble self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllEnsembleValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllEnsembleValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllEnsembleValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllEnsembleValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
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
ApiSet Coor_StructureEnsemble_FindAllEnsembleValidations_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllEnsembleValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllModels(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllModels_keyval0(Coor_StructureEnsemble self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllModels_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllModels_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllModels_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
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
ApiSet Coor_StructureEnsemble_FindAllModels_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses_keyval0(Coor_StructureEnsemble self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
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
ApiSet Coor_StructureEnsemble_FindAllStructureAnalyses_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllValidationStores(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllValidationStores");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findAllValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findAllValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllValidationStores_keyval0(Coor_StructureEnsemble self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllValidationStores_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllValidationStores_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_StructureEnsemble_FindAllValidationStores_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
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
ApiSet Coor_StructureEnsemble_FindAllValidationStores_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository_keyval0(Coor_StructureEnsemble self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
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
Impl_Repository Coor_StructureEnsemble_FindFirstActiveRepository_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData_keyval0(Coor_StructureEnsemble self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
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
Impl_ApplicationData Coor_StructureEnsemble_FindFirstApplicationData_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Coor_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCoordChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstCoordChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstCoordChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain_keyval0(Coor_StructureEnsemble self)
{
  
  Coor_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstCoordChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Coor_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstCoordChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstCoordChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstCoordChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
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
Coor_Chain Coor_StructureEnsemble_FindFirstCoordChain_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstCoordChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Vald_EnsembleValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEnsembleValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstEnsembleValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstEnsembleValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation_keyval0(Coor_StructureEnsemble self)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstEnsembleValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstEnsembleValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstEnsembleValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstEnsembleValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
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
Vald_EnsembleValidation Coor_StructureEnsemble_FindFirstEnsembleValidation_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstEnsembleValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Coor_StructureEnsemble_FindFirstModel(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Coor_StructureEnsemble_FindFirstModel_keyval0(Coor_StructureEnsemble self)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Coor_StructureEnsemble_FindFirstModel_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Coor_StructureEnsemble_FindFirstModel_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Coor_StructureEnsemble_FindFirstModel_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
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
Coor_Model Coor_StructureEnsemble_FindFirstModel_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstStructureAnalysis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis_keyval0(Coor_StructureEnsemble self)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
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
Nmr_StructureAnalysis Coor_StructureEnsemble_FindFirstStructureAnalysis_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore(Coor_StructureEnsemble self, ApiMap conditions)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'findFirstValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'findFirstValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore_keyval0(Coor_StructureEnsemble self)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_StructureEnsemble_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore_keyval1(Coor_StructureEnsemble self, char * key, ApiObject value)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_StructureEnsemble_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore_keyval2(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_StructureEnsemble_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore_keyval3(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_StructureEnsemble_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
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
Vald_ValidationStore Coor_StructureEnsemble_FindFirstValidationStore_keyval4(Coor_StructureEnsemble self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_StructureEnsemble_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_StructureEnsemble_Get(Coor_StructureEnsemble self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Acco_AccessObject Coor_StructureEnsemble_GetAccess(Coor_StructureEnsemble self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getAccess' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Acco_AccessObject Coor_StructureEnsemble_GetActiveAccess(Coor_StructureEnsemble self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_GetActiveRepositories(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getActiveRepositories' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_GetApplicationData(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.atomNamingSystem

Atom 
naming system used in stored coordinates. If not set, coordinates are 
stored using CCPN/IUPAC names
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetAtomNamingSystem(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getAtomNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getAtomNamingSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_StructureEnsemble Coor_StructureEnsemble_GetByKey(Coor_StructureEnsemble self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getByKey' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetClassName(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.coordChains

child 
link to class Chain
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiSet Coor_StructureEnsemble_GetCoordChains(Coor_StructureEnsemble self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCoordChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getCoordChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getCoordChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetCreatedBy(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.details

Free text, 
for notes, explanatory comments, etc.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetDetails(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.ensembleId

Ensemble 
ID number. Part of key.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiInteger Coor_StructureEnsemble_GetEnsembleId(Coor_StructureEnsemble self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnsembleId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getEnsembleId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getEnsembleId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link ensembleValidations
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiSet Coor_StructureEnsemble_GetEnsembleValidations(Coor_StructureEnsemble self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnsembleValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getEnsembleValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getEnsembleValidations' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_GetFieldNames(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_StructureEnsemble_GetFullKey(Coor_StructureEnsemble self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetGuid(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getGuid' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetInConstructor(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getInConstructor' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetIsDeleted(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetIsLoaded(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetIsModifiable(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetIsModified(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiBoolean Coor_StructureEnsemble_GetIsReading(Coor_StructureEnsemble self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetLastUnlockedBy(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns  Local object key
**/
ApiObject Coor_StructureEnsemble_GetLocalKey(Coor_StructureEnsemble self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.memopsRoot

parent 
link
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Impl_MemopsRoot Coor_StructureEnsemble_GetMemopsRoot(Coor_StructureEnsemble self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.models

child link 
to class Model
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiSet Coor_StructureEnsemble_GetModels(Coor_StructureEnsemble self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.molSystem

Molecular 
System that structure corresponds to
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Mols_MolSystem Coor_StructureEnsemble_GetMolSystem(Coor_StructureEnsemble self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.outputFromNmrRun

NmrSim.Run 
from which structure was generated
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Nsim_Run Coor_StructureEnsemble_GetOutputFromNmrRun(Coor_StructureEnsemble self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getOutputFromNmrRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Impl_PackageLocator Coor_StructureEnsemble_GetPackageLocator(Coor_StructureEnsemble self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getPackageLocator' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetPackageName(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getPackageName' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetPackageShortName(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.StructureEnsemble.parent

link to 
parent object - synonym for memopsRoot
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Impl_MemopsRoot Coor_StructureEnsemble_GetParent(Coor_StructureEnsemble self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getParent' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetQualifiedName(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.resNamingSystem

Naming 
system for residues in stored coordinates. If not set, CCPN/IUPAC names 
are used.
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiString Coor_StructureEnsemble_GetResNamingSystem(Coor_StructureEnsemble self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getResNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getResNamingSystem' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Impl_MemopsRoot Coor_StructureEnsemble_GetRoot(Coor_StructureEnsemble self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiSet Coor_StructureEnsemble_GetStructureAnalyses(Coor_StructureEnsemble self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.structureGeneration

StructureGeneration 
used to generate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Nmr_StructureGeneration Coor_StructureEnsemble_GetStructureGeneration(Coor_StructureEnsemble self)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getStructureGeneration' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
Impl_TopObject Coor_StructureEnsemble_GetTopObject(Coor_StructureEnsemble self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiSet Coor_StructureEnsemble_GetValidationStores(Coor_StructureEnsemble self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStores");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'getValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'getValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.StructureEnsemble
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_StructureEnsemble Coor_StructureEnsemble_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewStructureEnsemble(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.StructureEnsemble
  @param  Impl_MemopsRoot parent
  @param  ApiInteger ensembleId
  @param  Mols_MolSystem molSystem
  @returns  the new object
**/
Coor_StructureEnsemble Coor_StructureEnsemble_Init_reqd(Impl_MemopsRoot parent, ApiInteger ensembleId, Mols_MolSystem molSystem)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "ensembleId", ensembleId);
  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  
  obj = Coor_StructureEnsemble_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Chain
  @param  Coor_StructureEnsemble self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Chain Coor_StructureEnsemble_NewChain(Coor_StructureEnsemble self, ApiMap attrlinks)
{
  
  Coor_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'newChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'newChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Chain
  @param  Coor_StructureEnsemble self
  @param  char * code
  @returns  the new object
**/
Coor_Chain Coor_StructureEnsemble_NewChain_reqd(Coor_StructureEnsemble self, char * code)
{
  
  Coor_Chain  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  
  obj = Coor_StructureEnsemble_NewChain(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Model
  @param  Coor_StructureEnsemble self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Model Coor_StructureEnsemble_NewModel(Coor_StructureEnsemble self, ApiMap attrlinks)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'newModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'newModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Model
  @param  Coor_StructureEnsemble self
  @returns  the new object
**/
Coor_Model Coor_StructureEnsemble_NewModel_reqd(Coor_StructureEnsemble self)
{
  
  Coor_Model  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Coor_StructureEnsemble_NewModel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_StructureEnsemble self
  @param  Impl_ApplicationData value
**/
void *Coor_StructureEnsemble_RemoveApplicationData(Coor_StructureEnsemble self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Nmr_StructureAnalysis value
**/
void *Coor_StructureEnsemble_RemoveStructureAnalysis(Coor_StructureEnsemble self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'removeStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'removeStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Vald_ValidationStore value
**/
void *Coor_StructureEnsemble_RemoveValidationStore(Coor_StructureEnsemble self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'removeValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'removeValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_StructureEnsemble_Set(Coor_StructureEnsemble self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_StructureEnsemble self
  @param  Acco_AccessObject value
**/
void *Coor_StructureEnsemble_SetAccess(Coor_StructureEnsemble self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setAccess' is not callable");
  
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
  @param  Coor_StructureEnsemble self
  @param  ApiList values
**/
void *Coor_StructureEnsemble_SetApplicationData(Coor_StructureEnsemble self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.atomNamingSystem

Atom 
naming system used in stored coordinates. If not set, coordinates are 
stored using CCPN/IUPAC names
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetAtomNamingSystem(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setAtomNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setAtomNamingSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetCreatedBy(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.StructureEnsemble.details

Free text, 
for notes, explanatory comments, etc.
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetDetails(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.StructureEnsemble.ensembleId

Ensemble 
ID number. Part of key.
  @param  Coor_StructureEnsemble self
  @param  ApiInteger value
**/
void *Coor_StructureEnsemble_SetEnsembleId(Coor_StructureEnsemble self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEnsembleId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setEnsembleId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setEnsembleId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetGuid(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Coor_StructureEnsemble self
  @param  ApiBoolean value
**/
void *Coor_StructureEnsemble_SetIsModifiable(Coor_StructureEnsemble self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetLastUnlockedBy(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.StructureEnsemble.molSystem

Molecular 
System that structure corresponds to
  @param  Coor_StructureEnsemble self
  @param  Mols_MolSystem value
**/
void *Coor_StructureEnsemble_SetMolSystem(Coor_StructureEnsemble self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.outputFromNmrRun

NmrSim.Run 
from which structure was generated
  @param  Coor_StructureEnsemble self
  @param  Nsim_Run value
**/
void *Coor_StructureEnsemble_SetOutputFromNmrRun(Coor_StructureEnsemble self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setOutputFromNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.resNamingSystem

Naming 
system for residues in stored coordinates. If not set, CCPN/IUPAC names 
are used.
  @param  Coor_StructureEnsemble self
  @param  ApiString value
**/
void *Coor_StructureEnsemble_SetResNamingSystem(Coor_StructureEnsemble self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setResNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setResNamingSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiSet values
**/
void *Coor_StructureEnsemble_SetStructureAnalyses(Coor_StructureEnsemble self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setStructureAnalyses' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.structureGeneration

StructureGeneration 
used to generate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  Nmr_StructureGeneration value
**/
void *Coor_StructureEnsemble_SetStructureGeneration(Coor_StructureEnsemble self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @param  ApiSet values
**/
void *Coor_StructureEnsemble_SetValidationStores(Coor_StructureEnsemble self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValidationStores");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'setValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'setValidationStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.StructureEnsemble.coordChains

child link to 
class Chain
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_SortedCoordChains(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCoordChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'sortedCoordChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'sortedCoordChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.StructureEnsemble.ensembleValidations

Validation.EnsembleValidations 
for structureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_SortedEnsembleValidations(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEnsembleValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'sortedEnsembleValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'sortedEnsembleValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.StructureEnsemble.models

child 
link to class Model
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_SortedModels(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'sortedModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'sortedModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.StructureEnsemble.structureAnalyses

Structure 
analyses carried out using StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_SortedStructureAnalyses(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'sortedStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'sortedStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.StructureEnsemble.validationStores

ValidationStores 
that validate StructureEnsemble
  @param  Coor_StructureEnsemble self
  @returns   the result
**/
ApiList Coor_StructureEnsemble_SortedValidationStores(Coor_StructureEnsemble self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedValidationStores");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: cannot find method 'sortedValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.StructureEnsemble: method 'sortedValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
