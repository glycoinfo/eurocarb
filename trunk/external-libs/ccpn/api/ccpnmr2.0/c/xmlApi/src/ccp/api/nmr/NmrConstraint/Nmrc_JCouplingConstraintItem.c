
#include "ccp.h"

/*
  Pair of Resonances involved in a J coupling restraint
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_JCouplingConstraintItem_AddApplicationData(Nmrc_JCouplingConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'addApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_JCouplingConstraintItem_AddOrderedResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'addOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'addOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_JCouplingConstraintItem_CheckAllValid(Nmrc_JCouplingConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_JCouplingConstraintItem_CheckValid(Nmrc_JCouplingConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'checkValid' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
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
ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findAllOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findAllOrderedResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
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
ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findAllResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
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
ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
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
Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findFirstOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findFirstOrderedResonance' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
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
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance(Nmrc_JCouplingConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'findFirstResonance' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval0(Nmrc_JCouplingConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
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
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_JCouplingConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_JCouplingConstraintItem_Get(Nmrc_JCouplingConstraintItem self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_JCouplingConstraintItem_GetAccess(Nmrc_JCouplingConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getAccess' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraintItem_GetApplicationData(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_GetByKey(Nmrc_JCouplingConstraintItem self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_JCouplingConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getByKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraintItem_GetClassName(Nmrc_JCouplingConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraintItem.constraint

parent 
link
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintItem_GetConstraint(Nmrc_JCouplingConstraintItem self)
{
  
  Nmrc_JCouplingConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getConstraint' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraintItem_GetFieldNames(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getFieldNames' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_GetFirstResonance(Nmrc_JCouplingConstraintItem self)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_JCouplingConstraintItem_GetFullKey(Nmrc_JCouplingConstraintItem self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_JCouplingConstraintItem_GetInConstructor(Nmrc_JCouplingConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_JCouplingConstraintItem_GetIsDeleted(Nmrc_JCouplingConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @returns  Local object key
**/
ApiObject Nmrc_JCouplingConstraintItem_GetLocalKey(Nmrc_JCouplingConstraintItem self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getLocalKey' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraintItem_GetOrderedResonances(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getOrderedResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraintItem_GetPackageName(Nmrc_JCouplingConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraintItem_GetPackageShortName(Nmrc_JCouplingConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraintItem.parent

link to 
parent object - synonym for constraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintItem_GetParent(Nmrc_JCouplingConstraintItem self)
{
  
  Nmrc_JCouplingConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getParent' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiString Nmrc_JCouplingConstraintItem_GetQualifiedName(Nmrc_JCouplingConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiSet Nmrc_JCouplingConstraintItem_GetResonances(Nmrc_JCouplingConstraintItem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_JCouplingConstraintItem_GetRoot(Nmrc_JCouplingConstraintItem self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getRoot' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
Impl_TopObject Nmrc_JCouplingConstraintItem_GetTopObject(Nmrc_JCouplingConstraintItem self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_Init(Nmrc_JCouplingConstraint parent, ApiMap attrlinks)
{
  
  return Nmrc_JCouplingConstraint_NewJCouplingConstraintItem(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint parent
  @param  ApiSet resonances
  @returns  the new object
**/
Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_Init_reqd(Nmrc_JCouplingConstraint parent, ApiSet resonances)
{
  
  Nmrc_JCouplingConstraintItem  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmrc_JCouplingConstraintItem_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_JCouplingConstraintItem_RemoveApplicationData(Nmrc_JCouplingConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'removeApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_JCouplingConstraintItem_RemoveOrderedResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'removeOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'removeOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_JCouplingConstraintItem_Set(Nmrc_JCouplingConstraintItem self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintItem self
  @param  Acco_AccessObject value
**/
void *Nmrc_JCouplingConstraintItem_SetAccess(Nmrc_JCouplingConstraintItem self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'setAccess' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiList values
**/
void *Nmrc_JCouplingConstraintItem_SetApplicationData(Nmrc_JCouplingConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'setApplicationData' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_JCouplingConstraintItem_SetFirstResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'setFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'setFirstResonance' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiList values
**/
void *Nmrc_JCouplingConstraintItem_SetOrderedResonances(Nmrc_JCouplingConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'setOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'setOrderedResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiSet values
**/
void *Nmrc_JCouplingConstraintItem_SetResonances(Nmrc_JCouplingConstraintItem self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'setResonances' is not callable");
  
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
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
ApiList Nmrc_JCouplingConstraintItem_SortedResonances(Nmrc_JCouplingConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.JCouplingConstraintItem: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
