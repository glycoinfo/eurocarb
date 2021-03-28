
#include "ccp.h"

/*
  Molecule labeling pattern
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  Impl_ApplicationData value
**/
void *Lmol_MolLabel_AddApplicationData(Lmol_MolLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  Lmol_LabeledMixture value
**/
void *Lmol_MolLabel_AddAverageLabeledMixture(Lmol_MolLabel self, Lmol_LabeledMixture value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAverageLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'addAverageLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'addAverageLabeledMixture' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  ApiBoolean complete
**/
void *Lmol_MolLabel_CheckAllValid(Lmol_MolLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  ApiBoolean complete
**/
void *Lmol_MolLabel_CheckValid(Lmol_MolLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'checkValid' is not callable");
  
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
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabel_FindAllApplicationData(Lmol_MolLabel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findAllApplicationData' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabel_FindAllApplicationData_keyval0(Lmol_MolLabel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabel_FindAllApplicationData_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabel_FindAllApplicationData_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabel_FindAllApplicationData_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
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
ApiList Lmol_MolLabel_FindAllApplicationData_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures(Lmol_MolLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAverageLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findAllAverageLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findAllAverageLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures_keyval0(Lmol_MolLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindAllAverageLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindAllAverageLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindAllAverageLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindAllAverageLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
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
ApiSet Lmol_MolLabel_FindAllAverageLabeledMixtures_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindAllAverageLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllMolLabelFractions(Lmol_MolLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findAllMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findAllMolLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllMolLabelFractions_keyval0(Lmol_MolLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllMolLabelFractions_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllMolLabelFractions_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllMolLabelFractions_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
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
ApiSet Lmol_MolLabel_FindAllMolLabelFractions_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindAllMolLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllResLabels(Lmol_MolLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findAllResLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findAllResLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllResLabels_keyval0(Lmol_MolLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindAllResLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllResLabels_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindAllResLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllResLabels_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindAllResLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_MolLabel_FindAllResLabels_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindAllResLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
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
ApiSet Lmol_MolLabel_FindAllResLabels_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindAllResLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData(Lmol_MolLabel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData_keyval0(Lmol_MolLabel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
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
Impl_ApplicationData Lmol_MolLabel_FindFirstApplicationData_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture(Lmol_MolLabel self, ApiMap conditions)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAverageLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findFirstAverageLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findFirstAverageLabeledMixture' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture_keyval0(Lmol_MolLabel self)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindFirstAverageLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindFirstAverageLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindFirstAverageLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindFirstAverageLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
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
Lmol_LabeledMixture Lmol_MolLabel_FindFirstAverageLabeledMixture_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindFirstAverageLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction(Lmol_MolLabel self, ApiMap conditions)
{
  
  Lmol_MolLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolLabelFraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findFirstMolLabelFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findFirstMolLabelFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction_keyval0(Lmol_MolLabel self)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
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
Lmol_MolLabelFraction Lmol_MolLabel_FindFirstMolLabelFraction_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindFirstMolLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel(Lmol_MolLabel self, ApiMap conditions)
{
  
  Lmol_ResLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'findFirstResLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'findFirstResLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel_keyval0(Lmol_MolLabel self)
{
  
  Lmol_ResLabel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabel_FindFirstResLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel_keyval1(Lmol_MolLabel self, char * key, ApiObject value)
{
  
  Lmol_ResLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabel_FindFirstResLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel_keyval2(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_ResLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabel_FindFirstResLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel_keyval3(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_ResLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabel_FindFirstResLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child 
link to class ResLabel
  @param  Lmol_MolLabel self
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
Lmol_ResLabel Lmol_MolLabel_FindFirstResLabel_keyval4(Lmol_MolLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_ResLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabel_FindFirstResLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Lmol_MolLabel_Get(Lmol_MolLabel self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabel self
  @returns   the result
**/
Acco_AccessObject Lmol_MolLabel_GetAccess(Lmol_MolLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getAccess' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
Acco_AccessObject Lmol_MolLabel_GetActiveAccess(Lmol_MolLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getActiveAccess' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiList Lmol_MolLabel_GetApplicationData(Lmol_MolLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiSet Lmol_MolLabel_GetAverageLabeledMixtures(Lmol_MolLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAverageLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getAverageLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getAverageLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Lmol_MolLabel Lmol_MolLabel_GetByKey(Lmol_MolLabel self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Lmol_MolLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getByKey' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiString Lmol_MolLabel_GetClassName(Lmol_MolLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getClassName' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiList Lmol_MolLabel_GetFieldNames(Lmol_MolLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Lmol_MolLabel_GetFullKey(Lmol_MolLabel self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getFullKey' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiBoolean Lmol_MolLabel_GetInConstructor(Lmol_MolLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getInConstructor' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiBoolean Lmol_MolLabel_GetIsDeleted(Lmol_MolLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabel.labeledMolecule

parent 
link
  @param  Lmol_MolLabel self
  @returns   the result
**/
Lmol_LabeledMolecule Lmol_MolLabel_GetLabeledMolecule(Lmol_MolLabel self)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getLabeledMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getLabeledMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @returns  Local object key
**/
ApiObject Lmol_MolLabel_GetLocalKey(Lmol_MolLabel self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiSet Lmol_MolLabel_GetMolLabelFractions(Lmol_MolLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getMolLabelFractions' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiString Lmol_MolLabel_GetPackageName(Lmol_MolLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getPackageName' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiString Lmol_MolLabel_GetPackageShortName(Lmol_MolLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabel.parent

link to parent 
object - synonym for labeledMolecule
  @param  Lmol_MolLabel self
  @returns   the result
**/
Lmol_LabeledMolecule Lmol_MolLabel_GetParent(Lmol_MolLabel self)
{
  
  Lmol_LabeledMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getParent' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiString Lmol_MolLabel_GetQualifiedName(Lmol_MolLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link to 
class ResLabel
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiSet Lmol_MolLabel_GetResLabels(Lmol_MolLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getResLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getResLabels' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
Impl_MemopsRoot Lmol_MolLabel_GetRoot(Lmol_MolLabel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabel.serial

A MolLabel 
describes a single distribution of isotope fractions. Complex correlated 
labeling patterns may be described as mixtures of MolLabels.
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiInteger Lmol_MolLabel_GetSerial(Lmol_MolLabel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getSerial' is not callable");
  
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
  @param  Lmol_MolLabel self
  @returns   the result
**/
Impl_TopObject Lmol_MolLabel_GetTopObject(Lmol_MolLabel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_LabeledMolecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_MolLabel Lmol_MolLabel_Init(Lmol_LabeledMolecule parent, ApiMap attrlinks)
{
  
  return Lmol_LabeledMolecule_NewMolLabel(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_LabeledMolecule parent
  @returns  the new object
**/
Lmol_MolLabel Lmol_MolLabel_Init_reqd(Lmol_LabeledMolecule parent)
{
  
  Lmol_MolLabel  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Lmol_MolLabel_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_ResLabel Lmol_MolLabel_NewResLabel(Lmol_MolLabel self, ApiMap attrlinks)
{
  
  Lmol_ResLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'newResLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'newResLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel self
  @param  ApiInteger resId
  @returns  the new object
**/
Lmol_ResLabel Lmol_MolLabel_NewResLabel_reqd(Lmol_MolLabel self, ApiInteger resId)
{
  
  Lmol_ResLabel  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resId", resId);
  
  obj = Lmol_MolLabel_NewResLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabel self
  @param  Impl_ApplicationData value
**/
void *Lmol_MolLabel_RemoveApplicationData(Lmol_MolLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  Lmol_LabeledMixture value
**/
void *Lmol_MolLabel_RemoveAverageLabeledMixture(Lmol_MolLabel self, Lmol_LabeledMixture value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAverageLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'removeAverageLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'removeAverageLabeledMixture' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.LabeledMolecule.MolLabel
  @param  Lmol_MolLabel self
  @param  ApiString name
  @param  ApiObject value
**/
void *Lmol_MolLabel_Set(Lmol_MolLabel self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabel self
  @param  Acco_AccessObject value
**/
void *Lmol_MolLabel_SetAccess(Lmol_MolLabel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'setAccess' is not callable");
  
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
  @param  Lmol_MolLabel self
  @param  ApiList values
**/
void *Lmol_MolLabel_SetApplicationData(Lmol_MolLabel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @param  ApiSet values
**/
void *Lmol_MolLabel_SetAverageLabeledMixtures(Lmol_MolLabel self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAverageLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'setAverageLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'setAverageLabeledMixtures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @param  ApiSet values
**/
void *Lmol_MolLabel_SetMolLabelFractions(Lmol_MolLabel self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'setMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'setMolLabelFractions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.MolLabel.serial

A MolLabel 
describes a single distribution of isotope fractions. Complex correlated 
labeling patterns may be described as mixtures of MolLabels.
  @param  Lmol_MolLabel self
  @param  ApiInteger value
**/
void *Lmol_MolLabel_SetSerial(Lmol_MolLabel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.MolLabel.averageLabeledMixtures

LabeledMixtures 
that have MolLabel as their averaged composition
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiList Lmol_MolLabel_SortedAverageLabeledMixtures(Lmol_MolLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAverageLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'sortedAverageLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'sortedAverageLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.MolLabel.molLabelFractions

MolLabelFractions 
that involve MolLabel
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiList Lmol_MolLabel_SortedMolLabelFractions(Lmol_MolLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'sortedMolLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'sortedMolLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.LabeledMolecule.MolLabel.resLabels

child link 
to class ResLabel
  @param  Lmol_MolLabel self
  @returns   the result
**/
ApiList Lmol_MolLabel_SortedResLabels(Lmol_MolLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: cannot find method 'sortedResLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabel: method 'sortedResLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
