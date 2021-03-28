
#include "ccp.h"

/*
  ConstraintItem that takes an unordered pair of FixedResonances as its key
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_PairwiseConstraintItem_AddApplicationData(Nmrc_PairwiseConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'addApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_PairwiseConstraintItem_AddOrderedResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'addOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'addOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
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
ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findAllOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findAllOrderedResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
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
ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findAllResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
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
ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
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
Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findFirstOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findFirstOrderedResonance' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
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
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance(Nmrc_PairwiseConstraintItem self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'findFirstResonance' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval0(Nmrc_PairwiseConstraintItem self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
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
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_PairwiseConstraintItem_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_PairwiseConstraintItem_GetAccess(Nmrc_PairwiseConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getAccess' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiList Nmrc_PairwiseConstraintItem_GetApplicationData(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiString Nmrc_PairwiseConstraintItem_GetClassName(Nmrc_PairwiseConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getClassName' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiList Nmrc_PairwiseConstraintItem_GetFieldNames(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getFieldNames' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_GetFirstResonance(Nmrc_PairwiseConstraintItem self)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getFirstResonance' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_PairwiseConstraintItem_GetInConstructor(Nmrc_PairwiseConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_PairwiseConstraintItem_GetIsDeleted(Nmrc_PairwiseConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link orderedResonances
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiList Nmrc_PairwiseConstraintItem_GetOrderedResonances(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getOrderedResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiString Nmrc_PairwiseConstraintItem_GetPackageName(Nmrc_PairwiseConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiString Nmrc_PairwiseConstraintItem_GetPackageShortName(Nmrc_PairwiseConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getPackageShortName' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiString Nmrc_PairwiseConstraintItem_GetQualifiedName(Nmrc_PairwiseConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiSet Nmrc_PairwiseConstraintItem_GetResonances(Nmrc_PairwiseConstraintItem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_PairwiseConstraintItem_GetRoot(Nmrc_PairwiseConstraintItem self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getRoot' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
Impl_TopObject Nmrc_PairwiseConstraintItem_GetTopObject(Nmrc_PairwiseConstraintItem self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_PairwiseConstraintItem_RemoveApplicationData(Nmrc_PairwiseConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'removeApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_PairwiseConstraintItem_RemoveOrderedResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOrderedResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'removeOrderedResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'removeOrderedResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_PairwiseConstraintItem self
  @param  Acco_AccessObject value
**/
void *Nmrc_PairwiseConstraintItem_SetAccess(Nmrc_PairwiseConstraintItem self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'setAccess' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiList values
**/
void *Nmrc_PairwiseConstraintItem_SetApplicationData(Nmrc_PairwiseConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'setApplicationData' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_PairwiseConstraintItem_SetFirstResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'setFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'setFirstResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link orderedResonances
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiList values
**/
void *Nmrc_PairwiseConstraintItem_SetOrderedResonances(Nmrc_PairwiseConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrderedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'setOrderedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'setOrderedResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiSet values
**/
void *Nmrc_PairwiseConstraintItem_SetResonances(Nmrc_PairwiseConstraintItem self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'setResonances' is not callable");
  
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
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
ApiList Nmrc_PairwiseConstraintItem_SortedResonances(Nmrc_PairwiseConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.PairwiseConstraintItem: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
