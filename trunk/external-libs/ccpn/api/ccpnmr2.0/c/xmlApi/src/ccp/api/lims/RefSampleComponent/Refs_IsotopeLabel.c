
#include "ccp.h"

/*
  Isotope label or labeling pattern. Refers to elements of a type given by elementSymbol. If self.molResidues is set the substitution is limited to these residues. If self.atomNames is set the substitution is limited to atoms with these names.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  Impl_ApplicationData value
**/
void *Refs_IsotopeLabel_AddApplicationData(Refs_IsotopeLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.IsotopeLabel.atomNames

Names of 
atoms that have been isotope substituted. Applies to the residues given 
by self.molResidues, or, if self.molResidues is empty, to the entire 
molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiString value
**/
void *Refs_IsotopeLabel_AddAtomName(Refs_IsotopeLabel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'addAtomName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'addAtomName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  Mole_MolResidue value
**/
void *Refs_IsotopeLabel_AddMolResidue(Refs_IsotopeLabel self, Mole_MolResidue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolResidue");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'addMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'addMolResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  ApiBoolean complete
**/
void *Refs_IsotopeLabel_CheckAllValid(Refs_IsotopeLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  ApiBoolean complete
**/
void *Refs_IsotopeLabel_CheckValid(Refs_IsotopeLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'checkValid' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_IsotopeLabel_FindAllApplicationData(Refs_IsotopeLabel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_IsotopeLabel_FindAllApplicationData_keyval0(Refs_IsotopeLabel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_IsotopeLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_IsotopeLabel_FindAllApplicationData_keyval1(Refs_IsotopeLabel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_IsotopeLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_IsotopeLabel_FindAllApplicationData_keyval2(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_IsotopeLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_IsotopeLabel_FindAllApplicationData_keyval3(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_IsotopeLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
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
ApiList Refs_IsotopeLabel_FindAllApplicationData_keyval4(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_IsotopeLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_IsotopeLabel_FindAllMolResidues(Refs_IsotopeLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolResidues");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'findAllMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'findAllMolResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_IsotopeLabel_FindAllMolResidues_keyval0(Refs_IsotopeLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_IsotopeLabel_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_IsotopeLabel_FindAllMolResidues_keyval1(Refs_IsotopeLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_IsotopeLabel_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_IsotopeLabel_FindAllMolResidues_keyval2(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_IsotopeLabel_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_IsotopeLabel_FindAllMolResidues_keyval3(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_IsotopeLabel_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
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
ApiSet Refs_IsotopeLabel_FindAllMolResidues_keyval4(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_IsotopeLabel_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData(Refs_IsotopeLabel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData_keyval0(Refs_IsotopeLabel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_IsotopeLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData_keyval1(Refs_IsotopeLabel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_IsotopeLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData_keyval2(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_IsotopeLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData_keyval3(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_IsotopeLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
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
Impl_ApplicationData Refs_IsotopeLabel_FindFirstApplicationData_keyval4(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_IsotopeLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue(Refs_IsotopeLabel self, ApiMap conditions)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolResidue");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'findFirstMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'findFirstMolResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue_keyval0(Refs_IsotopeLabel self)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_IsotopeLabel_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue_keyval1(Refs_IsotopeLabel self, char * key, ApiObject value)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_IsotopeLabel_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue_keyval2(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_IsotopeLabel_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue_keyval3(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_IsotopeLabel_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
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
Mole_MolResidue Refs_IsotopeLabel_FindFirstMolResidue_keyval4(Refs_IsotopeLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_IsotopeLabel_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_IsotopeLabel_Get(Refs_IsotopeLabel self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
Acco_AccessObject Refs_IsotopeLabel_GetAccess(Refs_IsotopeLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getAccess' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiList Refs_IsotopeLabel_GetApplicationData(Refs_IsotopeLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.atomNames

Names of 
atoms that have been isotope substituted. Applies to the residues given 
by self.molResidues, or, if self.molResidues is empty, to the entire 
molecule.
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiList Refs_IsotopeLabel_GetAtomNames(Refs_IsotopeLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getAtomNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getAtomNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_IsotopeLabel Refs_IsotopeLabel_GetByKey(Refs_IsotopeLabel self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_IsotopeLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getByKey' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiString Refs_IsotopeLabel_GetClassName(Refs_IsotopeLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.elementSymbol

Element 
symbol for chemical element that is isotope substituted.
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiString Refs_IsotopeLabel_GetElementSymbol(Refs_IsotopeLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getElementSymbol' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiList Refs_IsotopeLabel_GetFieldNames(Refs_IsotopeLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_IsotopeLabel_GetFullKey(Refs_IsotopeLabel self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getFullKey' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiBoolean Refs_IsotopeLabel_GetInConstructor(Refs_IsotopeLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.incorporation

Fraction 
of element that is consists of isotope. Unless given specifically in 
another IsotopeLabel, the rest of the element is assumed to consist of 
the isotopes in their natural abundance.
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiFloat Refs_IsotopeLabel_GetIncorporation(Refs_IsotopeLabel self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIncorporation");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getIncorporation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getIncorporation' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiBoolean Refs_IsotopeLabel_GetIsDeleted(Refs_IsotopeLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @returns  Local object key
**/
ApiObject Refs_IsotopeLabel_GetLocalKey(Refs_IsotopeLabel self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.massNumber

Mass number 
of incorporated isotope .
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiInteger Refs_IsotopeLabel_GetMassNumber(Refs_IsotopeLabel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMassNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getMassNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getMassNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiSet Refs_IsotopeLabel_GetMolResidues(Refs_IsotopeLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResidues");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getMolResidues' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiString Refs_IsotopeLabel_GetPackageName(Refs_IsotopeLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getPackageName' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiString Refs_IsotopeLabel_GetPackageShortName(Refs_IsotopeLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.parent

link to parent 
object - synonym for specificLabelGroup
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
Refs_SpecificLabelGroup Refs_IsotopeLabel_GetParent(Refs_IsotopeLabel self)
{
  
  Refs_SpecificLabelGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getParent' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiString Refs_IsotopeLabel_GetQualifiedName(Refs_IsotopeLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
Impl_MemopsRoot Refs_IsotopeLabel_GetRoot(Refs_IsotopeLabel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.IsotopeLabel.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiInteger Refs_IsotopeLabel_GetSerial(Refs_IsotopeLabel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.IsotopeLabel.specificLabelGroup

parent link
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
Refs_SpecificLabelGroup Refs_IsotopeLabel_GetSpecificLabelGroup(Refs_IsotopeLabel self)
{
  
  Refs_SpecificLabelGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpecificLabelGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getSpecificLabelGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getSpecificLabelGroup' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
Impl_TopObject Refs_IsotopeLabel_GetTopObject(Refs_IsotopeLabel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_IsotopeLabel Refs_IsotopeLabel_Init(Refs_SpecificLabelGroup parent, ApiMap attrlinks)
{
  
  return Refs_SpecificLabelGroup_NewIsotopeLabel(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup parent
  @param  char * elementSymbol
  @param  ApiInteger massNumber
  @returns  the new object
**/
Refs_IsotopeLabel Refs_IsotopeLabel_Init_reqd(Refs_SpecificLabelGroup parent, char * elementSymbol, ApiInteger massNumber)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__elementSymbol = ApiString_New(elementSymbol);

  PyDict_SetItemString(attrlinks, "elementSymbol", api__elementSymbol);
  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Refs_IsotopeLabel_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__elementSymbol);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_IsotopeLabel self
  @param  Impl_ApplicationData value
**/
void *Refs_IsotopeLabel_RemoveApplicationData(Refs_IsotopeLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.IsotopeLabel.atomNames

Names of 
atoms that have been isotope substituted. Applies to the residues given 
by self.molResidues, or, if self.molResidues is empty, to the entire 
molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiString value
**/
void *Refs_IsotopeLabel_RemoveAtomName(Refs_IsotopeLabel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'removeAtomName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'removeAtomName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  Mole_MolResidue value
**/
void *Refs_IsotopeLabel_RemoveMolResidue(Refs_IsotopeLabel self, Mole_MolResidue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolResidue");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'removeMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'removeMolResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_IsotopeLabel self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_IsotopeLabel_Set(Refs_IsotopeLabel self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_IsotopeLabel self
  @param  Acco_AccessObject value
**/
void *Refs_IsotopeLabel_SetAccess(Refs_IsotopeLabel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setAccess' is not callable");
  
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
  @param  Refs_IsotopeLabel self
  @param  ApiList values
**/
void *Refs_IsotopeLabel_SetApplicationData(Refs_IsotopeLabel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.IsotopeLabel.atomNames

Names of 
atoms that have been isotope substituted. Applies to the residues given 
by self.molResidues, or, if self.molResidues is empty, to the entire 
molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiList values
**/
void *Refs_IsotopeLabel_SetAtomNames(Refs_IsotopeLabel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setAtomNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setAtomNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.IsotopeLabel.elementSymbol

Element 
symbol for chemical element that is isotope substituted.
  @param  Refs_IsotopeLabel self
  @param  ApiString value
**/
void *Refs_IsotopeLabel_SetElementSymbol(Refs_IsotopeLabel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setElementSymbol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.IsotopeLabel.incorporation

Fraction 
of element that is consists of isotope. Unless given specifically in 
another IsotopeLabel, the rest of the element is assumed to consist of 
the isotopes in their natural abundance.
  @param  Refs_IsotopeLabel self
  @param  ApiFloat value
**/
void *Refs_IsotopeLabel_SetIncorporation(Refs_IsotopeLabel self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIncorporation");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setIncorporation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setIncorporation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.IsotopeLabel.massNumber

Mass number 
of incorporated isotope .
  @param  Refs_IsotopeLabel self
  @param  ApiInteger value
**/
void *Refs_IsotopeLabel_SetMassNumber(Refs_IsotopeLabel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMassNumber");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setMassNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setMassNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @param  ApiSet values
**/
void *Refs_IsotopeLabel_SetMolResidues(Refs_IsotopeLabel self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolResidues");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setMolResidues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.IsotopeLabel.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_IsotopeLabel self
  @param  ApiInteger value
**/
void *Refs_IsotopeLabel_SetSerial(Refs_IsotopeLabel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.IsotopeLabel.molResidues

MolResidues to 
which isotope labeling applies. If not set, the isotope labeling applies 
to all residues in Molecule.
  @param  Refs_IsotopeLabel self
  @returns   the result
**/
ApiList Refs_IsotopeLabel_SortedMolResidues(Refs_IsotopeLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolResidues");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: cannot find method 'sortedMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.IsotopeLabel: method 'sortedMolResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
