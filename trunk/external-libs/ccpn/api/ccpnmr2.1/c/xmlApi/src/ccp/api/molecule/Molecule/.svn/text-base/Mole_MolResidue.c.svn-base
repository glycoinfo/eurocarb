
#include "ccp.h"

/*
  Monomer/Residue belonging to a Molecule, e.g. in the sequence for Insulin A-chain as such, as opposed to a specific Insulin A-chain molecule with coordinates.
  
  Note that MolResidues can neither be created nor deleted while their parent Molecule is linked to one or more chains. When creating a Molecule all relevant MolResLinkEnds are created automatically.
  Note also that MolResidues can not be deleted, except as a consequence of deleting their molecule.
  
  It is guaranteed that the serials of molResidues form a continuous range, and that all linear polymer type links are between MolResidues with consecutive serials. The Molesidue.serials must start at one. This constraint is not checked (for technical reasons), but it can only be broken if someone has modified the data bypassing the API.
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  Impl_ApplicationData value
**/
void *Mole_MolResidue_AddApplicationData(Mole_MolResidue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  Refs_IsotopeLabel value
**/
void *Mole_MolResidue_AddIsotopeLabel(Mole_MolResidue self, Refs_IsotopeLabel value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIsotopeLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'addIsotopeLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'addIsotopeLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean complete
**/
void *Mole_MolResidue_CheckAllValid(Mole_MolResidue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean complete
**/
void *Mole_MolResidue_CheckValid(Mole_MolResidue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'checkValid' is not callable");
  
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
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResidue_FindAllApplicationData(Mole_MolResidue self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findAllApplicationData' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResidue_FindAllApplicationData_keyval0(Mole_MolResidue self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResidue_FindAllApplicationData_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResidue_FindAllApplicationData_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResidue_FindAllApplicationData_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
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
ApiList Mole_MolResidue_FindAllApplicationData_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllIsotopeLabels(Mole_MolResidue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findAllIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findAllIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval0(Mole_MolResidue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
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
ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolFeatures(Mole_MolResidue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findAllMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findAllMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolFeatures_keyval0(Mole_MolResidue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolFeatures_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolFeatures_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolFeatures_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
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
ApiSet Mole_MolResidue_FindAllMolFeatures_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolResLinkEnds(Mole_MolResidue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findAllMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findAllMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval0(Mole_MolResidue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
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
ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData(Mole_MolResidue self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval0(Mole_MolResidue self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
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
Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel(Mole_MolResidue self, ApiMap conditions)
{
  
  Refs_IsotopeLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotopeLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findFirstIsotopeLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findFirstIsotopeLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval0(Mole_MolResidue self)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
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
Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature(Mole_MolResidue self, ApiMap conditions)
{
  
  Anno_MolFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolFeature");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findFirstMolFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findFirstMolFeature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval0(Mole_MolResidue self)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
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
Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd(Mole_MolResidue self, ApiMap conditions)
{
  
  Mole_MolResLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolResLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'findFirstMolResLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'findFirstMolResLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval0(Mole_MolResidue self)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResidue_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval1(Mole_MolResidue self, char * key, ApiObject value)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResidue_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResidue_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResidue_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
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
Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResidue_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mole_MolResidue_Get(Mole_MolResidue self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResidue self
  @returns   the result
**/
Acco_AccessObject Mole_MolResidue_GetAccess(Mole_MolResidue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getAccess' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
Acco_AccessObject Mole_MolResidue_GetActiveAccess(Mole_MolResidue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getActiveAccess' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiList Mole_MolResidue_GetApplicationData(Mole_MolResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mole_MolResidue Mole_MolResidue_GetByKey(Mole_MolResidue self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute ccpCode
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetCcpCode(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.chemComp

ChemComp that 
describes the type of the MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
Chem_ChemComp Mole_MolResidue_GetChemComp(Mole_MolResidue self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVar
  @param  Mole_MolResidue self
  @returns   the result
**/
Chem_ChemCompVar Mole_MolResidue_GetChemCompVar(Mole_MolResidue self)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetClassName(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.descriptor

ChemComp descriptor 
- part of ChemCompVar key. Describes topological variant (e,g, 
protonation state) of ChemCompVar. For Polymer-type ChemComps (those 
that have 'next' or 'prev' LinkEnds) also describes non-polymer part of 
substitution pattern.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetDescriptor(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getDescriptor' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiList Mole_MolResidue_GetFieldNames(Mole_MolResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mole_MolResidue_GetFullKey(Mole_MolResidue self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getFullKey' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiBoolean Mole_MolResidue_GetInConstructor(Mole_MolResidue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getInConstructor' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiBoolean Mole_MolResidue_GetIsDeleted(Mole_MolResidue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiSet Mole_MolResidue_GetIsotopeLabels(Mole_MolResidue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.linking

Residue linking code. 
For polymers distinguishes between terminal (start), terminal (end) and 
internal residues. For nonpolymers defines substitution pattern. Part of 
key for ChemCompVar. May be modified after sequence definition.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetLinking(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @returns  Local object key
**/
ApiObject Mole_MolResidue_GetLocalKey(Mole_MolResidue self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiSet Mole_MolResidue_GetMolFeatures(Mole_MolResidue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link to 
class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiSet Mole_MolResidue_GetMolResLinkEnds(Mole_MolResidue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.molSeqFragment

MolSeqFragment 
delimited by MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
Mole_MolSeqFragment Mole_MolResidue_GetMolSeqFragment(Mole_MolResidue self)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getMolSeqFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute molType
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetMolType(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.molecule

parent link
  @param  Mole_MolResidue self
  @returns   the result
**/
Mole_Molecule Mole_MolResidue_GetMolecule(Mole_MolResidue self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getMolecule' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetPackageName(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getPackageName' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetPackageShortName(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.parent

link to parent object - 
synonym for molecule
  @param  Mole_MolResidue self
  @returns   the result
**/
Mole_Molecule Mole_MolResidue_GetParent(Mole_MolResidue self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getParent' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetQualifiedName(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getQualifiedName' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
Impl_MemopsRoot Mole_MolResidue_GetRoot(Mole_MolResidue self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.seqCode

The seqCode is the 
residue number given by the user. For linear polymers normally used to 
give the position of the residue in the molecule sequence.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiInteger Mole_MolResidue_GetSeqCode(Mole_MolResidue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getSeqCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.seqInsertCode

Sequence insert 
code - entered by user. Serves to distinguish residues that the user 
prefers to give the same seqCode. Defaults to a single space.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiString Mole_MolResidue_GetSeqInsertCode(Mole_MolResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getSeqInsertCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResidue.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiInteger Mole_MolResidue_GetSerial(Mole_MolResidue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getSerial' is not callable");
  
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
  @param  Mole_MolResidue self
  @returns   the result
**/
Impl_TopObject Mole_MolResidue_GetTopObject(Mole_MolResidue self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolResidue Mole_MolResidue_Init(Mole_Molecule parent, ApiMap attrlinks)
{
  
  return Mole_Molecule_NewMolResidue(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule parent
  @param  Chem_ChemComp chemComp
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @returns  the new object
**/
Mole_MolResidue Mole_MolResidue_Init_reqd(Mole_Molecule parent, Chem_ChemComp chemComp, char * descriptor, char * linking, ApiInteger seqCode)
{
  
  Mole_MolResidue  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "chemComp", chemComp);
  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  
  obj = Mole_MolResidue_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolResLinkEnd Mole_MolResidue_NewMolResLinkEnd(Mole_MolResidue self, ApiMap attrlinks)
{
  
  Mole_MolResLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolResLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'newMolResLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'newMolResLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * linkCode
  @returns  the new object
**/
Mole_MolResLinkEnd Mole_MolResidue_NewMolResLinkEnd_reqd(Mole_MolResidue self, char * linkCode)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkCode = ApiString_New(linkCode);

  PyDict_SetItemString(attrlinks, "linkCode", api__linkCode);
  
  obj = Mole_MolResidue_NewMolResLinkEnd(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  Impl_ApplicationData value
**/
void *Mole_MolResidue_RemoveApplicationData(Mole_MolResidue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  Refs_IsotopeLabel value
**/
void *Mole_MolResidue_RemoveIsotopeLabel(Mole_MolResidue self, Refs_IsotopeLabel value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIsotopeLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'removeIsotopeLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'removeIsotopeLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mole_MolResidue_Set(Mole_MolResidue self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResidue self
  @param  Acco_AccessObject value
**/
void *Mole_MolResidue_SetAccess(Mole_MolResidue self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setAccess' is not callable");
  
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
  @param  Mole_MolResidue self
  @param  ApiList values
**/
void *Mole_MolResidue_SetApplicationData(Mole_MolResidue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.chemComp

ChemComp that 
describes the type of the MolResidue
  @param  Mole_MolResidue self
  @param  Chem_ChemComp value
**/
void *Mole_MolResidue_SetChemComp(Mole_MolResidue self, Chem_ChemComp value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setChemComp' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for settable, derived link chemCompVar. NB needed also for 
backward compatibility with release 1.0b1
  @param  Mole_MolResidue self
  @param  Chem_ChemCompVar value
**/
void *Mole_MolResidue_SetChemCompVar(Mole_MolResidue self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.descriptor

ChemComp descriptor 
- part of ChemCompVar key. Describes topological variant (e,g, 
protonation state) of ChemCompVar. For Polymer-type ChemComps (those 
that have 'next' or 'prev' LinkEnds) also describes non-polymer part of 
substitution pattern.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
void *Mole_MolResidue_SetDescriptor(Mole_MolResidue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiSet values
**/
void *Mole_MolResidue_SetIsotopeLabels(Mole_MolResidue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setIsotopeLabels' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.linking

Residue linking code. 
For polymers distinguishes between terminal (start), terminal (end) and 
internal residues. For nonpolymers defines substitution pattern. Part of 
key for ChemCompVar. May be modified after sequence definition.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
void *Mole_MolResidue_SetLinking(Mole_MolResidue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiSet values
**/
void *Mole_MolResidue_SetMolFeatures(Mole_MolResidue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setMolFeatures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.molSeqFragment

MolSeqFragment 
delimited by MolResidue
  @param  Mole_MolResidue self
  @param  Mole_MolSeqFragment value
**/
void *Mole_MolResidue_SetMolSeqFragment(Mole_MolResidue self, Mole_MolSeqFragment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setMolSeqFragment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.seqCode

The seqCode is the 
residue number given by the user. For linear polymers normally used to 
give the position of the residue in the molecule sequence.
  @param  Mole_MolResidue self
  @param  ApiInteger value
**/
void *Mole_MolResidue_SetSeqCode(Mole_MolResidue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setSeqCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.seqInsertCode

Sequence insert 
code - entered by user. Serves to distinguish residues that the user 
prefers to give the same seqCode. Defaults to a single space.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
void *Mole_MolResidue_SetSeqInsertCode(Mole_MolResidue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setSeqInsertCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResidue.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mole_MolResidue self
  @param  ApiInteger value
**/
void *Mole_MolResidue_SetSerial(Mole_MolResidue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiList Mole_MolResidue_SortedIsotopeLabels(Mole_MolResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'sortedIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'sortedIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiList Mole_MolResidue_SortedMolFeatures(Mole_MolResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'sortedMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'sortedMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns   the result
**/
ApiList Mole_MolResidue_SortedMolResLinkEnds(Mole_MolResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResidue: cannot find method 'sortedMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResidue: method 'sortedMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
