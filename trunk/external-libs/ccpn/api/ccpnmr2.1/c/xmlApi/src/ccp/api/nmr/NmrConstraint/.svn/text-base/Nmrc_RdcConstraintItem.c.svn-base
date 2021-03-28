
#include "ccp.h"

/*
  Pair of Resonances involved in a reduced dipolarcoupling restraint
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_RdcConstraintItem_AddApplicationData(Nmrc_RdcConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_RdcConstraintItem_AddOrderedResonance(Nmrc_RdcConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'addOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'addOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_RdcConstraintItem_CheckAllValid(Nmrc_RdcConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_RdcConstraintItem_CheckValid(Nmrc_RdcConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'checkValid' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData_keyval0(Nmrc_RdcConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
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
ApiList Nmrc_RdcConstraintItem_FindAllApplicationData_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findAllOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findAllOrderedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_RdcConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
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
ApiList Nmrc_RdcConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_RdcConstraintItem_FindAllResonances(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_RdcConstraintItem_FindAllResonances_keyval0(Nmrc_RdcConstraintItem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_RdcConstraintItem_FindAllResonances_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_RdcConstraintItem_FindAllResonances_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_RdcConstraintItem_FindAllResonances_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
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
ApiSet Nmrc_RdcConstraintItem_FindAllResonances_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData_keyval0(Nmrc_RdcConstraintItem self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
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
Impl_ApplicationData Nmrc_RdcConstraintItem_FindFirstApplicationData_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findFirstOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findFirstOrderedResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_RdcConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
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
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance(Nmrc_RdcConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance_keyval0(Nmrc_RdcConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_RdcConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance_keyval1(Nmrc_RdcConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_RdcConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance_keyval2(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_RdcConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance_keyval3(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_RdcConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
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
Nmrc_FixedResonance Nmrc_RdcConstraintItem_FindFirstResonance_keyval4(Nmrc_RdcConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_RdcConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_RdcConstraintItem_Get(Nmrc_RdcConstraintItem self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_RdcConstraintItem_GetAccess(Nmrc_RdcConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getAccess' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_RdcConstraintItem_GetActiveAccess(Nmrc_RdcConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiList Nmrc_RdcConstraintItem_GetApplicationData(Nmrc_RdcConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_RdcConstraintItem Nmrc_RdcConstraintItem_GetByKey(Nmrc_RdcConstraintItem self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_RdcConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getByKey' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiString Nmrc_RdcConstraintItem_GetClassName(Nmrc_RdcConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.RdcConstraintItem.constraint

parent link
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Nmrc_RdcConstraint Nmrc_RdcConstraintItem_GetConstraint(Nmrc_RdcConstraintItem self)
{
  
  Nmrc_RdcConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getConstraint' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiList Nmrc_RdcConstraintItem_GetFieldNames(Nmrc_RdcConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Nmrc_FixedResonance Nmrc_RdcConstraintItem_GetFirstResonance(Nmrc_RdcConstraintItem self)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_RdcConstraintItem_GetFullKey(Nmrc_RdcConstraintItem self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_RdcConstraintItem_GetInConstructor(Nmrc_RdcConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_RdcConstraintItem_GetIsDeleted(Nmrc_RdcConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @returns  Local object key
**/
ApiObject Nmrc_RdcConstraintItem_GetLocalKey(Nmrc_RdcConstraintItem self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiList Nmrc_RdcConstraintItem_GetOrderedResonances(Nmrc_RdcConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getOrderedResonances' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiString Nmrc_RdcConstraintItem_GetPackageName(Nmrc_RdcConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiString Nmrc_RdcConstraintItem_GetPackageShortName(Nmrc_RdcConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.RdcConstraintItem.parent

link to parent 
object - synonym for constraint
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Nmrc_RdcConstraint Nmrc_RdcConstraintItem_GetParent(Nmrc_RdcConstraintItem self)
{
  
  Nmrc_RdcConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getParent' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiString Nmrc_RdcConstraintItem_GetQualifiedName(Nmrc_RdcConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiSet Nmrc_RdcConstraintItem_GetResonances(Nmrc_RdcConstraintItem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getResonances' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_RdcConstraintItem_GetRoot(Nmrc_RdcConstraintItem self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getRoot' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
Impl_TopObject Nmrc_RdcConstraintItem_GetTopObject(Nmrc_RdcConstraintItem self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_RdcConstraintItem Nmrc_RdcConstraintItem_Init(Nmrc_RdcConstraint parent, ApiMap attrlinks)
{
  
  return Nmrc_RdcConstraint_NewRdcConstraintItem(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraint parent
  @param  ApiSet resonances
  @returns  the new object
**/
Nmrc_RdcConstraintItem Nmrc_RdcConstraintItem_Init_reqd(Nmrc_RdcConstraint parent, ApiSet resonances)
{
  
  Nmrc_RdcConstraintItem  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmrc_RdcConstraintItem_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_RdcConstraintItem_RemoveApplicationData(Nmrc_RdcConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_RdcConstraintItem_RemoveOrderedResonance(Nmrc_RdcConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'removeOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'removeOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.RdcConstraintItem
  @param  Nmrc_RdcConstraintItem self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_RdcConstraintItem_Set(Nmrc_RdcConstraintItem self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_RdcConstraintItem self
  @param  Acco_AccessObject value
**/
void *Nmrc_RdcConstraintItem_SetAccess(Nmrc_RdcConstraintItem self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'setAccess' is not callable");
  
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
  @param  Nmrc_RdcConstraintItem self
  @param  ApiList values
**/
void *Nmrc_RdcConstraintItem_SetApplicationData(Nmrc_RdcConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_RdcConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_RdcConstraintItem_SetFirstResonance(Nmrc_RdcConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'setFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'setFirstResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_RdcConstraintItem self
  @param  ApiList values
**/
void *Nmrc_RdcConstraintItem_SetOrderedResonances(Nmrc_RdcConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'setOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'setOrderedResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @param  ApiSet values
**/
void *Nmrc_RdcConstraintItem_SetResonances(Nmrc_RdcConstraintItem self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair 
of resonances constrained in the PairWiseConstraint
  @param  Nmrc_RdcConstraintItem self
  @returns   the result
**/
ApiList Nmrc_RdcConstraintItem_SortedResonances(Nmrc_RdcConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.RdcConstraintItem: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
