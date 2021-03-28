
#include "ccp.h"

/*
  Property being measured on a dimension of a multidimensional NMR experiment. Most common are shifts, but coupling constants, multi-quantum magnetisation, time (for relaxation time measurements) and others are possible.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpMeasurement_AddApplicationData(Nmrx_ExpMeasurement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  Nmrx_AtomSite value
**/
void *Nmrx_ExpMeasurement_AddAtomSite(Nmrx_ExpMeasurement self, Nmrx_AtomSite value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'addAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'addAtomSite' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiFloat value
**/
void *Nmrx_ExpMeasurement_AddAtomSiteWeight(Nmrx_ExpMeasurement self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSiteWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'addAtomSiteWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'addAtomSiteWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpMeasurement_CheckAllValid(Nmrx_ExpMeasurement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpMeasurement_CheckValid(Nmrx_ExpMeasurement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'checkValid' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllApplicationData(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval0(Nmrx_ExpMeasurement self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
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
ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllAtomSites(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findAllAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findAllAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval0(Nmrx_ExpMeasurement self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
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
ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findAllExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findAllExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval0(Nmrx_ExpMeasurement self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
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
ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findAllExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findAllExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval0(Nmrx_ExpMeasurement self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
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
ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findAllRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findAllRefExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval0(Nmrx_ExpMeasurement self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
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
ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval0(Nmrx_ExpMeasurement self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
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
Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  Nmrx_AtomSite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findFirstAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findFirstAtomSite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval0(Nmrx_ExpMeasurement self)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
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
Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpGraph");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findFirstExpGraph'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findFirstExpGraph' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval0(Nmrx_ExpMeasurement self)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
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
Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  Nmrx_ExpStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findFirstExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findFirstExpStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval0(Nmrx_ExpMeasurement self)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
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
Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef(Nmrx_ExpMeasurement self, ApiMap conditions)
{
  
  Nmrx_RefExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'findFirstRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'findFirstRefExpDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval0(Nmrx_ExpMeasurement self)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpMeasurement_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpMeasurement_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpMeasurement_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpMeasurement_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
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
Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpMeasurement_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_ExpMeasurement_Get(Nmrx_ExpMeasurement self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Acco_AccessObject Nmrx_ExpMeasurement_GetAccess(Nmrx_ExpMeasurement self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getAccess' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Acco_AccessObject Nmrx_ExpMeasurement_GetActiveAccess(Nmrx_ExpMeasurement self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_GetApplicationData(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_GetAtomSiteWeights(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSiteWeights");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getAtomSiteWeights'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getAtomSiteWeights' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_GetAtomSites(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_ExpMeasurement Nmrx_ExpMeasurement_GetByKey(Nmrx_ExpMeasurement self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getByKey' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiString Nmrx_ExpMeasurement_GetClassName(Nmrx_ExpMeasurement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link expGraphs
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiSet Nmrx_ExpMeasurement_GetExpGraphs(Nmrx_ExpMeasurement self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps where 
ExpMeasurement is being accessed. In a completed NmrExpPrototype all 
ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiSet Nmrx_ExpMeasurement_GetExpSteps(Nmrx_ExpMeasurement self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getExpSteps' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_GetFieldNames(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_ExpMeasurement_GetFullKey(Nmrx_ExpMeasurement self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getFullKey' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiBoolean Nmrx_ExpMeasurement_GetInConstructor(Nmrx_ExpMeasurement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiBoolean Nmrx_ExpMeasurement_GetIsDeleted(Nmrx_ExpMeasurement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @returns  Local object key
**/
ApiObject Nmrx_ExpMeasurement_GetLocalKey(Nmrx_ExpMeasurement self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.measurementType

Property 
being measured. Typically chemical shift, but could be e.g. J-coupling 
or multiple quantum magnetisation.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiString Nmrx_ExpMeasurement_GetMeasurementType(Nmrx_ExpMeasurement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getMeasurementType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.nmrExpPrototype

parent 
link
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_ExpMeasurement_GetNmrExpPrototype(Nmrx_ExpMeasurement self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpPrototype");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getNmrExpPrototype' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiString Nmrx_ExpMeasurement_GetPackageName(Nmrx_ExpMeasurement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiString Nmrx_ExpMeasurement_GetPackageShortName(Nmrx_ExpMeasurement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.parent

link to parent 
object - synonym for nmrExpPrototype
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_ExpMeasurement_GetParent(Nmrx_ExpMeasurement self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getParent' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiString Nmrx_ExpMeasurement_GetQualifiedName(Nmrx_ExpMeasurement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiSet Nmrx_ExpMeasurement_GetRefExpDimRefs(Nmrx_ExpMeasurement self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getRefExpDimRefs' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_ExpMeasurement_GetRoot(Nmrx_ExpMeasurement self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiInteger Nmrx_ExpMeasurement_GetSerial(Nmrx_ExpMeasurement self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getSerial' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
Impl_TopObject Nmrx_ExpMeasurement_GetTopObject(Nmrx_ExpMeasurement self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpMeasurement Nmrx_ExpMeasurement_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks)
{
  
  return Nmrx_NmrExpPrototype_NewExpMeasurement(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype parent
  @returns  the new object
**/
Nmrx_ExpMeasurement Nmrx_ExpMeasurement_Init_reqd(Nmrx_NmrExpPrototype parent)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_ExpMeasurement_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpMeasurement_RemoveApplicationData(Nmrx_ExpMeasurement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  Nmrx_AtomSite value
**/
void *Nmrx_ExpMeasurement_RemoveAtomSite(Nmrx_ExpMeasurement self, Nmrx_AtomSite value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'removeAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'removeAtomSite' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight of 
contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiFloat value
**/
void *Nmrx_ExpMeasurement_RemoveAtomSiteWeight(Nmrx_ExpMeasurement self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSiteWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'removeAtomSiteWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'removeAtomSiteWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_ExpMeasurement_Set(Nmrx_ExpMeasurement self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpMeasurement self
  @param  Acco_AccessObject value
**/
void *Nmrx_ExpMeasurement_SetAccess(Nmrx_ExpMeasurement self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setAccess' is not callable");
  
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
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
void *Nmrx_ExpMeasurement_SetApplicationData(Nmrx_ExpMeasurement self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
void *Nmrx_ExpMeasurement_SetAtomSiteWeights(Nmrx_ExpMeasurement self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSiteWeights");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setAtomSiteWeights'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setAtomSiteWeights' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
void *Nmrx_ExpMeasurement_SetAtomSites(Nmrx_ExpMeasurement self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setAtomSites' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps where 
ExpMeasurement is being accessed. In a completed NmrExpPrototype all 
ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiSet values
**/
void *Nmrx_ExpMeasurement_SetExpSteps(Nmrx_ExpMeasurement self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setExpSteps' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.measurementType

Property 
being measured. Typically chemical shift, but could be e.g. J-coupling 
or multiple quantum magnetisation.
  @param  Nmrx_ExpMeasurement self
  @param  ApiString value
**/
void *Nmrx_ExpMeasurement_SetMeasurementType(Nmrx_ExpMeasurement self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setMeasurementType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiSet values
**/
void *Nmrx_ExpMeasurement_SetRefExpDimRefs(Nmrx_ExpMeasurement self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setRefExpDimRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpMeasurement self
  @param  ApiInteger value
**/
void *Nmrx_ExpMeasurement_SetSerial(Nmrx_ExpMeasurement self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_SortedExpGraphs(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'sortedExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'sortedExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_SortedExpSteps(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'sortedExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'sortedExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
ApiList Nmrx_ExpMeasurement_SortedRefExpDimRefs(Nmrx_ExpMeasurement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: cannot find method 'sortedRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpMeasurement: method 'sortedRefExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
