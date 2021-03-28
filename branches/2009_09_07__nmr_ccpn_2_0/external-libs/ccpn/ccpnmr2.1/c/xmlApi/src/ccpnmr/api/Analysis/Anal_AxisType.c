
#include "ccp.h"

/*
  This determines how spectrum dimensions can be mapped onto a SpectrumWindow.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisType_AddApplicationData(Anal_AxisType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the AxisType
  @param  Anal_AxisType self
  @param  Anal_AxisUnit value
**/
void *Anal_AxisType_AddAxisUnit(Anal_AxisType self, Anal_AxisUnit value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'addAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'addAxisUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  ApiBoolean complete
**/
void *Anal_AxisType_CheckAllValid(Anal_AxisType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  ApiBoolean complete
**/
void *Anal_AxisType_CheckValid(Anal_AxisType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'checkValid' is not callable");
  
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
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllApplicationData(Anal_AxisType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AxisType self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllApplicationData_keyval0(Anal_AxisType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllApplicationData_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllApplicationData_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllApplicationData_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
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
ApiList Anal_AxisType_FindAllApplicationData_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisType_FindAllAxisUnits(Anal_AxisType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findAllAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findAllAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisType_FindAllAxisUnits_keyval0(Anal_AxisType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisType_FindAllAxisUnits_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisType_FindAllAxisUnits_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisType_FindAllAxisUnits_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
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
ApiSet Anal_AxisType_FindAllAxisUnits_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllIsotopes(Anal_AxisType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findAllIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findAllIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllIsotopes_keyval0(Anal_AxisType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllIsotopes_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllIsotopes_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisType_FindAllIsotopes_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes mapped 
on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
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
ApiList Anal_AxisType_FindAllIsotopes_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData(Anal_AxisType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AxisType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData_keyval0(Anal_AxisType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
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
Impl_ApplicationData Anal_AxisType_FindFirstApplicationData_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit(Anal_AxisType self, ApiMap conditions)
{
  
  Anal_AxisUnit obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findFirstAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findFirstAxisUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit_keyval0(Anal_AxisType self)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
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
Anal_AxisUnit Anal_AxisType_FindFirstAxisUnit_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Anal_AxisType_FindFirstIsotope(Anal_AxisType self, ApiMap conditions)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotope");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'findFirstIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'findFirstIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Anal_AxisType_FindFirstIsotope_keyval0(Anal_AxisType self)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisType_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Anal_AxisType_FindFirstIsotope_keyval1(Anal_AxisType self, char * key, ApiObject value)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisType_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Anal_AxisType_FindFirstIsotope_keyval2(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisType_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Anal_AxisType_FindFirstIsotope_keyval3(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisType_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisType.isotopes

Derived. Isotopes 
mapped on the Axis. NB in the case of e.g coupling constants or multiple 
quantum coherences there may be more than one.
  @param  Anal_AxisType self
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
Chel_Isotope Anal_AxisType_FindFirstIsotope_keyval4(Anal_AxisType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisType_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AxisType_Get(Anal_AxisType self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisType self
  @returns   the result
**/
Acco_AccessObject Anal_AxisType_GetAccess(Anal_AxisType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getAccess' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
Acco_AccessObject Anal_AxisType_GetActiveAccess(Anal_AxisType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.analysisProject

parent link
  @param  Anal_AxisType self
  @returns   the result
**/
Anal_AnalysisProject Anal_AxisType_GetAnalysisProject(Anal_AxisType self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_GetApplicationData(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the AxisType
  @param  Anal_AxisType self
  @returns   the result
**/
ApiSet Anal_AxisType_GetAxisUnits(Anal_AxisType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AxisType Anal_AxisType_GetByKey(Anal_AxisType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AxisType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getByKey' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetClassName(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.diagonalExclusion

The amount (in ppm) 
by which two dimensions with same
axisType must differ by in order to be 
considered as a peak, in peak
finding.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiFloat Anal_AxisType_GetDiagonalExclusion(Anal_AxisType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDiagonalExclusion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getDiagonalExclusion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getDiagonalExclusion' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_GetFieldNames(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AxisType_GetFullKey(Anal_AxisType self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getFullKey' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiBoolean Anal_AxisType_GetInConstructor(Anal_AxisType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiBoolean Anal_AxisType_GetIsDeleted(Anal_AxisType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.isSampled

if true then this type is 
not linear but sampled
  @param  Anal_AxisType self
  @returns   the result
**/
ApiBoolean Anal_AxisType_GetIsSampled(Anal_AxisType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSampled");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getIsSampled'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getIsSampled' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.isotopeCodes

The isotope codes (e.g. 
'13C') which are mapped onto this axis type.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_GetIsotopeCodes(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getIsotopeCodes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link isotopes
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_GetIsotopes(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @returns  Local object key
**/
ApiObject Anal_AxisType_GetLocalKey(Anal_AxisType self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.measurementType

Measurement type.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetMeasurementType(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getMeasurementType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.name

e.g. '1H', '13C', '15N', 'T', 
'Ca', 'CO', 'Hc', ''JHH', 'DQCH', but any word will do.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetName(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.numDecimals

Number of decimal places 
to be shown.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiInteger Anal_AxisType_GetNumDecimals(Anal_AxisType self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumDecimals");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getNumDecimals'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getNumDecimals' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetPackageName(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getPackageName' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetPackageShortName(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.parent

link to parent object - synonym 
for analysisProject
  @param  Anal_AxisType self
  @returns   the result
**/
Anal_AnalysisProject Anal_AxisType_GetParent(Anal_AxisType self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.peakSize

Size of peak symbol in 
appropriate unit.
  @param  Anal_AxisType self
  @returns   the result
**/
ApiFloat Anal_AxisType_GetPeakSize(Anal_AxisType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getPeakSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getPeakSize' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
ApiString Anal_AxisType_GetQualifiedName(Anal_AxisType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisType.region

maximum (or world) region
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_GetRegion(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getRegion' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
Impl_MemopsRoot Anal_AxisType_GetRoot(Anal_AxisType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getRoot' is not callable");
  
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
  @param  Anal_AxisType self
  @returns   the result
**/
Impl_TopObject Anal_AxisType_GetTopObject(Anal_AxisType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AxisType
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisType Anal_AxisType_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewAxisType(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AxisType
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
Anal_AxisType Anal_AxisType_Init_reqd(Anal_AnalysisProject parent, char * name)
{
  
  Anal_AxisType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AxisType_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisType self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisType_RemoveApplicationData(Anal_AxisType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @param  Anal_AxisUnit value
**/
void *Anal_AxisType_RemoveAxisUnit(Anal_AxisType self, Anal_AxisUnit value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'removeAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'removeAxisUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AxisType
  @param  Anal_AxisType self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AxisType_Set(Anal_AxisType self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisType self
  @param  Acco_AccessObject value
**/
void *Anal_AxisType_SetAccess(Anal_AxisType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setAccess' is not callable");
  
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
  @param  Anal_AxisType self
  @param  ApiList values
**/
void *Anal_AxisType_SetApplicationData(Anal_AxisType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the AxisType
  @param  Anal_AxisType self
  @param  ApiSet values
**/
void *Anal_AxisType_SetAxisUnits(Anal_AxisType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setAxisUnits' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.diagonalExclusion

The amount (in ppm) 
by which two dimensions with same
axisType must differ by in order to be 
considered as a peak, in peak
finding.
  @param  Anal_AxisType self
  @param  ApiFloat value
**/
void *Anal_AxisType_SetDiagonalExclusion(Anal_AxisType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDiagonalExclusion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setDiagonalExclusion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setDiagonalExclusion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.isSampled

if true then this type is 
not linear but sampled
  @param  Anal_AxisType self
  @param  ApiBoolean value
**/
void *Anal_AxisType_SetIsSampled(Anal_AxisType self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSampled");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setIsSampled'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setIsSampled' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.isotopeCodes

The isotope codes (e.g. 
'13C') which are mapped onto this axis type.
  @param  Anal_AxisType self
  @param  ApiList values
**/
void *Anal_AxisType_SetIsotopeCodes(Anal_AxisType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCodes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setIsotopeCodes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setIsotopeCodes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.measurementType

Measurement type.
  @param  Anal_AxisType self
  @param  ApiString value
**/
void *Anal_AxisType_SetMeasurementType(Anal_AxisType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setMeasurementType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setMeasurementType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.name

e.g. '1H', '13C', '15N', 'T', 
'Ca', 'CO', 'Hc', ''JHH', 'DQCH', but any word will do.
  @param  Anal_AxisType self
  @param  ApiString value
**/
void *Anal_AxisType_SetName(Anal_AxisType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.numDecimals

Number of decimal places 
to be shown.
  @param  Anal_AxisType self
  @param  ApiInteger value
**/
void *Anal_AxisType_SetNumDecimals(Anal_AxisType self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumDecimals");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setNumDecimals'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setNumDecimals' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.peakSize

Size of peak symbol in 
appropriate unit.
  @param  Anal_AxisType self
  @param  ApiFloat value
**/
void *Anal_AxisType_SetPeakSize(Anal_AxisType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setPeakSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setPeakSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisType.region

maximum (or world) region
  @param  Anal_AxisType self
  @param  ApiList values
**/
void *Anal_AxisType_SetRegion(Anal_AxisType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'setRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'setRegion' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AxisType.axisUnits

the AxisUnit of the 
AxisType
  @param  Anal_AxisType self
  @returns   the result
**/
ApiList Anal_AxisType_SortedAxisUnits(Anal_AxisType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisType: cannot find method 'sortedAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisType: method 'sortedAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
