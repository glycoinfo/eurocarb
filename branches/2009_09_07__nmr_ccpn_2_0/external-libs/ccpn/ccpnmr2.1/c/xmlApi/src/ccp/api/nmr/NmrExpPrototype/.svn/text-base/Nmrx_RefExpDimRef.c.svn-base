
#include "ccp.h"

/*
  ExpDimRef for prototype experiment. Maps ExpDimRef on ExpStep, from which the information necessary for creating ExpDimRef can be found.
  
  If there is more than one ExpGraph in the NmrExpPrototype, in general each RefExpDim will have an equivalent set of RefExpDimRef for every ExpGraph. Where this is not the case it may be assumed that the 'missing' RefExpDimRefs are 1) identical in content to those present and 2) correspond to the same ExpStep as those given. This convention is used to avoid having several identical RefExpDimRefs just because there are several ExpGraphs.
  
  Note that the serial attribute is used to match Nmr.ExpDimRefs to RefExpDimRefs, so that objects with the same serial correspond to each other. 
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmrx_RefExpDimRef_AddApplicationData(Nmrx_RefExpDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
void *Nmrx_RefExpDimRef_AddCoupledIsotopeCode(Nmrx_RefExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCoupledIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'addCoupledIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'addCoupledIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpStep value
**/
void *Nmrx_RefExpDimRef_AddExpStep(Nmrx_RefExpDimRef self, Nmrx_ExpStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'addExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'addExpStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiFloat value
**/
void *Nmrx_RefExpDimRef_AddValidScalingFactor(Nmrx_RefExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addValidScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'addValidScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'addValidScalingFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean complete
**/
void *Nmrx_RefExpDimRef_CheckAllValid(Nmrx_RefExpDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean complete
**/
void *Nmrx_RefExpDimRef_CheckValid(Nmrx_RefExpDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'checkValid' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExpDimRef_FindAllApplicationData(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval0(Nmrx_RefExpDimRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
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
ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCoupledIsotopes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findAllCoupledIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findAllCoupledIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval0(Nmrx_RefExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindAllCoupledIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindAllCoupledIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindAllCoupledIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindAllCoupledIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
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
ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindAllCoupledIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findAllExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findAllExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval0(Nmrx_RefExpDimRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
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
ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval0(Nmrx_RefExpDimRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
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
Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCoupledIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findFirstCoupledIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findFirstCoupledIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval0(Nmrx_RefExpDimRef self)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindFirstCoupledIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindFirstCoupledIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindFirstCoupledIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindFirstCoupledIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
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
Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindFirstCoupledIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep(Nmrx_RefExpDimRef self, ApiMap conditions)
{
  
  Nmrx_ExpStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'findFirstExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'findFirstExpStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval0(Nmrx_RefExpDimRef self)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_RefExpDimRef_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_RefExpDimRef_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_RefExpDimRef_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_RefExpDimRef_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
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
Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_RefExpDimRef_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_RefExpDimRef_Get(Nmrx_RefExpDimRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Acco_AccessObject Nmrx_RefExpDimRef_GetAccess(Nmrx_RefExpDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getAccess' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Acco_AccessObject Nmrx_RefExpDimRef_GetActiveAccess(Nmrx_RefExpDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_GetApplicationData(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_RefExpDimRef Nmrx_RefExpDimRef_GetByKey(Nmrx_RefExpDimRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_RefExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getByKey' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiString Nmrx_RefExpDimRef_GetClassName(Nmrx_RefExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.constantTime

Is the 
dimension constant time, variable time, or partial (harmonica type)?
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiString Nmrx_RefExpDimRef_GetConstantTime(Nmrx_RefExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstantTime");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getConstantTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getConstantTime' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_GetCoupledIsotopeCodes(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCoupledIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getCoupledIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getCoupledIsotopeCodes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link coupledIsotopes
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiSet Nmrx_RefExpDimRef_GetCoupledIsotopes(Nmrx_RefExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCoupledIsotopes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getCoupledIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getCoupledIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.expMeasurement

ExpMeasurement to 
which the RefExpDimRef applies. The reference may be relevant for one or 
several ExpGraphs.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Nmrx_ExpMeasurement Nmrx_RefExpDimRef_GetExpMeasurement(Nmrx_RefExpDimRef self)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getExpMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiSet Nmrx_RefExpDimRef_GetExpSteps(Nmrx_RefExpDimRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getExpSteps' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_GetFieldNames(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_RefExpDimRef_GetFullKey(Nmrx_RefExpDimRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.groupingId

groupingId 
divides RefExpDimRef from the same parent into groups - all RefExpDimRef 
with the same groupingId belong in the same group. RefExpDimRef from the 
same group can appear on the same peak - RefExpDimRef from different 
groups can not.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiInteger Nmrx_RefExpDimRef_GetGroupingId(Nmrx_RefExpDimRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroupingId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getGroupingId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getGroupingId' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiBoolean Nmrx_RefExpDimRef_GetInConstructor(Nmrx_RefExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiBoolean Nmrx_RefExpDimRef_GetIsDeleted(Nmrx_RefExpDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @returns  Local object key
**/
ApiObject Nmrx_RefExpDimRef_GetLocalKey(Nmrx_RefExpDimRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getLocalKey' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiString Nmrx_RefExpDimRef_GetPackageName(Nmrx_RefExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiString Nmrx_RefExpDimRef_GetPackageShortName(Nmrx_RefExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.parent

link to parent 
object - synonym for refExpDim
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Nmrx_RefExpDim Nmrx_RefExpDimRef_GetParent(Nmrx_RefExpDimRef self)
{
  
  Nmrx_RefExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getParent' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiString Nmrx_RefExpDimRef_GetQualifiedName(Nmrx_RefExpDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.refExpDim

parent link
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Nmrx_RefExpDim Nmrx_RefExpDimRef_GetRefExpDim(Nmrx_RefExpDimRef self)
{
  
  Nmrx_RefExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getRefExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getRefExpDim' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_RefExpDimRef_GetRoot(Nmrx_RefExpDimRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiInteger Nmrx_RefExpDimRef_GetSerial(Nmrx_RefExpDimRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getSerial' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
Impl_TopObject Nmrx_RefExpDimRef_GetTopObject(Nmrx_RefExpDimRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_GetValidScalingFactors(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidScalingFactors");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'getValidScalingFactors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'getValidScalingFactors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_RefExpDimRef Nmrx_RefExpDimRef_Init(Nmrx_RefExpDim parent, ApiMap attrlinks)
{
  
  return Nmrx_RefExpDim_NewRefExpDimRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDim parent
  @param  Nmrx_ExpMeasurement expMeasurement
  @returns  the new object
**/
Nmrx_RefExpDimRef Nmrx_RefExpDimRef_Init_reqd(Nmrx_RefExpDim parent, Nmrx_ExpMeasurement expMeasurement)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expMeasurement", expMeasurement);
  
  obj = Nmrx_RefExpDimRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmrx_RefExpDimRef_RemoveApplicationData(Nmrx_RefExpDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
void *Nmrx_RefExpDimRef_RemoveCoupledIsotopeCode(Nmrx_RefExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCoupledIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'removeCoupledIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'removeCoupledIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpStep value
**/
void *Nmrx_RefExpDimRef_RemoveExpStep(Nmrx_RefExpDimRef self, Nmrx_ExpStep value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'removeExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'removeExpStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List of valid 
scaling factors for RefExpDimRef. If empty, many different factors are 
allowed. The position of a peak is calculated as the sum over ExpDimRef 
scaling factors times position values (e.g. position in ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiFloat value
**/
void *Nmrx_RefExpDimRef_RemoveValidScalingFactor(Nmrx_RefExpDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeValidScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'removeValidScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'removeValidScalingFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_RefExpDimRef_Set(Nmrx_RefExpDimRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExpDimRef self
  @param  Acco_AccessObject value
**/
void *Nmrx_RefExpDimRef_SetAccess(Nmrx_RefExpDimRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setAccess' is not callable");
  
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
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
void *Nmrx_RefExpDimRef_SetApplicationData(Nmrx_RefExpDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.constantTime

Is the 
dimension constant time, variable time, or partial (harmonica type)?
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
void *Nmrx_RefExpDimRef_SetConstantTime(Nmrx_RefExpDimRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstantTime");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setConstantTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setConstantTime' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
void *Nmrx_RefExpDimRef_SetCoupledIsotopeCodes(Nmrx_RefExpDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCoupledIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setCoupledIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setCoupledIsotopeCodes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.expMeasurement

ExpMeasurement to 
which the RefExpDimRef applies. The reference may be relevant for one or 
several ExpGraphs.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpMeasurement value
**/
void *Nmrx_RefExpDimRef_SetExpMeasurement(Nmrx_RefExpDimRef self, Nmrx_ExpMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setExpMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiSet values
**/
void *Nmrx_RefExpDimRef_SetExpSteps(Nmrx_RefExpDimRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setExpSteps' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.groupingId

groupingId 
divides RefExpDimRef from the same parent into groups - all RefExpDimRef 
with the same groupingId belong in the same group. RefExpDimRef from the 
same group can appear on the same peak - RefExpDimRef from different 
groups can not.
  @param  Nmrx_RefExpDimRef self
  @param  ApiInteger value
**/
void *Nmrx_RefExpDimRef_SetGroupingId(Nmrx_RefExpDimRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroupingId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setGroupingId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setGroupingId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExpDimRef self
  @param  ApiInteger value
**/
void *Nmrx_RefExpDimRef_SetSerial(Nmrx_RefExpDimRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
void *Nmrx_RefExpDimRef_SetValidScalingFactors(Nmrx_RefExpDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValidScalingFactors");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'setValidScalingFactors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'setValidScalingFactors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_SortedCoupledIsotopes(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCoupledIsotopes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'sortedCoupledIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'sortedCoupledIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
ApiList Nmrx_RefExpDimRef_SortedExpSteps(Nmrx_RefExpDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: cannot find method 'sortedExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.RefExpDimRef: method 'sortedExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
