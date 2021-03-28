
#include "ccp.h"

/*
  Chain of Molecular System coordinate description.
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  Impl_ApplicationData value
**/
void *Coor_Chain_AddApplicationData(Coor_Chain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  Vald_ChainValidation value
**/
void *Coor_Chain_AddChainValidation(Coor_Chain self, Vald_ChainValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'addChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'addChainValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  ApiBoolean complete
**/
void *Coor_Chain_CheckAllValid(Coor_Chain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  ApiBoolean complete
**/
void *Coor_Chain_CheckValid(Coor_Chain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'checkValid' is not callable");
  
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
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Chain_FindAllApplicationData(Coor_Chain self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Chain_FindAllApplicationData_keyval0(Coor_Chain self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Chain_FindAllApplicationData_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Chain_FindAllApplicationData_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Chain_FindAllApplicationData_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
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
ApiList Coor_Chain_FindAllApplicationData_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllChainValidations(Coor_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findAllChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findAllChainValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllChainValidations_keyval0(Coor_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindAllChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllChainValidations_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindAllChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllChainValidations_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindAllChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllChainValidations_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindAllChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
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
ApiSet Coor_Chain_FindAllChainValidations_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindAllChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllResidues(Coor_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findAllResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findAllResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllResidues_keyval0(Coor_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllResidues_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllResidues_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Chain_FindAllResidues_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
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
ApiSet Coor_Chain_FindAllResidues_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Chain_FindFirstApplicationData(Coor_Chain self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_Chain self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Chain_FindFirstApplicationData_keyval0(Coor_Chain self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Chain_FindFirstApplicationData_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Chain_FindFirstApplicationData_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Chain_FindFirstApplicationData_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
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
Impl_ApplicationData Coor_Chain_FindFirstApplicationData_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ChainValidation Coor_Chain_FindFirstChainValidation(Coor_Chain self, ApiMap conditions)
{
  
  Vald_ChainValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findFirstChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findFirstChainValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
  @returns  the first value that satisfies the conditions 
**/
Vald_ChainValidation Coor_Chain_FindFirstChainValidation_keyval0(Coor_Chain self)
{
  
  Vald_ChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindFirstChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ChainValidation Coor_Chain_FindFirstChainValidation_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  Vald_ChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindFirstChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ChainValidation Coor_Chain_FindFirstChainValidation_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindFirstChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ChainValidation Coor_Chain_FindFirstChainValidation_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindFirstChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Chain.chainValidations

Validation results 
that include Chain
  @param  Coor_Chain self
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
Vald_ChainValidation Coor_Chain_FindFirstChainValidation_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindFirstChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Residue Coor_Chain_FindFirstResidue(Coor_Chain self, ApiMap conditions)
{
  
  Coor_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'findFirstResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'findFirstResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @returns  the first value that satisfies the conditions 
**/
Coor_Residue Coor_Chain_FindFirstResidue_keyval0(Coor_Chain self)
{
  
  Coor_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Residue Coor_Chain_FindFirstResidue_keyval1(Coor_Chain self, char * key, ApiObject value)
{
  
  Coor_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Residue Coor_Chain_FindFirstResidue_keyval2(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Residue Coor_Chain_FindFirstResidue_keyval3(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Chain.residues

child link to 
class Residue
  @param  Coor_Chain self
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
Coor_Residue Coor_Chain_FindFirstResidue_keyval4(Coor_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_Chain_Get(Coor_Chain self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Chain self
  @returns   the result
**/
Acco_AccessObject Coor_Chain_GetAccess(Coor_Chain self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getAccess' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiList Coor_Chain_GetApplicationData(Coor_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_Chain Coor_Chain_GetByKey(Coor_Chain self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Coor_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link 'chain'
  @param  Coor_Chain self
  @returns   the result
**/
Mols_Chain Coor_Chain_GetChain(Coor_Chain self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @returns   the result
**/
ApiSet Coor_Chain_GetChainValidations(Coor_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getChainValidations' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiString Coor_Chain_GetClassName(Coor_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Chain.code

Chain code - key for 
object.
  @param  Coor_Chain self
  @returns   the result
**/
ApiString Coor_Chain_GetCode(Coor_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getCode' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiList Coor_Chain_GetFieldNames(Coor_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_Chain_GetFullKey(Coor_Chain self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getFullKey' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiBoolean Coor_Chain_GetInConstructor(Coor_Chain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getInConstructor' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiBoolean Coor_Chain_GetIsDeleted(Coor_Chain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @returns  Local object key
**/
ApiObject Coor_Chain_GetLocalKey(Coor_Chain self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getLocalKey' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiString Coor_Chain_GetPackageName(Coor_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getPackageName' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiString Coor_Chain_GetPackageShortName(Coor_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Chain.parent

link to parent object - 
synonym for structureEnsemble
  @param  Coor_Chain self
  @returns   the result
**/
Coor_StructureEnsemble Coor_Chain_GetParent(Coor_Chain self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getParent' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
ApiString Coor_Chain_GetQualifiedName(Coor_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Chain.residues

child link to class 
Residue
  @param  Coor_Chain self
  @returns   the result
**/
ApiSet Coor_Chain_GetResidues(Coor_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getResidues' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
Impl_MemopsRoot Coor_Chain_GetRoot(Coor_Chain self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Chain.structureEnsemble

parent link
  @param  Coor_Chain self
  @returns   the result
**/
Coor_StructureEnsemble Coor_Chain_GetStructureEnsemble(Coor_Chain self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getStructureEnsemble' is not callable");
  
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
  @param  Coor_Chain self
  @returns   the result
**/
Impl_TopObject Coor_Chain_GetTopObject(Coor_Chain self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.Chain
  @param  Coor_StructureEnsemble parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Chain Coor_Chain_Init(Coor_StructureEnsemble parent, ApiMap attrlinks)
{
  
  return Coor_StructureEnsemble_NewChain(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.Chain
  @param  Coor_StructureEnsemble parent
  @param  char * code
  @returns  the new object
**/
Coor_Chain Coor_Chain_Init_reqd(Coor_StructureEnsemble parent, char * code)
{
  
  Coor_Chain  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  
  obj = Coor_Chain_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Residue
  @param  Coor_Chain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Residue Coor_Chain_NewResidue(Coor_Chain self, ApiMap attrlinks)
{
  
  Coor_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'newResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'newResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Residue
  @param  Coor_Chain self
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
Coor_Residue Coor_Chain_NewResidue_reqd(Coor_Chain self, ApiInteger seqCode, ApiInteger seqId)
{
  
  Coor_Residue  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  PyDict_SetItemString(attrlinks, "seqId", seqId);
  
  obj = Coor_Chain_NewResidue(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Chain self
  @param  Impl_ApplicationData value
**/
void *Coor_Chain_RemoveApplicationData(Coor_Chain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  Vald_ChainValidation value
**/
void *Coor_Chain_RemoveChainValidation(Coor_Chain self, Vald_ChainValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'removeChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'removeChainValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.Chain
  @param  Coor_Chain self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_Chain_Set(Coor_Chain self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Chain self
  @param  Acco_AccessObject value
**/
void *Coor_Chain_SetAccess(Coor_Chain self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'setAccess' is not callable");
  
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
  @param  Coor_Chain self
  @param  ApiList values
**/
void *Coor_Chain_SetApplicationData(Coor_Chain self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @param  ApiSet values
**/
void *Coor_Chain_SetChainValidations(Coor_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'setChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'setChainValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Chain.code

Chain code - key for 
object.
  @param  Coor_Chain self
  @param  ApiString value
**/
void *Coor_Chain_SetCode(Coor_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Chain.chainValidations

Validation 
results that include Chain
  @param  Coor_Chain self
  @returns   the result
**/
ApiList Coor_Chain_SortedChainValidations(Coor_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'sortedChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'sortedChainValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Chain.residues

child link to class 
Residue
  @param  Coor_Chain self
  @returns   the result
**/
ApiList Coor_Chain_SortedResidues(Coor_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Chain: cannot find method 'sortedResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Chain: method 'sortedResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
