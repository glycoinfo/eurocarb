
#include "ccp.h"

/*
  MolSystem.Residue data for calculations
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  Impl_ApplicationData value
**/
void *Calc_MolResidueData_AddApplicationData(Calc_MolResidueData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used 
for data
  @param  Calc_MolResidueData self
  @param  Mols_Residue value
**/
void *Calc_MolResidueData_AddResidue(Calc_MolResidueData self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'addResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'addResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrCalc.MolResidueData.residueSeqIds

Residue seqIds of 
residues linked to - if empty all residues in chain are used.
  @param  Calc_MolResidueData self
  @param  ApiInteger value
**/
void *Calc_MolResidueData_AddResidueSeqId(Calc_MolResidueData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResidueSeqId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'addResidueSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'addResidueSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  Calc_RunParameter value
**/
void *Calc_MolResidueData_AddRunParameter(Calc_MolResidueData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'addRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'addRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_MolResidueData self
  @param  ApiBoolean complete
**/
void *Calc_MolResidueData_CheckAllValid(Calc_MolResidueData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_MolResidueData self
  @param  ApiBoolean complete
**/
void *Calc_MolResidueData_CheckValid(Calc_MolResidueData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'checkValid' is not callable");
  
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
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_MolResidueData_FindAllApplicationData(Calc_MolResidueData self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findAllApplicationData' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_MolResidueData_FindAllApplicationData_keyval0(Calc_MolResidueData self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_MolResidueData_FindAllApplicationData_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_MolResidueData_FindAllApplicationData_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_MolResidueData_FindAllApplicationData_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
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
ApiList Calc_MolResidueData_FindAllApplicationData_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllResidues(Calc_MolResidueData self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findAllResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findAllResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllResidues_keyval0(Calc_MolResidueData self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllResidues_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllResidues_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllResidues_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
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
ApiSet Calc_MolResidueData_FindAllResidues_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllRunParameters(Calc_MolResidueData self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findAllRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findAllRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllRunParameters_keyval0(Calc_MolResidueData self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllRunParameters_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllRunParameters_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_MolResidueData_FindAllRunParameters_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
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
ApiSet Calc_MolResidueData_FindAllRunParameters_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData(Calc_MolResidueData self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findFirstApplicationData' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData_keyval0(Calc_MolResidueData self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
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
Impl_ApplicationData Calc_MolResidueData_FindFirstApplicationData_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Calc_MolResidueData_FindFirstResidue(Calc_MolResidueData self, ApiMap conditions)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findFirstResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findFirstResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Calc_MolResidueData_FindFirstResidue_keyval0(Calc_MolResidueData self)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Calc_MolResidueData_FindFirstResidue_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Calc_MolResidueData_FindFirstResidue_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Calc_MolResidueData_FindFirstResidue_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues used for 
data
  @param  Calc_MolResidueData self
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
Mols_Residue Calc_MolResidueData_FindFirstResidue_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter(Calc_MolResidueData self, ApiMap conditions)
{
  
  Calc_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'findFirstRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'findFirstRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter_keyval0(Calc_MolResidueData self)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_MolResidueData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter_keyval1(Calc_MolResidueData self, char * key, ApiObject value)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_MolResidueData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter_keyval2(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_MolResidueData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter_keyval3(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_MolResidueData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolResidueData self
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
Calc_RunParameter Calc_MolResidueData_FindFirstRunParameter_keyval4(Calc_MolResidueData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_MolResidueData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_MolResidueData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Calc_MolResidueData_Get(Calc_MolResidueData self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_MolResidueData self
  @returns   the result
**/
Acco_AccessObject Calc_MolResidueData_GetAccess(Calc_MolResidueData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getAccess' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
Acco_AccessObject Calc_MolResidueData_GetActiveAccess(Calc_MolResidueData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getActiveAccess' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiList Calc_MolResidueData_GetApplicationData(Calc_MolResidueData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_MolResidueData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Calc_MolResidueData Calc_MolResidueData_GetByKey(Calc_MolResidueData self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Calc_MolResidueData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chain
  @param  Calc_MolResidueData self
  @returns   the result
**/
Mols_Chain Calc_MolResidueData_GetChain(Calc_MolResidueData self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.MolResidueData.chainCode

Chain code of relevant 
Chain - used in deriving link to Residues
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetChainCode(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getChainCode' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetClassName(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetDetails(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getDetails' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiList Calc_MolResidueData_GetFieldNames(Calc_MolResidueData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getFieldNames' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiBoolean Calc_MolResidueData_GetInConstructor(Calc_MolResidueData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetIoRole(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getIoRole' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiBoolean Calc_MolResidueData_GetIsDeleted(Calc_MolResidueData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link MolSystem
  @param  Calc_MolResidueData self
  @returns   the result
**/
Mols_MolSystem Calc_MolResidueData_GetMolSystem(Calc_MolResidueData self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.MolResidueData.molSystemCode

Molsystem code of 
relevant MolSystem - used in deriving link to Residues
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetMolSystemCode(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getMolSystemCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetName(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getName' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetPackageName(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getPackageName' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetPackageShortName(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_MolResidueData self
  @returns   the result
**/
Calc_Run Calc_MolResidueData_GetParent(Calc_MolResidueData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getParent' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiString Calc_MolResidueData_GetQualifiedName(Calc_MolResidueData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.MolResidueData.residueSeqIds

Residue seqIds of 
residues linked to - if empty all residues in chain are used.
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiList Calc_MolResidueData_GetResidueSeqIds(Calc_MolResidueData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueSeqIds");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getResidueSeqIds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getResidueSeqIds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link residues
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiSet Calc_MolResidueData_GetResidues(Calc_MolResidueData self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getResidues' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
Impl_MemopsRoot Calc_MolResidueData_GetRoot(Calc_MolResidueData self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_MolResidueData self
  @returns   the result
**/
Calc_Run Calc_MolResidueData_GetRun(Calc_MolResidueData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiSet Calc_MolResidueData_GetRunParameters(Calc_MolResidueData self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiInteger Calc_MolResidueData_GetSerial(Calc_MolResidueData self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getSerial' is not callable");
  
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
  @param  Calc_MolResidueData self
  @returns   the result
**/
Impl_TopObject Calc_MolResidueData_GetTopObject(Calc_MolResidueData self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiFloat Calc_MolResidueData_GetWeight(Calc_MolResidueData self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_MolResidueData Calc_MolResidueData_Init(Calc_Run parent, ApiMap attrlinks)
{
  
  return Calc_Run_NewMolResidueData(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run parent
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
Calc_MolResidueData Calc_MolResidueData_Init_reqd(Calc_Run parent, char * chainCode, char * molSystemCode)
{
  
  Calc_MolResidueData  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Calc_MolResidueData_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolResidueData self
  @param  Impl_ApplicationData value
**/
void *Calc_MolResidueData_RemoveApplicationData(Calc_MolResidueData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @param  Mols_Residue value
**/
void *Calc_MolResidueData_RemoveResidue(Calc_MolResidueData self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'removeResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'removeResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrCalc.MolResidueData.residueSeqIds

Residue seqIds 
of residues linked to - if empty all residues in chain are used.
  @param  Calc_MolResidueData self
  @param  ApiInteger value
**/
void *Calc_MolResidueData_RemoveResidueSeqId(Calc_MolResidueData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResidueSeqId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'removeResidueSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'removeResidueSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  Calc_RunParameter value
**/
void *Calc_MolResidueData_RemoveRunParameter(Calc_MolResidueData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'removeRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'removeRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_MolResidueData self
  @param  ApiString name
  @param  ApiObject value
**/
void *Calc_MolResidueData_Set(Calc_MolResidueData self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_MolResidueData self
  @param  Acco_AccessObject value
**/
void *Calc_MolResidueData_SetAccess(Calc_MolResidueData self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setAccess' is not callable");
  
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
  @param  Calc_MolResidueData self
  @param  ApiList values
**/
void *Calc_MolResidueData_SetApplicationData(Calc_MolResidueData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link chain
  @param  Calc_MolResidueData self
  @param  Mols_Chain value
**/
void *Calc_MolResidueData_SetChain(Calc_MolResidueData self, Mols_Chain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setChain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.MolResidueData.chainCode

Chain code of relevant 
Chain - used in deriving link to Residues
  @param  Calc_MolResidueData self
  @param  ApiString value
**/
void *Calc_MolResidueData_SetChainCode(Calc_MolResidueData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setChainCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_MolResidueData self
  @param  ApiString value
**/
void *Calc_MolResidueData_SetDetails(Calc_MolResidueData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_MolResidueData self
  @param  ApiString value
**/
void *Calc_MolResidueData_SetIoRole(Calc_MolResidueData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setIoRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.MolResidueData.molSystemCode

Molsystem code of 
relevant MolSystem - used in deriving link to Residues
  @param  Calc_MolResidueData self
  @param  ApiString value
**/
void *Calc_MolResidueData_SetMolSystemCode(Calc_MolResidueData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystemCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setMolSystemCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_MolResidueData self
  @param  ApiString value
**/
void *Calc_MolResidueData_SetName(Calc_MolResidueData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.MolResidueData.residueSeqIds

Residue seqIds of 
residues linked to - if empty all residues in chain are used.
  @param  Calc_MolResidueData self
  @param  ApiList values
**/
void *Calc_MolResidueData_SetResidueSeqIds(Calc_MolResidueData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueSeqIds");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setResidueSeqIds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setResidueSeqIds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link residues
  @param  Calc_MolResidueData self
  @param  ApiSet values
**/
void *Calc_MolResidueData_SetResidues(Calc_MolResidueData self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setResidues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @param  ApiSet values
**/
void *Calc_MolResidueData_SetRunParameters(Calc_MolResidueData self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setRunParameters' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_MolResidueData self
  @param  ApiInteger value
**/
void *Calc_MolResidueData_SetSerial(Calc_MolResidueData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_MolResidueData self
  @param  ApiFloat value
**/
void *Calc_MolResidueData_SetWeight(Calc_MolResidueData self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.MolResidueData.residues

MolSystem.Residues 
used for data
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiList Calc_MolResidueData_SortedResidues(Calc_MolResidueData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'sortedResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'sortedResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolResidueData self
  @returns   the result
**/
ApiList Calc_MolResidueData_SortedRunParameters(Calc_MolResidueData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: cannot find method 'sortedRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.MolResidueData: method 'sortedRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
