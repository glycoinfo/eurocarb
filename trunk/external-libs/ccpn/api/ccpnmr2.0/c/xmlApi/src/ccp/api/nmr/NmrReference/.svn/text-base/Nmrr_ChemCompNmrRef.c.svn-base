
#include "ccp.h"

/*
  NMR reference information for a given ChemComp as presented from a given source. 
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemCompNmrRef_AddApplicationData(Nmrr_ChemCompNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemCompNmrRef_CheckAllValid(Nmrr_ChemCompNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemCompNmrRef_CheckValid(Nmrr_ChemCompNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'checkValid' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
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
ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findAllChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findAllChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findAllChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findAllChemCompVarNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
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
Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findFirstChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findFirstChemAtomNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(Nmrr_ChemCompNmrRef self, ApiMap conditions)
{
  
  Nmrr_ChemCompVarNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'findFirstChemCompVarNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'findFirstChemCompVarNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval0(Nmrr_ChemCompNmrRef self)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrr_ChemCompNmrRef_Get(Nmrr_ChemCompNmrRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
Acco_AccessObject Nmrr_ChemCompNmrRef_GetAccess(Nmrr_ChemCompNmrRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getAccess' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompNmrRef_GetApplicationData(Nmrr_ChemCompNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_GetByKey(Nmrr_ChemCompNmrRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child link 
to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemCompNmrRef_GetChemAtomNmrRefs(Nmrr_ChemCompNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child 
link to class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemCompNmrRef_GetChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getChemCompVarNmrRefs' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetClassName(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetDetails(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getDetails' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompNmrRef_GetFieldNames(Nmrr_ChemCompNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrr_ChemCompNmrRef_GetFullKey(Nmrr_ChemCompNmrRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getFullKey' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemCompNmrRef_GetInConstructor(Nmrr_ChemCompNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getInConstructor' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemCompNmrRef_GetIsDeleted(Nmrr_ChemCompNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  Local object key
**/
ApiObject Nmrr_ChemCompNmrRef_GetLocalKey(Nmrr_ChemCompNmrRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.nmrReferenceStore

parent 
link
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
Nmrr_NmrReferenceStore Nmrr_ChemCompNmrRef_GetNmrReferenceStore(Nmrr_ChemCompNmrRef self)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrReferenceStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getNmrReferenceStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getNmrReferenceStore' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetPackageName(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getPackageName' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetPackageShortName(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.parent

link to parent 
object - synonym for nmrReferenceStore
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
Nmrr_NmrReferenceStore Nmrr_ChemCompNmrRef_GetParent(Nmrr_ChemCompNmrRef self)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getParent' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetQualifiedName(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_ChemCompNmrRef_GetRoot(Nmrr_ChemCompNmrRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.sourceName

Name of the 
source for the reference data. Serves as the key for the class. Serves 
to distinguish NMR reference data from different sources, in case 
different programs want to keep their own.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompNmrRef_GetSourceName(Nmrr_ChemCompNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSourceName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getSourceName' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
Impl_TopObject Nmrr_ChemCompNmrRef_GetTopObject(Nmrr_ChemCompNmrRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_Init(Nmrr_NmrReferenceStore parent, ApiMap attrlinks)
{
  
  return Nmrr_NmrReferenceStore_NewChemCompNmrRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore parent
  @param  char * sourceName
  @returns  the new object
**/
Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_Init_reqd(Nmrr_NmrReferenceStore parent, char * sourceName)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Nmrr_ChemCompNmrRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_NewChemAtomNmrRef(Nmrr_ChemCompNmrRef self, ApiMap attrlinks)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'newChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'newChemAtomNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiSet chemCompVarNmrRefs
  @param  char * name
  @returns  the new object
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_NewChemAtomNmrRef_reqd(Nmrr_ChemCompNmrRef self, ApiSet chemCompVarNmrRefs, char * name)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "chemCompVarNmrRefs", chemCompVarNmrRefs);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmrr_ChemCompNmrRef_NewChemAtomNmrRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef(Nmrr_ChemCompNmrRef self, ApiMap attrlinks)
{
  
  Nmrr_ChemCompVarNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompVarNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'newChemCompVarNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'newChemCompVarNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the new object
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef_reqd(Nmrr_ChemCompNmrRef self)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemCompNmrRef_RemoveApplicationData(Nmrr_ChemCompNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrr_ChemCompNmrRef_Set(Nmrr_ChemCompNmrRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompNmrRef self
  @param  Acco_AccessObject value
**/
void *Nmrr_ChemCompNmrRef_SetAccess(Nmrr_ChemCompNmrRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'setAccess' is not callable");
  
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
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiList values
**/
void *Nmrr_ChemCompNmrRef_SetApplicationData(Nmrr_ChemCompNmrRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemCompNmrRef.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString value
**/
void *Nmrr_ChemCompNmrRef_SetDetails(Nmrr_ChemCompNmrRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemCompNmrRef.sourceName

Name of the 
source for the reference data. Serves as the key for the class. Serves 
to distinguish NMR reference data from different sources, in case 
different programs want to keep their own.
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString value
**/
void *Nmrr_ChemCompNmrRef_SetSourceName(Nmrr_ChemCompNmrRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSourceName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'setSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'setSourceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompNmrRef_SortedChemAtomNmrRefs(Nmrr_ChemCompNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'sortedChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'sortedChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child 
link to class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompNmrRef_SortedChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: cannot find method 'sortedChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompNmrRef: method 'sortedChemCompVarNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
