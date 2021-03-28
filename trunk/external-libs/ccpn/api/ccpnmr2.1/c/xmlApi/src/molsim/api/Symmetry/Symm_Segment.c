
#include "ccp.h"

/*
  Contiguous stretch of residues that enters into symmetry operation
*/

/* package molsim.api.Symmetry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  Impl_ApplicationData value
**/
void *Symm_Segment_AddApplicationData(Symm_Segment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean complete
**/
void *Symm_Segment_CheckAllValid(Symm_Segment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean complete
**/
void *Symm_Segment_CheckValid(Symm_Segment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'checkValid' is not callable");
  
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
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllApplicationData(Symm_Segment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'findAllApplicationData' is not callable");
  
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
  @param  Symm_Segment self
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllApplicationData_keyval0(Symm_Segment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Segment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllApplicationData_keyval1(Symm_Segment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Segment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllApplicationData_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Segment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllApplicationData_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Segment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
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
ApiList Symm_Segment_FindAllApplicationData_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Segment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllResidues(Symm_Segment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidues");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'findAllResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'findAllResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllResidues_keyval0(Symm_Segment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Segment_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllResidues_keyval1(Symm_Segment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Segment_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllResidues_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Segment_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Segment_FindAllResidues_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Segment_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
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
ApiList Symm_Segment_FindAllResidues_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Segment_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Segment_FindFirstApplicationData(Symm_Segment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Symm_Segment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval0(Symm_Segment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Segment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval1(Symm_Segment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Segment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Segment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Segment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
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
Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Segment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Symm_Segment_FindFirstResidue(Symm_Segment self, ApiMap conditions)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidue");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'findFirstResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'findFirstResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Symm_Segment_FindFirstResidue_keyval0(Symm_Segment self)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Segment_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Symm_Segment_FindFirstResidue_keyval1(Symm_Segment self, char * key, ApiObject value)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Segment_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Symm_Segment_FindFirstResidue_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Segment_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Symm_Segment_FindFirstResidue_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Segment_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
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
Mols_Residue Symm_Segment_FindFirstResidue_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Segment_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Symm_Segment_Get(Symm_Segment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Segment self
  @returns   the result
**/
Acco_AccessObject Symm_Segment_GetAccess(Symm_Segment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getAccess' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
Acco_AccessObject Symm_Segment_GetActiveAccess(Symm_Segment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getActiveAccess' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiList Symm_Segment_GetApplicationData(Symm_Segment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Symm_Segment Symm_Segment_GetByKey(Symm_Segment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Symm_Segment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Segment.chainCode

chainCode for chain that 
segment belongs to. Part of class key
  @param  Symm_Segment self
  @returns   the result
**/
ApiString Symm_Segment_GetChainCode(Symm_Segment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainCode");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getChainCode' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiString Symm_Segment_GetClassName(Symm_Segment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getClassName' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiList Symm_Segment_GetFieldNames(Symm_Segment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Segment.firstSeqId

seqId of first residue in 
segment. Part of class key
  @param  Symm_Segment self
  @returns   the result
**/
ApiInteger Symm_Segment_GetFirstSeqId(Symm_Segment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstSeqId");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getFirstSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getFirstSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Symm_Segment_GetFullKey(Symm_Segment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getFullKey' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiBoolean Symm_Segment_GetInConstructor(Symm_Segment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getInConstructor' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiBoolean Symm_Segment_GetIsDeleted(Symm_Segment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @returns  Local object key
**/
ApiObject Symm_Segment_GetLocalKey(Symm_Segment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getLocalKey' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiString Symm_Segment_GetPackageName(Symm_Segment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getPackageName' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiString Symm_Segment_GetPackageShortName(Symm_Segment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Segment.parent

link to parent object - synonym 
for symmetry
  @param  Symm_Segment self
  @returns   the result
**/
Symm_Symmetry Symm_Segment_GetParent(Symm_Segment self)
{
  
  Symm_Symmetry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getParent' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
ApiString Symm_Segment_GetQualifiedName(Symm_Segment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link residues
  @param  Symm_Segment self
  @returns   the result
**/
ApiList Symm_Segment_GetResidues(Symm_Segment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidues");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getResidues' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
Impl_MemopsRoot Symm_Segment_GetRoot(Symm_Segment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Segment.symmetry

parent link
  @param  Symm_Segment self
  @returns   the result
**/
Symm_Symmetry Symm_Segment_GetSymmetry(Symm_Segment self)
{
  
  Symm_Symmetry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymmetry");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getSymmetry'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getSymmetry' is not callable");
  
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
  @param  Symm_Segment self
  @returns   the result
**/
Impl_TopObject Symm_Segment_GetTopObject(Symm_Segment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.Symmetry.Segment
  @param  Symm_Symmetry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_Segment Symm_Segment_Init(Symm_Symmetry parent, ApiMap attrlinks)
{
  
  return Symm_Symmetry_NewSegment(parent, attrlinks);
}

/**
  Constructor for molsim.Symmetry.Segment
  @param  Symm_Symmetry parent
  @param  char * chainCode
  @param  ApiInteger firstSeqId
  @returns  the new object
**/
Symm_Segment Symm_Segment_Init_reqd(Symm_Symmetry parent, char * chainCode, ApiInteger firstSeqId)
{
  
  Symm_Segment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "firstSeqId", firstSeqId);
  
  obj = Symm_Segment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  Impl_ApplicationData value
**/
void *Symm_Segment_RemoveApplicationData(Symm_Segment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Symm_Segment_Set(Symm_Segment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Segment self
  @param  Acco_AccessObject value
**/
void *Symm_Segment_SetAccess(Symm_Segment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'setAccess' is not callable");
  
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
  @param  Symm_Segment self
  @param  ApiList values
**/
void *Symm_Segment_SetApplicationData(Symm_Segment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.Segment.chainCode

chainCode for chain that 
segment belongs to. Part of class key
  @param  Symm_Segment self
  @param  ApiString value
**/
void *Symm_Segment_SetChainCode(Symm_Segment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainCode");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'setChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'setChainCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.Segment.firstSeqId

seqId of first residue in 
segment. Part of class key
  @param  Symm_Segment self
  @param  ApiInteger value
**/
void *Symm_Segment_SetFirstSeqId(Symm_Segment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstSeqId");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Segment: cannot find method 'setFirstSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Segment: method 'setFirstSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
