
#include "ccp.h"

/*
  Used for properties of spectra which depend on the particular SpectrumWindow being considered.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowView_AddApplicationData(Anal_SpectrumWindowView self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowView_CheckAllValid(Anal_SpectrumWindowView self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowView_CheckValid(Anal_SpectrumWindowView self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'checkValid' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowView_FindAllApplicationData(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval0(Anal_SpectrumWindowView self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
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
ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findAllAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findAllAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval0(Anal_SpectrumWindowView self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
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
ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findAllWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findAllWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval0(Anal_SpectrumWindowView self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
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
ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval0(Anal_SpectrumWindowView self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
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
Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  Anal_AxisMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findFirstAxisMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findFirstAxisMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval0(Anal_SpectrumWindowView self)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
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
Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList(Anal_SpectrumWindowView self, ApiMap conditions)
{
  
  Anal_WindowPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstWindowPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'findFirstWindowPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'findFirstWindowPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval0(Anal_SpectrumWindowView self)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowView_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowView_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowView_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowView_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
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
Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowView_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_SpectrumWindowView_Get(Anal_SpectrumWindowView self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowView_GetAccess(Anal_SpectrumWindowView self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowView_GetActiveAccess(Anal_SpectrumWindowView self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.analysisSpectrum

Analysis 
spectrum record referred to
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_SpectrumWindowView_GetAnalysisSpectrum(Anal_SpectrumWindowView self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getAnalysisSpectrum' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiList Anal_SpectrumWindowView_GetApplicationData(Anal_SpectrumWindowView self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link to 
class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowView_GetAxisMappings(Anal_SpectrumWindowView self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_SpectrumWindowView Anal_SpectrumWindowView_GetByKey(Anal_SpectrumWindowView self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getByKey' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiString Anal_SpectrumWindowView_GetClassName(Anal_SpectrumWindowView self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getClassName' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiList Anal_SpectrumWindowView_GetFieldNames(Anal_SpectrumWindowView self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_SpectrumWindowView_GetFullKey(Anal_SpectrumWindowView self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getFullKey' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetInConstructor(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getInConstructor' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetIsDeleted(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isInToolbar

Toggle for 
whether view is shown in window toolbar
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetIsInToolbar(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsInToolbar");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getIsInToolbar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getIsInToolbar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isNegVisible

Visibility 
toggle for negative contours.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetIsNegVisible(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsNegVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getIsNegVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getIsNegVisible' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isPosVisible

Visibility 
toggle for positive contours
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetIsPosVisible(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsPosVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getIsPosVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getIsPosVisible' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isSliceVisible

Visibilty 
toggle for 1D slices
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowView_GetIsSliceVisible(Anal_SpectrumWindowView self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSliceVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getIsSliceVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getIsSliceVisible' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @returns  Local object key
**/
ApiObject Anal_SpectrumWindowView_GetLocalKey(Anal_SpectrumWindowView self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getLocalKey' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiString Anal_SpectrumWindowView_GetPackageName(Anal_SpectrumWindowView self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getPackageName' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiString Anal_SpectrumWindowView_GetPackageShortName(Anal_SpectrumWindowView self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.parent

link to parent object 
- synonym for spectrumWindowPane
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Anal_SpectrumWindowPane Anal_SpectrumWindowView_GetParent(Anal_SpectrumWindowView self)
{
  
  Anal_SpectrumWindowPane obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getParent' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiString Anal_SpectrumWindowView_GetQualifiedName(Anal_SpectrumWindowView self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Impl_MemopsRoot Anal_SpectrumWindowView_GetRoot(Anal_SpectrumWindowView self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.spectrumWindowPane

parent 
link
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Anal_SpectrumWindowPane Anal_SpectrumWindowView_GetSpectrumWindowPane(Anal_SpectrumWindowView self)
{
  
  Anal_SpectrumWindowPane obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowPane");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getSpectrumWindowPane'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getSpectrumWindowPane' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
Impl_TopObject Anal_SpectrumWindowView_GetTopObject(Anal_SpectrumWindowView self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child link 
to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowView_GetWindowPeakLists(Anal_SpectrumWindowView self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'getWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'getWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindowView_Init(Anal_SpectrumWindowPane parent, ApiMap attrlinks)
{
  
  return Anal_SpectrumWindowPane_NewSpectrumWindowView(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane parent
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindowView_Init_reqd(Anal_SpectrumWindowPane parent, Anal_AnalysisSpectrum analysisSpectrum)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "analysisSpectrum", analysisSpectrum);
  
  obj = Anal_SpectrumWindowView_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisMapping Anal_SpectrumWindowView_NewAxisMapping(Anal_SpectrumWindowView self, ApiMap attrlinks)
{
  
  Anal_AxisMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'newAxisMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'newAxisMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisDataDim analysisDataDim
  @param  char * label
  @returns  the new object
**/
Anal_AxisMapping Anal_SpectrumWindowView_NewAxisMapping_reqd(Anal_SpectrumWindowView self, Anal_AnalysisDataDim analysisDataDim, char * label)
{
  
  Anal_AxisMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "analysisDataDim", analysisDataDim);
  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_SpectrumWindowView_NewAxisMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_WindowPeakList Anal_SpectrumWindowView_NewWindowPeakList(Anal_SpectrumWindowView self, ApiMap attrlinks)
{
  
  Anal_WindowPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newWindowPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'newWindowPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'newWindowPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisPeakList analysisPeakList
  @returns  the new object
**/
Anal_WindowPeakList Anal_SpectrumWindowView_NewWindowPeakList_reqd(Anal_SpectrumWindowView self, Anal_AnalysisPeakList analysisPeakList)
{
  
  Anal_WindowPeakList  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "analysisPeakList", analysisPeakList);
  
  obj = Anal_SpectrumWindowView_NewWindowPeakList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowView_RemoveApplicationData(Anal_SpectrumWindowView self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_SpectrumWindowView_Set(Anal_SpectrumWindowView self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowView self
  @param  Acco_AccessObject value
**/
void *Anal_SpectrumWindowView_SetAccess(Anal_SpectrumWindowView self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.analysisSpectrum

Analysis 
spectrum record referred to
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisSpectrum value
**/
void *Anal_SpectrumWindowView_SetAnalysisSpectrum(Anal_SpectrumWindowView self, Anal_AnalysisSpectrum value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setAnalysisSpectrum' is not callable");
  
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
  @param  Anal_SpectrumWindowView self
  @param  ApiList values
**/
void *Anal_SpectrumWindowView_SetApplicationData(Anal_SpectrumWindowView self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isInToolbar

Toggle for 
whether view is shown in window toolbar
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindowView_SetIsInToolbar(Anal_SpectrumWindowView self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsInToolbar");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setIsInToolbar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setIsInToolbar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isNegVisible

Visibility 
toggle for negative contours.
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindowView_SetIsNegVisible(Anal_SpectrumWindowView self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsNegVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setIsNegVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setIsNegVisible' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isPosVisible

Visibility 
toggle for positive contours
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindowView_SetIsPosVisible(Anal_SpectrumWindowView self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsPosVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setIsPosVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setIsPosVisible' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isSliceVisible

Visibilty 
toggle for 1D slices
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindowView_SetIsSliceVisible(Anal_SpectrumWindowView self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSliceVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'setIsSliceVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'setIsSliceVisible' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiList Anal_SpectrumWindowView_SortedAxisMappings(Anal_SpectrumWindowView self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'sortedAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'sortedAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
ApiList Anal_SpectrumWindowView_SortedWindowPeakLists(Anal_SpectrumWindowView self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: cannot find method 'sortedWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowView: method 'sortedWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
