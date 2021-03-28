
#include "ccp.h"

/*
  Block of molResidues with consecutive serials in a molecule . For linear polymers this is guaranteed to be a connected fragment of the molecule. For other molecules the set of Molresidues selected may or may not be connected, depending on how the molecule was created. MolSeqFragments are disjoint and no residue can be a member of more than one.
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  Mole_Alignment value
**/
void *Mole_MolSeqFragment_AddAlignment(Mole_MolSeqFragment self, Mole_Alignment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAlignment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'addAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'addAlignment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  Impl_ApplicationData value
**/
void *Mole_MolSeqFragment_AddApplicationData(Mole_MolSeqFragment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiBoolean complete
**/
void *Mole_MolSeqFragment_CheckAllValid(Mole_MolSeqFragment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiBoolean complete
**/
void *Mole_MolSeqFragment_CheckValid(Mole_MolSeqFragment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllAlignments(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findAllAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findAllAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllAlignments_keyval0(Mole_MolSeqFragment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllAlignments_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllAlignments_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllAlignments_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
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
ApiSet Mole_MolSeqFragment_FindAllAlignments_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolSeqFragment_FindAllApplicationData(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findAllApplicationData' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolSeqFragment_FindAllApplicationData_keyval0(Mole_MolSeqFragment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolSeqFragment_FindAllApplicationData_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolSeqFragment_FindAllApplicationData_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolSeqFragment_FindAllApplicationData_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
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
ApiList Mole_MolSeqFragment_FindAllApplicationData_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllLimitResidues(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLimitResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findAllLimitResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findAllLimitResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllLimitResidues_keyval0(Mole_MolSeqFragment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindAllLimitResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllLimitResidues_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindAllLimitResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllLimitResidues_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindAllLimitResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolSeqFragment_FindAllLimitResidues_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindAllLimitResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
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
ApiSet Mole_MolSeqFragment_FindAllLimitResidues_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindAllLimitResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  Mole_Alignment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAlignment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findFirstAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findFirstAlignment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment_keyval0(Mole_MolSeqFragment self)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments relevant to 
MolSeqFragment
  @param  Mole_MolSeqFragment self
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
Mole_Alignment Mole_MolSeqFragment_FindFirstAlignment_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData_keyval0(Mole_MolSeqFragment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
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
Impl_ApplicationData Mole_MolSeqFragment_FindFirstApplicationData_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue(Mole_MolSeqFragment self, ApiMap conditions)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLimitResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'findFirstLimitResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'findFirstLimitResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue_keyval0(Mole_MolSeqFragment self)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolSeqFragment_FindFirstLimitResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue_keyval1(Mole_MolSeqFragment self, char * key, ApiObject value)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolSeqFragment_FindFirstLimitResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue_keyval2(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolSeqFragment_FindFirstLimitResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue_keyval3(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolSeqFragment_FindFirstLimitResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
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
Mole_MolResidue Mole_MolSeqFragment_FindFirstLimitResidue_keyval4(Mole_MolSeqFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolSeqFragment_FindFirstLimitResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mole_MolSeqFragment_Get(Mole_MolSeqFragment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Acco_AccessObject Mole_MolSeqFragment_GetAccess(Mole_MolSeqFragment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiSet Mole_MolSeqFragment_GetAlignments(Mole_MolSeqFragment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getAlignments' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiList Mole_MolSeqFragment_GetApplicationData(Mole_MolSeqFragment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mole_MolSeqFragment Mole_MolSeqFragment_GetByKey(Mole_MolSeqFragment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getByKey' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetClassName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getClassName' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiList Mole_MolSeqFragment_GetFieldNames(Mole_MolSeqFragment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mole_MolSeqFragment_GetFullKey(Mole_MolSeqFragment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getFullKey' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiBoolean Mole_MolSeqFragment_GetInConstructor(Mole_MolSeqFragment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getInConstructor' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiBoolean Mole_MolSeqFragment_GetIsDeleted(Mole_MolSeqFragment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiSet Mole_MolSeqFragment_GetLimitResidues(Mole_MolSeqFragment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLimitResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getLimitResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getLimitResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @returns  Local object key
**/
ApiObject Mole_MolSeqFragment_GetLocalKey(Mole_MolSeqFragment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolSeqFragment.molecule

parent link
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Mole_Molecule Mole_MolSeqFragment_GetMolecule(Mole_MolSeqFragment self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolSeqFragment.naturalSource

Natural 
Source that MolSeqFragment refers to.
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Taxo_NaturalSource Mole_MolSeqFragment_GetNaturalSource(Mole_MolSeqFragment self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getNaturalSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute organismName
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetOrganismName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganismName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getOrganismName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getOrganismName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute organismSciName
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetOrganismSciName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganismSciName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getOrganismSciName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getOrganismSciName' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetPackageName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getPackageName' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetPackageShortName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolSeqFragment.parent

link to parent 
object - synonym for molecule
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Mole_Molecule Mole_MolSeqFragment_GetParent(Mole_MolSeqFragment self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getParent' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiString Mole_MolSeqFragment_GetQualifiedName(Mole_MolSeqFragment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getQualifiedName' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Impl_MemopsRoot Mole_MolSeqFragment_GetRoot(Mole_MolSeqFragment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getRoot' is not callable");
  
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
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
Impl_TopObject Mole_MolSeqFragment_GetTopObject(Mole_MolSeqFragment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolSeqFragment Mole_MolSeqFragment_Init(Mole_Molecule parent, ApiMap attrlinks)
{
  
  return Mole_Molecule_NewMolSeqFragment(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule parent
  @param  ApiSet limitResidues
  @returns  the new object
**/
Mole_MolSeqFragment Mole_MolSeqFragment_Init_reqd(Mole_Molecule parent, ApiSet limitResidues)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "limitResidues", limitResidues);
  
  obj = Mole_MolSeqFragment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  Mole_Alignment value
**/
void *Mole_MolSeqFragment_RemoveAlignment(Mole_MolSeqFragment self, Mole_Alignment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAlignment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'removeAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'removeAlignment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolSeqFragment self
  @param  Impl_ApplicationData value
**/
void *Mole_MolSeqFragment_RemoveApplicationData(Mole_MolSeqFragment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mole_MolSeqFragment_Set(Mole_MolSeqFragment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolSeqFragment self
  @param  Acco_AccessObject value
**/
void *Mole_MolSeqFragment_SetAccess(Mole_MolSeqFragment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @param  ApiSet values
**/
void *Mole_MolSeqFragment_SetAlignments(Mole_MolSeqFragment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'setAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'setAlignments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Mole_MolSeqFragment self
  @param  ApiList values
**/
void *Mole_MolSeqFragment_SetApplicationData(Mole_MolSeqFragment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @param  ApiSet values
**/
void *Mole_MolSeqFragment_SetLimitResidues(Mole_MolSeqFragment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLimitResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'setLimitResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'setLimitResidues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolSeqFragment.naturalSource

Natural 
Source that MolSeqFragment refers to.
  @param  Mole_MolSeqFragment self
  @param  Taxo_NaturalSource value
**/
void *Mole_MolSeqFragment_SetNaturalSource(Mole_MolSeqFragment self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'setNaturalSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.MolSeqFragment.alignments

Alignments 
relevant to MolSeqFragment
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiList Mole_MolSeqFragment_SortedAlignments(Mole_MolSeqFragment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'sortedAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'sortedAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.Molecule.MolSeqFragment.limitResidues

MolResidues 
belonging to Polymer Sequence Block.
  @param  Mole_MolSeqFragment self
  @returns   the result
**/
ApiList Mole_MolSeqFragment_SortedLimitResidues(Mole_MolSeqFragment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLimitResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: cannot find method 'sortedLimitResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolSeqFragment: method 'sortedLimitResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
