
#include "ccp.h"

/*
  This is for the multi-dimensional display of one or more spectra simultaneously.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindow_AddApplicationData(Anal_SpectrumWindow self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Anal_SpectrumWindowGroup value
**/
void *Anal_SpectrumWindow_AddSpectrumWindowGroup(Anal_SpectrumWindow self, Anal_SpectrumWindowGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSpectrumWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'addSpectrumWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'addSpectrumWindowGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindow_CheckAllValid(Anal_SpectrumWindow self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindow_CheckValid(Anal_SpectrumWindow self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'checkValid' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindow_FindAllApplicationData(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval0(Anal_SpectrumWindow self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
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
ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllAxisPanels(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findAllAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findAllAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval0(Anal_SpectrumWindow self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
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
ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindAllAxisPanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSlicePanels(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findAllSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findAllSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval0(Anal_SpectrumWindow self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
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
ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindAllSlicePanels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findAllSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findAllSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval0(Anal_SpectrumWindow self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
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
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findAllSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findAllSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval0(Anal_SpectrumWindow self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
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
ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval0(Anal_SpectrumWindow self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
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
Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisPanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findFirstAxisPanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findFirstAxisPanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval0(Anal_SpectrumWindow self)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
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
Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisPanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindFirstAxisPanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  Anal_SlicePanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSlicePanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findFirstSlicePanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findFirstSlicePanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval0(Anal_SpectrumWindow self)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
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
Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SlicePanel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindFirstSlicePanel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  Anal_SpectrumWindowGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findFirstSpectrumWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findFirstSpectrumWindowGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval0(Anal_SpectrumWindow self)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
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
Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView(Anal_SpectrumWindow self, ApiMap conditions)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'findFirstSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'findFirstSpectrumWindowView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval0(Anal_SpectrumWindow self)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
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
Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindow_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_SpectrumWindow_Get(Anal_SpectrumWindow self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindow_GetAccess(Anal_SpectrumWindow self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.analysisProject

parent link
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
Anal_AnalysisProject Anal_SpectrumWindow_GetAnalysisProject(Anal_SpectrumWindow self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_GetApplicationData(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.aspectRatio

The ratio between 
the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiFloat Anal_SpectrumWindow_GetAspectRatio(Anal_SpectrumWindow self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAspectRatio");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getAspectRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getAspectRatio' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to class 
AxisPanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiSet Anal_SpectrumWindow_GetAxisPanels(Anal_SpectrumWindow self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_SpectrumWindow Anal_SpectrumWindow_GetByKey(Anal_SpectrumWindow self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getByKey' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetClassName(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getClassName' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_GetFieldNames(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_SpectrumWindow_GetFullKey(Anal_SpectrumWindow self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getFullKey' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetInConstructor(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isCanvasLabelShown

Is canvas 
label shown?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsCanvasLabelShown(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsCanvasLabelShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsCanvasLabelShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsCanvasLabelShown' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isCanvasMidpointShown

Is canvas 
midpoint shown?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsCanvasMidpointShown(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsCanvasMidpointShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsCanvasMidpointShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsCanvasMidpointShown' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsDeleted(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isIconified

Whether or not the 
window is iconified.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsIconified(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsIconified");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsIconified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsIconified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isXSliceDrawn

Whether a 1D 
horizontal slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsXSliceDrawn(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsXSliceDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsXSliceDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsXSliceDrawn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isXTickShown

Show ticks on x 
axis?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsXTickShown(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsXTickShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsXTickShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsXTickShown' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isYSliceDrawn

Whether a 1D 
vertical slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsYSliceDrawn(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsYSliceDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsYSliceDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsYSliceDrawn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isYTickShown

Show tick marks on 
y axis?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetIsYTickShown(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsYTickShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getIsYTickShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getIsYTickShown' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  Local object key
**/
ApiObject Anal_SpectrumWindow_GetLocalKey(Anal_SpectrumWindow self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.location

Location in pixel 
numbers of the Spectrum Window (x then y).
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_GetLocation(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocation");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.name

An arbitrary user-defined 
name for the window.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetName(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getName' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetPackageName(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getPackageName' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetPackageShortName(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
Anal_AnalysisProject Anal_SpectrumWindow_GetParent(Anal_SpectrumWindow self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getParent' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetQualifiedName(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
Impl_MemopsRoot Anal_SpectrumWindow_GetRoot(Anal_SpectrumWindow self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiInteger Anal_SpectrumWindow_GetSerial(Anal_SpectrumWindow self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to class 
SlicePanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiSet Anal_SpectrumWindow_GetSlicePanels(Anal_SpectrumWindow self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.sliceRange

Range for intensity 
axis on 1D slice display. The same value is used for both x and y 
slices.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_GetSliceRange(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSliceRange");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getSliceRange'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getSliceRange' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiSet Anal_SpectrumWindow_GetSpectrumWindowGroups(Anal_SpectrumWindow self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child link 
to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiSet Anal_SpectrumWindow_GetSpectrumWindowViews(Anal_SpectrumWindow self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.stripAxis

Strip axis direction 
(either 'x' or 'y')
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiString Anal_SpectrumWindow_GetStripAxis(Anal_SpectrumWindow self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStripAxis");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getStripAxis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getStripAxis' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
Impl_TopObject Anal_SpectrumWindow_GetTopObject(Anal_SpectrumWindow self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.useMultiplePeakLists

Use all 
active peaklists in peak selection, picking, etc.. If False use only one 
PeakList
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetUseMultiplePeakLists(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseMultiplePeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getUseMultiplePeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getUseMultiplePeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindow.useOverrideRegion

Should 
override region be used for printing etc.?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindow_GetUseOverrideRegion(Anal_SpectrumWindow self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'getUseOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'getUseOverrideRegion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindow Anal_SpectrumWindow_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewSpectrumWindow(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
Anal_SpectrumWindow Anal_SpectrumWindow_Init_reqd(Anal_AnalysisProject parent, char * name)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_SpectrumWindow_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisPanel Anal_SpectrumWindow_NewAxisPanel(Anal_SpectrumWindow self, ApiMap attrlinks)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisPanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'newAxisPanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'newAxisPanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * label
  @returns  the new object
**/
Anal_AxisPanel Anal_SpectrumWindow_NewAxisPanel_reqd(Anal_SpectrumWindow self, char * label)
{
  
  Anal_AxisPanel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_SpectrumWindow_NewAxisPanel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SlicePanel Anal_SpectrumWindow_NewSlicePanel(Anal_SpectrumWindow self, ApiMap attrlinks)
{
  
  Anal_SlicePanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSlicePanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'newSlicePanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'newSlicePanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * label
  @returns  the new object
**/
Anal_SlicePanel Anal_SpectrumWindow_NewSlicePanel_reqd(Anal_SpectrumWindow self, char * label)
{
  
  Anal_SlicePanel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_SpectrumWindow_NewSlicePanel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_NewSpectrumWindowView(Anal_SpectrumWindow self, ApiMap attrlinks)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'newSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'newSpectrumWindowView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
Anal_SpectrumWindowView Anal_SpectrumWindow_NewSpectrumWindowView_reqd(Anal_SpectrumWindow self, Anal_AnalysisSpectrum analysisSpectrum)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "analysisSpectrum", analysisSpectrum);
  
  obj = Anal_SpectrumWindow_NewSpectrumWindowView(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindow_RemoveApplicationData(Anal_SpectrumWindow self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Anal_SpectrumWindowGroup value
**/
void *Anal_SpectrumWindow_RemoveSpectrumWindowGroup(Anal_SpectrumWindow self, Anal_SpectrumWindowGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSpectrumWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'removeSpectrumWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'removeSpectrumWindowGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_SpectrumWindow_Set(Anal_SpectrumWindow self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindow self
  @param  Acco_AccessObject value
**/
void *Anal_SpectrumWindow_SetAccess(Anal_SpectrumWindow self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setAccess' is not callable");
  
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
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
void *Anal_SpectrumWindow_SetApplicationData(Anal_SpectrumWindow self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.aspectRatio

The ratio between 
the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindow self
  @param  ApiFloat value
**/
void *Anal_SpectrumWindow_SetAspectRatio(Anal_SpectrumWindow self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAspectRatio");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setAspectRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setAspectRatio' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isCanvasLabelShown

Is canvas 
label shown?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsCanvasLabelShown(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsCanvasLabelShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsCanvasLabelShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsCanvasLabelShown' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isCanvasMidpointShown

Is canvas 
midpoint shown?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsCanvasMidpointShown(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsCanvasMidpointShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsCanvasMidpointShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsCanvasMidpointShown' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isIconified

Whether or not the 
window is iconified.
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsIconified(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsIconified");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsIconified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsIconified' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isXSliceDrawn

Whether a 1D 
horizontal slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsXSliceDrawn(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsXSliceDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsXSliceDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsXSliceDrawn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isXTickShown

Show ticks on x 
axis?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsXTickShown(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsXTickShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsXTickShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsXTickShown' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isYSliceDrawn

Whether a 1D 
vertical slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsYSliceDrawn(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsYSliceDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsYSliceDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsYSliceDrawn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isYTickShown

Show tick marks on 
y axis?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetIsYTickShown(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsYTickShown");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setIsYTickShown'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setIsYTickShown' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.location

Location in pixel 
numbers of the Spectrum Window (x then y).
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
void *Anal_SpectrumWindow_SetLocation(Anal_SpectrumWindow self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocation");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setLocation' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.name

An arbitrary user-defined 
name for the window.
  @param  Anal_SpectrumWindow self
  @param  ApiString value
**/
void *Anal_SpectrumWindow_SetName(Anal_SpectrumWindow self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_SpectrumWindow self
  @param  ApiInteger value
**/
void *Anal_SpectrumWindow_SetSerial(Anal_SpectrumWindow self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.sliceRange

Range for intensity 
axis on 1D slice display. The same value is used for both x and y 
slices.
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
void *Anal_SpectrumWindow_SetSliceRange(Anal_SpectrumWindow self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSliceRange");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setSliceRange'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setSliceRange' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiSet values
**/
void *Anal_SpectrumWindow_SetSpectrumWindowGroups(Anal_SpectrumWindow self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setSpectrumWindowGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.stripAxis

Strip axis direction 
(either 'x' or 'y')
  @param  Anal_SpectrumWindow self
  @param  ApiString value
**/
void *Anal_SpectrumWindow_SetStripAxis(Anal_SpectrumWindow self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStripAxis");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setStripAxis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setStripAxis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.useMultiplePeakLists

Use all 
active peaklists in peak selection, picking, etc.. If False use only one 
PeakList
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetUseMultiplePeakLists(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseMultiplePeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setUseMultiplePeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setUseMultiplePeakLists' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindow.useOverrideRegion

Should 
override region be used for printing etc.?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
void *Anal_SpectrumWindow_SetUseOverrideRegion(Anal_SpectrumWindow self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'setUseOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'setUseOverrideRegion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_SortedAxisPanels(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisPanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'sortedAxisPanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'sortedAxisPanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_SortedSlicePanels(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSlicePanels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'sortedSlicePanels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'sortedSlicePanels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_SortedSpectrumWindowGroups(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'sortedSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'sortedSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
ApiList Anal_SpectrumWindow_SortedSpectrumWindowViews(Anal_SpectrumWindow self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: cannot find method 'sortedSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindow: method 'sortedSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
