
#include "ccp.h"

/*
  Mixture of labeled species.
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  Impl_ApplicationData value
**/
void *Lmol_LabeledMixture_AddApplicationData(Lmol_LabeledMixture self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Nmr_Experiment value
**/
void *Lmol_LabeledMixture_AddExperiment(Lmol_LabeledMixture self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Refs_MolComponent value
**/
void *Lmol_LabeledMixture_AddMolComponent(Lmol_LabeledMixture self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'addMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'addMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean complete
**/
void *Lmol_LabeledMixture_CheckAllValid(Lmol_LabeledMixture self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean complete
**/
void *Lmol_LabeledMixture_CheckValid(Lmol_LabeledMixture self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'checkValid' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_LabeledMixture_FindAllApplicationData(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findAllApplicationData' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval0(Lmol_LabeledMixture self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
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
ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllExperiments(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval0(Lmol_LabeledMixture self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolComponents(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findAllMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findAllMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval0(Lmol_LabeledMixture self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findAllMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findAllMolLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval0(Lmol_LabeledMixture self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
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
ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findFirstApplicationData' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval0(Lmol_LabeledMixture self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
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
Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval0(Lmol_LabeledMixture self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findFirstMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findFirstMolComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval0(Lmol_LabeledMixture self)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction(Lmol_LabeledMixture self, ApiMap conditions)
{
  
  Lmol_MolLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolLabelFraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'findFirstMolLabelFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'findFirstMolLabelFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval0(Lmol_LabeledMixture self)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_LabeledMixture_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_LabeledMixture_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_LabeledMixture_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_LabeledMixture_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
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
Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_LabeledMixture_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Lmol_LabeledMixture_Get(Lmol_LabeledMixture self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Acco_AccessObject Lmol_LabeledMixture_GetAccess(Lmol_LabeledMixture self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getAccess' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Acco_AccessObject Lmol_LabeledMixture_GetActiveAccess(Lmol_LabeledMixture self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getActiveAccess' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiList Lmol_LabeledMixture_GetApplicationData(Lmol_LabeledMixture self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.averageComposition

Average 
composition of LabeledMixture. The average composition can also be 
derived from the MolLabelFractions, but the averageComposition takes 
precedence in case of conflict.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Lmol_MolLabel Lmol_LabeledMixture_GetAverageComposition(Lmol_LabeledMixture self)
{
  
  Lmol_MolLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAverageComposition");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getAverageComposition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getAverageComposition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Lmol_LabeledMixture Lmol_LabeledMixture_GetByKey(Lmol_LabeledMixture self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getByKey' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiString Lmol_LabeledMixture_GetClassName(Lmol_LabeledMixture self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiSet Lmol_LabeledMixture_GetExperiments(Lmol_LabeledMixture self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getExperiments' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiList Lmol_LabeledMixture_GetFieldNames(Lmol_LabeledMixture self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Lmol_LabeledMixture_GetFullKey(Lmol_LabeledMixture self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getFullKey' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiBoolean Lmol_LabeledMixture_GetInConstructor(Lmol_LabeledMixture self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getInConstructor' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiBoolean Lmol_LabeledMixture_GetIsDeleted(Lmol_LabeledMixture self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.labeledMolecule

parent link
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Lmol_LabeledMolecule Lmol_LabeledMixture_GetLabeledMolecule(Lmol_LabeledMixture self)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getLabeledMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  Local object key
**/
ApiObject Lmol_LabeledMixture_GetLocalKey(Lmol_LabeledMixture self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiSet Lmol_LabeledMixture_GetMolComponents(Lmol_LabeledMixture self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiSet Lmol_LabeledMixture_GetMolLabelFractions(Lmol_LabeledMixture self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getMolLabelFractions' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiString Lmol_LabeledMixture_GetPackageName(Lmol_LabeledMixture self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getPackageName' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiString Lmol_LabeledMixture_GetPackageShortName(Lmol_LabeledMixture self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.LabeledMixture.parent

link to 
parent object - synonym for labeledMolecule
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Lmol_LabeledMolecule Lmol_LabeledMixture_GetParent(Lmol_LabeledMixture self)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getParent' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiString Lmol_LabeledMixture_GetQualifiedName(Lmol_LabeledMixture self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getQualifiedName' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Impl_MemopsRoot Lmol_LabeledMixture_GetRoot(Lmol_LabeledMixture self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.LabeledMixture.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiInteger Lmol_LabeledMixture_GetSerial(Lmol_LabeledMixture self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getSerial' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
Impl_TopObject Lmol_LabeledMixture_GetTopObject(Lmol_LabeledMixture self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMolecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_LabeledMixture Lmol_LabeledMixture_Init(Lmol_LabeledMolecule parent, ApiMap attrlinks)
{
  
  return Lmol_LabeledMolecule_NewLabeledMixture(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMolecule parent
  @returns  the new object
**/
Lmol_LabeledMixture Lmol_LabeledMixture_Init_reqd(Lmol_LabeledMolecule parent)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Lmol_LabeledMixture_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_NewMolLabelFraction(Lmol_LabeledMixture self, ApiMap attrlinks)
{
  
  Lmol_MolLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolLabelFraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'newMolLabelFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'newMolLabelFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  Lmol_MolLabel molLabel
  @returns  the new object
**/
Lmol_MolLabelFraction Lmol_LabeledMixture_NewMolLabelFraction_reqd(Lmol_LabeledMixture self, Lmol_MolLabel molLabel)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molLabel", molLabel);
  
  obj = Lmol_LabeledMixture_NewMolLabelFraction(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  Impl_ApplicationData value
**/
void *Lmol_LabeledMixture_RemoveApplicationData(Lmol_LabeledMixture self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Nmr_Experiment value
**/
void *Lmol_LabeledMixture_RemoveExperiment(Lmol_LabeledMixture self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Refs_MolComponent value
**/
void *Lmol_LabeledMixture_RemoveMolComponent(Lmol_LabeledMixture self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'removeMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'removeMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiString name
  @param  ApiObject value
**/
void *Lmol_LabeledMixture_Set(Lmol_LabeledMixture self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_LabeledMixture self
  @param  Acco_AccessObject value
**/
void *Lmol_LabeledMixture_SetAccess(Lmol_LabeledMixture self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setAccess' is not callable");
  
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
  @param  Lmol_LabeledMixture self
  @param  ApiList values
**/
void *Lmol_LabeledMixture_SetApplicationData(Lmol_LabeledMixture self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.averageComposition

Average 
composition of LabeledMixture. The average composition can also be 
derived from the MolLabelFractions, but the averageComposition takes 
precedence in case of conflict.
  @param  Lmol_LabeledMixture self
  @param  Lmol_MolLabel value
**/
void *Lmol_LabeledMixture_SetAverageComposition(Lmol_LabeledMixture self, Lmol_MolLabel value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAverageComposition");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setAverageComposition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setAverageComposition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiSet values
**/
void *Lmol_LabeledMixture_SetExperiments(Lmol_LabeledMixture self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiSet values
**/
void *Lmol_LabeledMixture_SetMolComponents(Lmol_LabeledMixture self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setMolComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.LabeledMixture.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Lmol_LabeledMixture self
  @param  ApiInteger value
**/
void *Lmol_LabeledMixture_SetSerial(Lmol_LabeledMixture self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiList Lmol_LabeledMixture_SortedExperiments(Lmol_LabeledMixture self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiList Lmol_LabeledMixture_SortedMolComponents(Lmol_LabeledMixture self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'sortedMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'sortedMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
ApiList Lmol_LabeledMixture_SortedMolLabelFractions(Lmol_LabeledMixture self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: cannot find method 'sortedMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.LabeledMixture: method 'sortedMolLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
