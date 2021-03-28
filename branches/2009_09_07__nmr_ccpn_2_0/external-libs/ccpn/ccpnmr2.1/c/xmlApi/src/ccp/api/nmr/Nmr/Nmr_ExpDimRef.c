
#include "ccp.h"

/*
  This class describes the referencing for values that can appear on an axis in an NMR spectrum. There may be several ExpDimRef for each dim, either because the experiment is the sum of several experiments with differently referenced axes (e.g. 15N/13C HSQC), or because the actual peak position is a linear combination of different contributions with different referencings (J-coupling, reduced-dimensionality, or projection experiments).The kinds of linear combiantion possible are determined by the dimensionScalings;whether the experiment is a sum of several experiments is determined by the groupingNumber. Note that ExpDimRefs are only relevant to an AbstractDataDim if they are linked with a DimensionScaling
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpDimRef_AddApplicationData(Nmr_ExpDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_AddIsotopeCode(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'addIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'addIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean complete
**/
void *Nmr_ExpDimRef_CheckAllValid(Nmr_ExpDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean complete
**/
void *Nmr_ExpDimRef_CheckValid(Nmr_ExpDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'checkValid' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllApplicationData(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval0(Nmr_ExpDimRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
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
ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval0(Nmr_ExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
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
ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDerivedTo(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval0(Nmr_ExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
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
ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval0(Nmr_ExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
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
ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpDimRefMappings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllExpDimRefMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllExpDimRefMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval0(Nmr_ExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllExpDimRefMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllExpDimRefMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllExpDimRefMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllExpDimRefMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
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
ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllExpDimRefMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpTransfers(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval0(Nmr_ExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
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
ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllIsotopes(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findAllIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findAllIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval0(Nmr_ExpDimRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
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
ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval0(Nmr_ExpDimRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
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
Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstDataDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval0(Nmr_ExpDimRef self)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
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
Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Nmr_ExpDimRefMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval0(Nmr_ExpDimRef self)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
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
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstDimensionScaling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval0(Nmr_ExpDimRef self)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
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
Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Nmr_ExpDimRefMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpDimRefMapping");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstExpDimRefMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstExpDimRefMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval0(Nmr_ExpDimRef self)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstExpDimRefMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstExpDimRefMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstExpDimRefMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstExpDimRefMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
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
Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstExpDimRefMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Nmr_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval0(Nmr_ExpDimRef self)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
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
Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope(Nmr_ExpDimRef self, ApiMap conditions)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'findFirstIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'findFirstIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval0(Nmr_ExpDimRef self)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpDimRef_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpDimRef_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpDimRef_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpDimRef_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
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
Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpDimRef_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ExpDimRef_Get(Nmr_ExpDimRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpDimRef_GetAccess(Nmr_ExpDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getAccess' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpDimRef_GetActiveAccess(Nmr_ExpDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_GetApplicationData(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.baseFrequency

The nominal base frequency 
in MHz for the measured frequency. Instrument parameter. The actual 
carrier frequency (sf) can be seen as the sum of a base frequency (this 
attribute) and a relative offset (O1 in Bruker terms - not stored in 
this data model but equal to (sf minus baseFrequency) in Hz). Not 
relevant in all cases (see sf attribute). Should be left blank where not 
relevant, but set equal to sf where no separate baseFrequency is known.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetBaseFrequency(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBaseFrequency");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getBaseFrequency'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getBaseFrequency' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ExpDimRef Nmr_ExpDimRef_GetByKey(Nmr_ExpDimRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getByKey' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetClassName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.constantTimePeriod

Total constant-time 
period available; the period over which the relevant coupling constants 
are active rather than the maximum value of the increment (which can be 
calculated from other data). Alternative formulation: the time between 
90 deg pulses, ignoring 180 deg pulses (normal, shaped, or composite). 
Note that this parameter serves for nomal NMR experiments, but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetConstantTimePeriod(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstantTimePeriod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getConstantTimePeriod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getConstantTimePeriod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding to 
ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiSet Nmr_ExpDimRef_GetDataDimRefs(Nmr_ExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiSet Nmr_ExpDimRef_GetDerivedTo(Nmr_ExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiSet Nmr_ExpDimRef_GetDimensionScalings(Nmr_ExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.displayName

Short string e.g. 'H1',' H', 
'CA', 'Ca-1' used for display annotation, for naming decomposition 
shapes, etc. Should be unique within an experiment, but it is up to the 
user to enforce the constraint
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetDisplayName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDisplayName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getDisplayName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getDisplayName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expDim

parent link
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Nmr_ExpDim Nmr_ExpDimRef_GetExpDim(Nmr_ExpDimRef self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getExpDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiSet Nmr_ExpDimRef_GetExpDimRefMappings(Nmr_ExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDimRefMappings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getExpDimRefMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getExpDimRefMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiSet Nmr_ExpDimRef_GetExpTransfers(Nmr_ExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getExpTransfers' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_GetFieldNames(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ExpDimRef_GetFullKey(Nmr_ExpDimRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.groupingNumber

Divides ExpDimRefs 
belonging to a given ExpDim into mutually exclusive groupings. If a 
PeakDim is connected to several ExpDimRefs (via DataDimRefs and possible 
PeakDimComponents), the ExpDimRefs must all have teh same 
groupingNumber. Only wexperiments that have different kinds of peaks on 
the same axis will use more than one groupingNumber. The only practical 
example seems to be H[{C|N}]_H.NOESY - a 13C HSQC-NOESY and 15N 
HSQC-NOESY acquired together in a single dataset.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiInteger Nmr_ExpDimRef_GetGroupingNumber(Nmr_ExpDimRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroupingNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getGroupingNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getGroupingNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute hasAliasedFreq
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiBoolean Nmr_ExpDimRef_GetHasAliasedFreq(Nmr_ExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasAliasedFreq");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getHasAliasedFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getHasAliasedFreq' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiBoolean Nmr_ExpDimRef_GetInConstructor(Nmr_ExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isAxisReversed

Set to true if the highest 
value on the axis corresponds to the lowest point number, and to false 
otherwise. Most real cases will have isAxisReversed true, as this is how 
ppm axes behave.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiBoolean Nmr_ExpDimRef_GetIsAxisReversed(Nmr_ExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsAxisReversed");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getIsAxisReversed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getIsAxisReversed' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiBoolean Nmr_ExpDimRef_GetIsDeleted(Nmr_ExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isFolded

Boolean defining whether the 
dimension is folded in the true meaning of the word (default is False, 
which is the case for most experiments in 2003). All regularly sampled 
experiments are in principle aliased (which is a different question).
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiBoolean Nmr_ExpDimRef_GetIsFolded(Nmr_ExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsFolded");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getIsFolded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getIsFolded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_GetIsotopeCodes(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getIsotopeCodes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute Isotopes. NB the same isotope can 
appear multiple times in the result.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_GetIsotopes(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  Local object key
**/
ApiObject Nmr_ExpDimRef_GetLocalKey(Nmr_ExpDimRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.maxAliasedFreq

Describes aliasing - 
maximum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetMaxAliasedFreq(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxAliasedFreq");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getMaxAliasedFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getMaxAliasedFreq' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.measurementType

String enum for 
measurement type of the referenced parameter in this dimension. 
Describes the type of measurementList that would hold values measured on 
this axis. enum would include 'None' for e.g. temperature axes.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetMeasurementType(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getMeasurementType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.minAliasedFreq

Describes aliasing - 
minimum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetMinAliasedFreq(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinAliasedFreq");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getMinAliasedFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getMinAliasedFreq' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.name

Name of the measurement being 
measured by the ExpDimRef. Equivalent to the 
NmrExpPrototype.AtomSite.name, but does not have to be the same. Serves 
for user-specific names.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.nominalRefValue

Reference value in 
ExpDimRef.unit for carrier frequency (or 0.0 for splittings), for use in 
DataDimRef. E.g. 4.7ppm for protons in water. This value describes the 
nominal referencing; actual referencing used may include various 
correction factors, internal referencing etc. and is set in the 
individual DataDimRef. This attribute serves for normal NMR spectra but 
may be irrelevant in other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetNominalRefValue(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNominalRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getNominalRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getNominalRefValue' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetPackageName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetPackageShortName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.parent

link to parent object - synonym 
for expDim
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Nmr_ExpDim Nmr_ExpDimRef_GetParent(Nmr_ExpDimRef self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getParent' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetQualifiedName(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.refExpDimRef

Corresponding ExpDimRef for 
RefExperiment
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Nmrx_RefExpDimRef Nmr_ExpDimRef_GetRefExpDimRef(Nmr_ExpDimRef self)
{
  
  Nmrx_RefExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getRefExpDimRef' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ExpDimRef_GetRoot(Nmr_ExpDimRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiInteger Nmr_ExpDimRef_GetSerial(Nmr_ExpDimRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.sf

Absolute frequency at carrier 
frequency (or at measured frequency 0.0 for splittings) of the spectrum 
in MHz (or dimensionless - see below). Used for conversion between Hz 
and ppm, and for scaling with the magnetic field. By definition 
DataDimRef.valuePerPoint = FreqDataDim.valuePerPoint/ExpDimRef.sf. This 
is also the case for e.g. coupling constant dimensions, where sf then 
becomes a dimensionless scaling factor.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetSf(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getSf' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
Impl_TopObject Nmr_ExpDimRef_GetTopObject(Nmr_ExpDimRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.unit

Unit used for value in DataDimRefs 
(if any). As DataDimRefs are defined only for FreqDataDims this 
attribute is only relevant for dimensions eventually transformed into 
FreqDataDims, essentially dimensions that are eventually Fourier 
Transformed or similar. Unit will be 'ppm' for most standard NMR 
experiments.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiString Nmr_ExpDimRef_GetUnit(Nmr_ExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpDimRef.variableIncrFraction

Describes the 
fraction of the incrementation done by actually incrementing  delays 
rather than by constant time. Defined as (actual time increment)/(total 
increment). Is 0.0 for a pure constant-time experiment and 1.0 for a 
pure variable-time experiment. This parameter serves for normal NMR 
experiments but may be irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiFloat Nmr_ExpDimRef_GetVariableIncrFraction(Nmr_ExpDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVariableIncrFraction");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'getVariableIncrFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'getVariableIncrFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpDimRef Nmr_ExpDimRef_Init(Nmr_ExpDim parent, ApiMap attrlinks)
{
  
  return Nmr_ExpDim_NewExpDimRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim parent
  @param  float sf
  @returns  the new object
**/
Nmr_ExpDimRef Nmr_ExpDimRef_Init_reqd(Nmr_ExpDim parent, float sf)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__sf = ApiFloat_New(sf);

  PyDict_SetItemString(attrlinks, "sf", api__sf);
  
  obj = Nmr_ExpDimRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sf);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_NewExpDimRefMapping(Nmr_ExpDimRef self, ApiMap attrlinks)
{
  
  Nmr_ExpDimRefMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpDimRefMapping");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'newExpDimRefMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'newExpDimRefMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  Nmr_ExpDimRef derivedFrom
  @returns  the new object
**/
Nmr_ExpDimRefMapping Nmr_ExpDimRef_NewExpDimRefMapping_reqd(Nmr_ExpDimRef self, Nmr_ExpDimRef derivedFrom)
{
  
  Nmr_ExpDimRefMapping  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "derivedFrom", derivedFrom);
  
  obj = Nmr_ExpDimRef_NewExpDimRefMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpDimRef_RemoveApplicationData(Nmr_ExpDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_RemoveIsotopeCode(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'removeIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'removeIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ExpDimRef_Set(Nmr_ExpDimRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDimRef self
  @param  Acco_AccessObject value
**/
void *Nmr_ExpDimRef_SetAccess(Nmr_ExpDimRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setAccess' is not callable");
  
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
  @param  Nmr_ExpDimRef self
  @param  ApiList values
**/
void *Nmr_ExpDimRef_SetApplicationData(Nmr_ExpDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.baseFrequency

The nominal base frequency 
in MHz for the measured frequency. Instrument parameter. The actual 
carrier frequency (sf) can be seen as the sum of a base frequency (this 
attribute) and a relative offset (O1 in Bruker terms - not stored in 
this data model but equal to (sf minus baseFrequency) in Hz). Not 
relevant in all cases (see sf attribute). Should be left blank where not 
relevant, but set equal to sf where no separate baseFrequency is known.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetBaseFrequency(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBaseFrequency");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setBaseFrequency'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setBaseFrequency' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.constantTimePeriod

Total constant-time 
period available; the period over which the relevant coupling constants 
are active rather than the maximum value of the increment (which can be 
calculated from other data). Alternative formulation: the time between 
90 deg pulses, ignoring 180 deg pulses (normal, shaped, or composite). 
Note that this parameter serves for nomal NMR experiments, but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetConstantTimePeriod(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstantTimePeriod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setConstantTimePeriod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setConstantTimePeriod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding to 
ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
void *Nmr_ExpDimRef_SetDataDimRefs(Nmr_ExpDimRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setDataDimRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
void *Nmr_ExpDimRef_SetDerivedTo(Nmr_ExpDimRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setDerivedTo' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
void *Nmr_ExpDimRef_SetDimensionScalings(Nmr_ExpDimRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setDimensionScalings' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.displayName

Short string e.g. 'H1',' H', 
'CA', 'Ca-1' used for display annotation, for naming decomposition 
shapes, etc. Should be unique within an experiment, but it is up to the 
user to enforce the constraint
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_SetDisplayName(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDisplayName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setDisplayName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setDisplayName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
void *Nmr_ExpDimRef_SetExpTransfers(Nmr_ExpDimRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setExpTransfers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.groupingNumber

Divides ExpDimRefs 
belonging to a given ExpDim into mutually exclusive groupings. If a 
PeakDim is connected to several ExpDimRefs (via DataDimRefs and possible 
PeakDimComponents), the ExpDimRefs must all have teh same 
groupingNumber. Only wexperiments that have different kinds of peaks on 
the same axis will use more than one groupingNumber. The only practical 
example seems to be H[{C|N}]_H.NOESY - a 13C HSQC-NOESY and 15N 
HSQC-NOESY acquired together in a single dataset.
  @param  Nmr_ExpDimRef self
  @param  ApiInteger value
**/
void *Nmr_ExpDimRef_SetGroupingNumber(Nmr_ExpDimRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroupingNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setGroupingNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setGroupingNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isAxisReversed

Set to true if the highest 
value on the axis corresponds to the lowest point number, and to false 
otherwise. Most real cases will have isAxisReversed true, as this is how 
ppm axes behave.
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean value
**/
void *Nmr_ExpDimRef_SetIsAxisReversed(Nmr_ExpDimRef self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsAxisReversed");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setIsAxisReversed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setIsAxisReversed' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isFolded

Boolean defining whether the 
dimension is folded in the true meaning of the word (default is False, 
which is the case for most experiments in 2003). All regularly sampled 
experiments are in principle aliased (which is a different question).
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean value
**/
void *Nmr_ExpDimRef_SetIsFolded(Nmr_ExpDimRef self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsFolded");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setIsFolded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setIsFolded' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiList values
**/
void *Nmr_ExpDimRef_SetIsotopeCodes(Nmr_ExpDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setIsotopeCodes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.maxAliasedFreq

Describes aliasing - 
maximum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetMaxAliasedFreq(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxAliasedFreq");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setMaxAliasedFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setMaxAliasedFreq' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.measurementType

String enum for 
measurement type of the referenced parameter in this dimension. 
Describes the type of measurementList that would hold values measured on 
this axis. enum would include 'None' for e.g. temperature axes.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_SetMeasurementType(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setMeasurementType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.minAliasedFreq

Describes aliasing - 
minimum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetMinAliasedFreq(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinAliasedFreq");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setMinAliasedFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setMinAliasedFreq' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.name

Name of the measurement being 
measured by the ExpDimRef. Equivalent to the 
NmrExpPrototype.AtomSite.name, but does not have to be the same. Serves 
for user-specific names.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_SetName(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.nominalRefValue

Reference value in 
ExpDimRef.unit for carrier frequency (or 0.0 for splittings), for use in 
DataDimRef. E.g. 4.7ppm for protons in water. This value describes the 
nominal referencing; actual referencing used may include various 
correction factors, internal referencing etc. and is set in the 
individual DataDimRef. This attribute serves for normal NMR spectra but 
may be irrelevant in other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetNominalRefValue(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNominalRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setNominalRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setNominalRefValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.refExpDimRef

Corresponding ExpDimRef for 
RefExperiment
  @param  Nmr_ExpDimRef self
  @param  Nmrx_RefExpDimRef value
**/
void *Nmr_ExpDimRef_SetRefExpDimRef(Nmr_ExpDimRef self, Nmrx_RefExpDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setRefExpDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ExpDimRef self
  @param  ApiInteger value
**/
void *Nmr_ExpDimRef_SetSerial(Nmr_ExpDimRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.sf

Absolute frequency at carrier 
frequency (or at measured frequency 0.0 for splittings) of the spectrum 
in MHz (or dimensionless - see below). Used for conversion between Hz 
and ppm, and for scaling with the magnetic field. By definition 
DataDimRef.valuePerPoint = FreqDataDim.valuePerPoint/ExpDimRef.sf. This 
is also the case for e.g. coupling constant dimensions, where sf then 
becomes a dimensionless scaling factor.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetSf(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setSf' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.unit

Unit used for value in DataDimRefs 
(if any). As DataDimRefs are defined only for FreqDataDims this 
attribute is only relevant for dimensions eventually transformed into 
FreqDataDims, essentially dimensions that are eventually Fourier 
Transformed or similar. Unit will be 'ppm' for most standard NMR 
experiments.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
void *Nmr_ExpDimRef_SetUnit(Nmr_ExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpDimRef.variableIncrFraction

Describes the 
fraction of the incrementation done by actually incrementing  delays 
rather than by constant time. Defined as (actual time increment)/(total 
increment). Is 0.0 for a pure constant-time experiment and 1.0 for a 
pure variable-time experiment. This parameter serves for normal NMR 
experiments but may be irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
void *Nmr_ExpDimRef_SetVariableIncrFraction(Nmr_ExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVariableIncrFraction");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'setVariableIncrFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'setVariableIncrFraction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_SortedDataDimRefs(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'sortedDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'sortedDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_SortedDerivedTo(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'sortedDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'sortedDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_SortedDimensionScalings(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'sortedDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'sortedDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_SortedExpDimRefMappings(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpDimRefMappings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'sortedExpDimRefMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'sortedExpDimRefMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
ApiList Nmr_ExpDimRef_SortedExpTransfers(Nmr_ExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: cannot find method 'sortedExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpDimRef: method 'sortedExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
