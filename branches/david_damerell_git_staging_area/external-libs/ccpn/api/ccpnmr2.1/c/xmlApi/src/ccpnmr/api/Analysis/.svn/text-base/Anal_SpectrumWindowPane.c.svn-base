
#include "ccp.h"

/*
  Spectrum display area within window. Normal contour SpectrumWindows only have one.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowPane_AddApplicationData(Anal_SpectrumWindowPane self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowPane_CheckAllValid(Anal_SpectrumWindowPane self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowPane_CheckValid(Anal_SpectrumWindowPane self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'checkValid' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowPane_FindAllApplicationData(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval0(Anal_SpectrumWindowPane self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
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
ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findAllAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findAllAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval0(Anal_SpectrumWindowPane self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
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
ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findAllSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findAllSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval0(Anal_SpectrumWindowPane self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
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
ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findAllSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findAllSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval0(Anal_SpectrumWindowPane self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
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
ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval0(Anal_SpectrumWindowPane self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
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
Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisPanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findFirstAxisPanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findFirstAxisPanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval0(Anal_SpectrumWindowPane self)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
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
Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  Anal_SlicePanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSlicePanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findFirstSlicePanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findFirstSlicePanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval0(Anal_SpectrumWindowPane self)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
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
Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(Anal_SpectrumWindowPane self, ApiMap conditions)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'findFirstSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'findFirstSpectrumWindowView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval0(Anal_SpectrumWindowPane self)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
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
Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_SpectrumWindowPane_Get(Anal_SpectrumWindowPane self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowPane_GetAccess(Anal_SpectrumWindowPane self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowPane_GetActiveAccess(Anal_SpectrumWindowPane self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getActiveAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_GetApplicationData(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.aspectRatio

The ratio 
between the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiFloat Anal_SpectrumWindowPane_GetAspectRatio(Anal_SpectrumWindowPane self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAspectRatio");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getAspectRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getAspectRatio' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowPane_GetAxisPanels(Anal_SpectrumWindowPane self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_SpectrumWindowPane Anal_SpectrumWindowPane_GetByKey(Anal_SpectrumWindowPane self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_SpectrumWindowPane obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getByKey' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiString Anal_SpectrumWindowPane_GetClassName(Anal_SpectrumWindowPane self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getClassName' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_GetFieldNames(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_SpectrumWindowPane_GetFullKey(Anal_SpectrumWindowPane self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getFullKey' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowPane_GetInConstructor(Anal_SpectrumWindowPane self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getInConstructor' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowPane_GetIsDeleted(Anal_SpectrumWindowPane self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @returns  Local object key
**/
ApiObject Anal_SpectrumWindowPane_GetLocalKey(Anal_SpectrumWindowPane self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.name

An arbitrary 
user-defined name for the window.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiString Anal_SpectrumWindowPane_GetName(Anal_SpectrumWindowPane self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getName' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiString Anal_SpectrumWindowPane_GetPackageName(Anal_SpectrumWindowPane self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getPackageName' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiString Anal_SpectrumWindowPane_GetPackageShortName(Anal_SpectrumWindowPane self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.parent

link to parent object 
- synonym for spectrumWindow
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Anal_SpectrumWindow Anal_SpectrumWindowPane_GetParent(Anal_SpectrumWindowPane self)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getParent' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiString Anal_SpectrumWindowPane_GetQualifiedName(Anal_SpectrumWindowPane self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Impl_MemopsRoot Anal_SpectrumWindowPane_GetRoot(Anal_SpectrumWindowPane self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiInteger Anal_SpectrumWindowPane_GetSerial(Anal_SpectrumWindowPane self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowPane_GetSlicePanels(Anal_SpectrumWindowPane self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.sliceRange

Range for 
intensity axis on 1D slice display. The same value is used for both x 
and y slices.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_GetSliceRange(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSliceRange");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getSliceRange'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getSliceRange' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindow

parent link
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Anal_SpectrumWindow Anal_SpectrumWindowPane_GetSpectrumWindow(Anal_SpectrumWindowPane self)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getSpectrumWindow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowPane_GetSpectrumWindowViews(Anal_SpectrumWindowPane self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getSpectrumWindowViews' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
Impl_TopObject Anal_SpectrumWindowPane_GetTopObject(Anal_SpectrumWindowPane self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindow parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowPane Anal_SpectrumWindowPane_Init(Anal_SpectrumWindow parent, ApiMap attrlinks)
{
  
  return Anal_SpectrumWindow_NewSpectrumWindowPane(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindow parent
  @returns  the new object
**/
Anal_SpectrumWindowPane Anal_SpectrumWindowPane_Init_reqd(Anal_SpectrumWindow parent)
{
  
  Anal_SpectrumWindowPane  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anal_SpectrumWindowPane_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisPanel Anal_SpectrumWindowPane_NewAxisPanel(Anal_SpectrumWindowPane self, ApiMap attrlinks)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisPanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'newAxisPanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'newAxisPanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * label
  @returns  the new object
**/
Anal_AxisPanel Anal_SpectrumWindowPane_NewAxisPanel_reqd(Anal_SpectrumWindowPane self, char * label)
{
  
  Anal_AxisPanel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_SpectrumWindowPane_NewAxisPanel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SlicePanel Anal_SpectrumWindowPane_NewSlicePanel(Anal_SpectrumWindowPane self, ApiMap attrlinks)
{
  
  Anal_SlicePanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSlicePanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'newSlicePanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'newSlicePanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * label
  @returns  the new object
**/
Anal_SlicePanel Anal_SpectrumWindowPane_NewSlicePanel_reqd(Anal_SpectrumWindowPane self, char * label)
{
  
  Anal_SlicePanel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_SpectrumWindowPane_NewSlicePanel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_NewSpectrumWindowView(Anal_SpectrumWindowPane self, ApiMap attrlinks)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'newSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'newSpectrumWindowView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindowPane_NewSpectrumWindowView_reqd(Anal_SpectrumWindowPane self, Anal_AnalysisSpectrum analysisSpectrum)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "analysisSpectrum", analysisSpectrum);
  
  obj = Anal_SpectrumWindowPane_NewSpectrumWindowView(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowPane_RemoveApplicationData(Anal_SpectrumWindowPane self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_SpectrumWindowPane_Set(Anal_SpectrumWindowPane self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowPane self
  @param  Acco_AccessObject value
**/
void *Anal_SpectrumWindowPane_SetAccess(Anal_SpectrumWindowPane self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowPane self
  @param  ApiList values
**/
void *Anal_SpectrumWindowPane_SetApplicationData(Anal_SpectrumWindowPane self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.aspectRatio

The ratio 
between the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindowPane self
  @param  ApiFloat value
**/
void *Anal_SpectrumWindowPane_SetAspectRatio(Anal_SpectrumWindowPane self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAspectRatio");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setAspectRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setAspectRatio' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.name

An arbitrary 
user-defined name for the window.
  @param  Anal_SpectrumWindowPane self
  @param  ApiString value
**/
void *Anal_SpectrumWindowPane_SetName(Anal_SpectrumWindowPane self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowPane self
  @param  ApiInteger value
**/
void *Anal_SpectrumWindowPane_SetSerial(Anal_SpectrumWindowPane self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.sliceRange

Range for 
intensity axis on 1D slice display. The same value is used for both x 
and y slices.
  @param  Anal_SpectrumWindowPane self
  @param  ApiList values
**/
void *Anal_SpectrumWindowPane_SetSliceRange(Anal_SpectrumWindowPane self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSliceRange");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'setSliceRange'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'setSliceRange' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_SortedAxisPanels(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'sortedAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'sortedAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_SortedSlicePanels(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'sortedSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'sortedSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
ApiList Anal_SpectrumWindowPane_SortedSpectrumWindowViews(Anal_SpectrumWindowPane self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: cannot find method 'sortedSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowPane: method 'sortedSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
