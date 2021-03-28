
#include "ccp.h"

/*
  Additional assignment component of peak. In many cases (TROSY, reduced-dimensionality experiments, multiplet components), the position of a peak reflects the sum of more than one NMR parameter. In those cases the additional NMR parameters are assigned through PeakDimComponents. E.g. a DQF-COSY multiplet component would have a main contribution from the shift, and one or more PeakDimComponents for the various couplings that contribute to the peak position.
  
  NOTE: To calculate the value corresponding to the PeakDimComponent, you yourself must calculate xPoints, the (signed) number of points that are due to the PeakDimComponent. The desired value is then self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDimComponent_AddApplicationData(Nmr_PeakDimComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_AbstractPeakDimContrib value
**/
void *Nmr_PeakDimComponent_AddPeakDimContrib(Nmr_PeakDimComponent self, Nmr_AbstractPeakDimContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'addPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'addPeakDimContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDimComponent_CheckAllValid(Nmr_PeakDimComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDimComponent_CheckValid(Nmr_PeakDimComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimComponent_FindAllApplicationData(Nmr_PeakDimComponent self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval0(Nmr_PeakDimComponent self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
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
ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs(Nmr_PeakDimComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'findAllPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'findAllPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval0(Nmr_PeakDimComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimComponent_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimComponent_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimComponent_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimComponent_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
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
ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimComponent_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData(Nmr_PeakDimComponent self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval0(Nmr_PeakDimComponent self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
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
Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib(Nmr_PeakDimComponent self, ApiMap conditions)
{
  
  Nmr_AbstractPeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'findFirstPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'findFirstPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval0(Nmr_PeakDimComponent self)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimComponent_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimComponent_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimComponent_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimComponent_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
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
Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimComponent_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakDimComponent_Get(Nmr_PeakDimComponent self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakDimComponent_GetAccess(Nmr_PeakDimComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getAccess' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakDimComponent_GetActiveAccess(Nmr_PeakDimComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.annotation

Descriptive text 
string, designed for annotation of Xpks on graphics displays. Long 
annotations should be avoided.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiString Nmr_PeakDimComponent_GetAnnotation(Nmr_PeakDimComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getAnnotation' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiList Nmr_PeakDimComponent_GetApplicationData(Nmr_PeakDimComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakDimComponent Nmr_PeakDimComponent_GetByKey(Nmr_PeakDimComponent self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakDimComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiString Nmr_PeakDimComponent_GetClassName(Nmr_PeakDimComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.dataDimRef

DataDimRef that 
describes reference and measurement for PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Nmr_DataDimRef Nmr_PeakDimComponent_GetDataDimRef(Nmr_PeakDimComponent self)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getDataDimRef' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiList Nmr_PeakDimComponent_GetFieldNames(Nmr_PeakDimComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PeakDimComponent_GetFullKey(Nmr_PeakDimComponent self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiBoolean Nmr_PeakDimComponent_GetInConstructor(Nmr_PeakDimComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiBoolean Nmr_PeakDimComponent_GetIsDeleted(Nmr_PeakDimComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @returns  Local object key
**/
ApiObject Nmr_PeakDimComponent_GetLocalKey(Nmr_PeakDimComponent self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiString Nmr_PeakDimComponent_GetPackageName(Nmr_PeakDimComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiString Nmr_PeakDimComponent_GetPackageShortName(Nmr_PeakDimComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.parent

link to parent object - 
synonym for peakDim
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Nmr_PeakDim Nmr_PeakDimComponent_GetParent(Nmr_PeakDimComponent self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.peakDim

parent link
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Nmr_PeakDim Nmr_PeakDimComponent_GetPeakDim(Nmr_PeakDimComponent self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiSet Nmr_PeakDimComponent_GetPeakDimContribs(Nmr_PeakDimComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getPeakDimContribs' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiString Nmr_PeakDimComponent_GetQualifiedName(Nmr_PeakDimComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakDimComponent_GetRoot(Nmr_PeakDimComponent self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.scalingFactor

Scaling factor for 
PeakDimComponent. Is multiplied by the value that comes out of the 
dataDimRef to get the actual contribution from this PeakDimComponent to 
the position of the peak. E.g.  a 1D NMR quartet would have 
scalingFactors -3, -1, 1, 3 on its four subpeaks. 

NOTE: To calculate 
the value corresponding to the PeakDimComponent, you yourself must 
calculate xPoints, the (signed) number of points that are due to the 
PeakDimComponent. The desired value is then 
self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiInteger Nmr_PeakDimComponent_GetScalingFactor(Nmr_PeakDimComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getScalingFactor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiInteger Nmr_PeakDimComponent_GetSerial(Nmr_PeakDimComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getSerial' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
Impl_TopObject Nmr_PeakDimComponent_GetTopObject(Nmr_PeakDimComponent self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDimComponent Nmr_PeakDimComponent_Init(Nmr_PeakDim parent, ApiMap attrlinks)
{
  
  return Nmr_PeakDim_NewPeakDimComponent(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim parent
  @returns  the new object
**/
Nmr_PeakDimComponent Nmr_PeakDimComponent_Init_reqd(Nmr_PeakDim parent)
{
  
  Nmr_PeakDimComponent  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PeakDimComponent_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDimComponent_RemoveApplicationData(Nmr_PeakDimComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_AbstractPeakDimContrib value
**/
void *Nmr_PeakDimComponent_RemovePeakDimContrib(Nmr_PeakDimComponent self, Nmr_AbstractPeakDimContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'removePeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'removePeakDimContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakDimComponent_Set(Nmr_PeakDimComponent self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimComponent self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakDimComponent_SetAccess(Nmr_PeakDimComponent self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.annotation

Descriptive text 
string, designed for annotation of Xpks on graphics displays. Long 
annotations should be avoided.
  @param  Nmr_PeakDimComponent self
  @param  ApiString value
**/
void *Nmr_PeakDimComponent_SetAnnotation(Nmr_PeakDimComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setAnnotation' is not callable");
  
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
  @param  Nmr_PeakDimComponent self
  @param  ApiList values
**/
void *Nmr_PeakDimComponent_SetApplicationData(Nmr_PeakDimComponent self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.dataDimRef

DataDimRef that 
describes reference and measurement for PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_DataDimRef value
**/
void *Nmr_PeakDimComponent_SetDataDimRef(Nmr_PeakDimComponent self, Nmr_DataDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setDataDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiSet values
**/
void *Nmr_PeakDimComponent_SetPeakDimContribs(Nmr_PeakDimComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setPeakDimContribs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.scalingFactor

Scaling factor for 
PeakDimComponent. Is multiplied by the value that comes out of the 
dataDimRef to get the actual contribution from this PeakDimComponent to 
the position of the peak. E.g.  a 1D NMR quartet would have 
scalingFactors -3, -1, 1, 3 on its four subpeaks. 

NOTE: To calculate 
the value corresponding to the PeakDimComponent, you yourself must 
calculate xPoints, the (signed) number of points that are due to the 
PeakDimComponent. The desired value is then 
self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
  @param  Nmr_PeakDimComponent self
  @param  ApiInteger value
**/
void *Nmr_PeakDimComponent_SetScalingFactor(Nmr_PeakDimComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setScalingFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_PeakDimComponent self
  @param  ApiInteger value
**/
void *Nmr_PeakDimComponent_SetSerial(Nmr_PeakDimComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
ApiList Nmr_PeakDimComponent_SortedPeakDimContribs(Nmr_PeakDimComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: cannot find method 'sortedPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimComponent: method 'sortedPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
