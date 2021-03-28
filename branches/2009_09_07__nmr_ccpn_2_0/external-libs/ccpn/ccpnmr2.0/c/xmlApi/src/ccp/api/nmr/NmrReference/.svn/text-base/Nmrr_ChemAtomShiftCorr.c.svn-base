
#include "ccp.h"

/*
  Sequence dependent chemical shift correction. The correction is defined as ChemAtomShift.randomCoilValue plus the sum of ChemAtomShiftCorr.value for all relevant ChemAtomShiftCorr. A ChemAtomShiftCorr with e.g. molType='protein', ccpCode='Ala', seqOffset=+1, describes the correction to apply to the atom in the current amino acid (which might be e.g. a Glu)  to correct for the effect of an alanine at relative position +1.
  
  These corrections are specific for a given pair of residue types. The correction for e.g. an Alanine at +1 is mostlly the same for a given atom (e.g. CA) no matter what amino acid it is in. These general corrections are given in the ChemCOmp with ccpCode='Xxx', that serves as an 'Any' residue. Pair-specific corrections are only given if they are differnt from the geneeric ones, or if the current Atom is not present in Xxx.
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemAtomShiftCorr_AddApplicationData(Nmrr_ChemAtomShiftCorr self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemAtomShiftCorr_CheckAllValid(Nmrr_ChemAtomShiftCorr self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemAtomShiftCorr_CheckValid(Nmrr_ChemAtomShiftCorr self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'checkValid' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData(Nmrr_ChemAtomShiftCorr self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval0(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomShiftCorr_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval1(Nmrr_ChemAtomShiftCorr self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomShiftCorr_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval2(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomShiftCorr_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval3(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomShiftCorr_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
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
ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval4(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomShiftCorr_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(Nmrr_ChemAtomShiftCorr self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval0(Nmrr_ChemAtomShiftCorr self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval1(Nmrr_ChemAtomShiftCorr self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval2(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval3(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
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
Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval4(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrr_ChemAtomShiftCorr_Get(Nmrr_ChemAtomShiftCorr self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Acco_AccessObject Nmrr_ChemAtomShiftCorr_GetAccess(Nmrr_ChemAtomShiftCorr self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getAccess' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiList Nmrr_ChemAtomShiftCorr_GetApplicationData(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_GetByKey(Nmrr_ChemAtomShiftCorr self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrr_ChemAtomShiftCorr obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.ccpCode

ccpCode of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetCcpCode(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.chemAtomNmrRef

parent 
link
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemAtomShiftCorr_GetChemAtomNmrRef(Nmrr_ChemAtomShiftCorr self)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getChemAtomNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Chem_ChemComp Nmrr_ChemAtomShiftCorr_GetChemComp(Nmrr_ChemAtomShiftCorr self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getChemComp' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetClassName(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getClassName' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiList Nmrr_ChemAtomShiftCorr_GetFieldNames(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrr_ChemAtomShiftCorr_GetFullKey(Nmrr_ChemAtomShiftCorr self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getFullKey' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiBoolean Nmrr_ChemAtomShiftCorr_GetInConstructor(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getInConstructor' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiBoolean Nmrr_ChemAtomShiftCorr_GetIsDeleted(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  Local object key
**/
ApiObject Nmrr_ChemAtomShiftCorr_GetLocalKey(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.molType

molType of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetMolType(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getMolType' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetPackageName(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getPackageName' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetPackageShortName(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.parent

link to parent 
object - synonym for chemAtomNmrRef
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemAtomShiftCorr_GetParent(Nmrr_ChemAtomShiftCorr self)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getParent' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiString Nmrr_ChemAtomShiftCorr_GetQualifiedName(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_ChemAtomShiftCorr_GetRoot(Nmrr_ChemAtomShiftCorr self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.seqOffset

Sequence 
offset of residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiInteger Nmrr_ChemAtomShiftCorr_GetSeqOffset(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getSeqOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getSeqOffset' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
Impl_TopObject Nmrr_ChemAtomShiftCorr_GetTopObject(Nmrr_ChemAtomShiftCorr self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.value

Value of chemical 
shift sequence correction
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomShiftCorr_GetValue(Nmrr_ChemAtomShiftCorr self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_Init(Nmrr_ChemAtomNmrRef parent, ApiMap attrlinks)
{
  
  return Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef parent
  @param  char * ccpCode
  @param  char * molType
  @param  ApiInteger seqOffset
  @returns  the new object
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_Init_reqd(Nmrr_ChemAtomNmrRef parent, char * ccpCode, char * molType, ApiInteger seqOffset)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "seqOffset", seqOffset);
  
  obj = Nmrr_ChemAtomShiftCorr_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemAtomShiftCorr_RemoveApplicationData(Nmrr_ChemAtomShiftCorr self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrr_ChemAtomShiftCorr_Set(Nmrr_ChemAtomShiftCorr self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Acco_AccessObject value
**/
void *Nmrr_ChemAtomShiftCorr_SetAccess(Nmrr_ChemAtomShiftCorr self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setAccess' is not callable");
  
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
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiList values
**/
void *Nmrr_ChemAtomShiftCorr_SetApplicationData(Nmrr_ChemAtomShiftCorr self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.ccpCode

ccpCode of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString value
**/
void *Nmrr_ChemAtomShiftCorr_SetCcpCode(Nmrr_ChemAtomShiftCorr self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.molType

molType of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString value
**/
void *Nmrr_ChemAtomShiftCorr_SetMolType(Nmrr_ChemAtomShiftCorr self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.seqOffset

Sequence 
offset of residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiInteger value
**/
void *Nmrr_ChemAtomShiftCorr_SetSeqOffset(Nmrr_ChemAtomShiftCorr self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setSeqOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setSeqOffset' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.value

Value of chemical 
shift sequence correction
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomShiftCorr_SetValue(Nmrr_ChemAtomShiftCorr self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomShiftCorr: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
