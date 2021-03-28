
#include "ccp.h"

/*
  Residue labeling pattern. If there are any SingleAtomLabels for a given atom, these uniquely determine the isotope composition. Failing that, if there are any UniformLabels for a given atom, these uniquely determine the isotope composition. Failing that the composition is determined  by the ResLabelFractions. 
  Note that AtomLabels effectively specify the isotope composition one position at a time. Any correlations between the labeling patterns of two (or more) Atoms can only be specified with the ResLabelFractions.
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  Impl_ApplicationData value
**/
void *Lmol_ResLabel_AddApplicationData(Lmol_ResLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean complete
**/
void *Lmol_ResLabel_CheckAllValid(Lmol_ResLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean complete
**/
void *Lmol_ResLabel_CheckValid(Lmol_ResLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'checkValid' is not callable");
  
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
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabel_FindAllApplicationData(Lmol_ResLabel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findAllApplicationData' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabel_FindAllApplicationData_keyval0(Lmol_ResLabel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabel_FindAllApplicationData_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabel_FindAllApplicationData_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabel_FindAllApplicationData_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
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
ApiList Lmol_ResLabel_FindAllApplicationData_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllAtomLabels(Lmol_ResLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findAllAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findAllAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval0(Lmol_ResLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
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
ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllResLabelFractions(Lmol_ResLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findAllResLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findAllResLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval0(Lmol_ResLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindAllResLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindAllResLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindAllResLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindAllResLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
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
ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindAllResLabelFractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData(Lmol_ResLabel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval0(Lmol_ResLabel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
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
Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel(Lmol_ResLabel self, ApiMap conditions)
{
  
  Lmol_AtomLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findFirstAtomLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findFirstAtomLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval0(Lmol_ResLabel self)
{
  
  Lmol_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  Lmol_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
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
Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction(Lmol_ResLabel self, ApiMap conditions)
{
  
  Lmol_ResLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResLabelFraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'findFirstResLabelFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'findFirstResLabelFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval0(Lmol_ResLabel self)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabel_FindFirstResLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval1(Lmol_ResLabel self, char * key, ApiObject value)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabel_FindFirstResLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabel_FindFirstResLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabel_FindFirstResLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
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
Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabel_FindFirstResLabelFraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Lmol_ResLabel_Get(Lmol_ResLabel self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabel self
  @returns   the result
**/
Acco_AccessObject Lmol_ResLabel_GetAccess(Lmol_ResLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getAccess' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
Acco_AccessObject Lmol_ResLabel_GetActiveAccess(Lmol_ResLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getActiveAccess' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiList Lmol_ResLabel_GetApplicationData(Lmol_ResLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link to 
class AtomLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiSet Lmol_ResLabel_GetAtomLabels(Lmol_ResLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Lmol_ResLabel Lmol_ResLabel_GetByKey(Lmol_ResLabel self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Lmol_ResLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getByKey' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiString Lmol_ResLabel_GetClassName(Lmol_ResLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getClassName' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiList Lmol_ResLabel_GetFieldNames(Lmol_ResLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Lmol_ResLabel_GetFullKey(Lmol_ResLabel self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getFullKey' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiBoolean Lmol_ResLabel_GetInConstructor(Lmol_ResLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getInConstructor' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiBoolean Lmol_ResLabel_GetIsDeleted(Lmol_ResLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @returns  Local object key
**/
ApiObject Lmol_ResLabel_GetLocalKey(Lmol_ResLabel self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.molLabel

parent link
  @param  Lmol_ResLabel self
  @returns   the result
**/
Lmol_MolLabel Lmol_ResLabel_GetMolLabel(Lmol_ResLabel self)
{
  
  Lmol_MolLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getMolLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getMolLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link molResidue
  @param  Lmol_ResLabel self
  @returns   the result
**/
Mole_MolResidue Lmol_ResLabel_GetMolResidue(Lmol_ResLabel self)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getMolResidue' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiString Lmol_ResLabel_GetPackageName(Lmol_ResLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getPackageName' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiString Lmol_ResLabel_GetPackageShortName(Lmol_ResLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.parent

link to parent 
object - synonym for molLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
Lmol_MolLabel Lmol_ResLabel_GetParent(Lmol_ResLabel self)
{
  
  Lmol_MolLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getParent' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiString Lmol_ResLabel_GetQualifiedName(Lmol_ResLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.resId

resId for 
corresponding MolResidue
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiInteger Lmol_ResLabel_GetResId(Lmol_ResLabel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResId");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getResId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getResId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child 
link
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiSet Lmol_ResLabel_GetResLabelFractions(Lmol_ResLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getResLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getResLabelFractions' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
Impl_MemopsRoot Lmol_ResLabel_GetRoot(Lmol_ResLabel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getRoot' is not callable");
  
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
  @param  Lmol_ResLabel self
  @returns   the result
**/
Impl_TopObject Lmol_ResLabel_GetTopObject(Lmol_ResLabel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_ResLabel Lmol_ResLabel_Init(Lmol_MolLabel parent, ApiMap attrlinks)
{
  
  return Lmol_MolLabel_NewResLabel(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel parent
  @param  ApiInteger resId
  @returns  the new object
**/
Lmol_ResLabel Lmol_ResLabel_Init_reqd(Lmol_MolLabel parent, ApiInteger resId)
{
  
  Lmol_ResLabel  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resId", resId);
  
  obj = Lmol_ResLabel_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_ResLabelFraction Lmol_ResLabel_NewResLabelFraction(Lmol_ResLabel self, ApiMap attrlinks)
{
  
  Lmol_ResLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResLabelFraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'newResLabelFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'newResLabelFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel self
  @returns  the new object
**/
Lmol_ResLabelFraction Lmol_ResLabel_NewResLabelFraction_reqd(Lmol_ResLabel self)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Lmol_ResLabel_NewResLabelFraction(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.SingleAtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_SingleAtomLabel Lmol_ResLabel_NewSingleAtomLabel(Lmol_ResLabel self, ApiMap attrlinks)
{
  
  Lmol_SingleAtomLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSingleAtomLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'newSingleAtomLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'newSingleAtomLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.SingleAtomLabel
  @param  Lmol_ResLabel self
  @param  char * atomName
  @param  ApiInteger massNumber
  @returns  the new object
**/
Lmol_SingleAtomLabel Lmol_ResLabel_NewSingleAtomLabel_reqd(Lmol_ResLabel self, char * atomName, ApiInteger massNumber)
{
  
  Lmol_SingleAtomLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomName = ApiString_New(atomName);

  PyDict_SetItemString(attrlinks, "atomName", api__atomName);
  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Lmol_ResLabel_NewSingleAtomLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_UniformAtomLabel Lmol_ResLabel_NewUniformAtomLabel(Lmol_ResLabel self, ApiMap attrlinks)
{
  
  Lmol_UniformAtomLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newUniformAtomLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'newUniformAtomLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'newUniformAtomLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel self
  @param  char * elementName
  @param  ApiInteger massNumber
  @returns  the new object
**/
Lmol_UniformAtomLabel Lmol_ResLabel_NewUniformAtomLabel_reqd(Lmol_ResLabel self, char * elementName, ApiInteger massNumber)
{
  
  Lmol_UniformAtomLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__elementName = ApiString_New(elementName);

  PyDict_SetItemString(attrlinks, "elementName", api__elementName);
  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Lmol_ResLabel_NewUniformAtomLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__elementName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  Impl_ApplicationData value
**/
void *Lmol_ResLabel_RemoveApplicationData(Lmol_ResLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiString name
  @param  ApiObject value
**/
void *Lmol_ResLabel_Set(Lmol_ResLabel self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabel self
  @param  Acco_AccessObject value
**/
void *Lmol_ResLabel_SetAccess(Lmol_ResLabel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'setAccess' is not callable");
  
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
  @param  Lmol_ResLabel self
  @param  ApiList values
**/
void *Lmol_ResLabel_SetApplicationData(Lmol_ResLabel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.ResLabel.resId

resId for 
corresponding MolResidue
  @param  Lmol_ResLabel self
  @param  ApiInteger value
**/
void *Lmol_ResLabel_SetResId(Lmol_ResLabel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResId");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'setResId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'setResId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiList Lmol_ResLabel_SortedAtomLabels(Lmol_ResLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'sortedAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'sortedAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns   the result
**/
ApiList Lmol_ResLabel_SortedResLabelFractions(Lmol_ResLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResLabelFractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: cannot find method 'sortedResLabelFractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabel: method 'sortedResLabelFractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
