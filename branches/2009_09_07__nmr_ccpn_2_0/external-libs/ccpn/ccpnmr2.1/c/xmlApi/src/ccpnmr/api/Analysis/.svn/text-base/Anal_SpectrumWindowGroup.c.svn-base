
#include "ccp.h"

/*
  A group of spectrum windows.  Only one group may be active at any one time, and only windows in the active group are displayed.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowGroup_AddApplicationData(Anal_SpectrumWindowGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  Anal_SpectrumWindow value
**/
void *Anal_SpectrumWindowGroup_AddSpectrumWindow(Anal_SpectrumWindowGroup self, Anal_SpectrumWindow value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'addSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'addSpectrumWindow' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowGroup_CheckAllValid(Anal_SpectrumWindowGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiBoolean complete
**/
void *Anal_SpectrumWindowGroup_CheckValid(Anal_SpectrumWindowGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'checkValid' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData(Anal_SpectrumWindowGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData_keyval0(Anal_SpectrumWindowGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData_keyval1(Anal_SpectrumWindowGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData_keyval2(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData_keyval3(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
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
ApiList Anal_SpectrumWindowGroup_FindAllApplicationData_keyval4(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows(Anal_SpectrumWindowGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'findAllSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'findAllSpectrumWindows' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows_keyval0(Anal_SpectrumWindowGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowGroup_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows_keyval1(Anal_SpectrumWindowGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowGroup_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows_keyval2(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowGroup_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows_keyval3(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowGroup_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
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
ApiSet Anal_SpectrumWindowGroup_FindAllSpectrumWindows_keyval4(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowGroup_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData(Anal_SpectrumWindowGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData_keyval0(Anal_SpectrumWindowGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData_keyval1(Anal_SpectrumWindowGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData_keyval2(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData_keyval3(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
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
Impl_ApplicationData Anal_SpectrumWindowGroup_FindFirstApplicationData_keyval4(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(Anal_SpectrumWindowGroup self, ApiMap conditions)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'findFirstSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'findFirstSpectrumWindow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow_keyval0(Anal_SpectrumWindowGroup self)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow_keyval1(Anal_SpectrumWindowGroup self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow_keyval2(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow_keyval3(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
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
Anal_SpectrumWindow Anal_SpectrumWindowGroup_FindFirstSpectrumWindow_keyval4(Anal_SpectrumWindowGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SpectrumWindowGroup_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_SpectrumWindowGroup_Get(Anal_SpectrumWindowGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowGroup_GetAccess(Anal_SpectrumWindowGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Acco_AccessObject Anal_SpectrumWindowGroup_GetActiveAccess(Anal_SpectrumWindowGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowGroup.analysisProject

parent link
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Anal_AnalysisProject Anal_SpectrumWindowGroup_GetAnalysisProject(Anal_SpectrumWindowGroup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiList Anal_SpectrumWindowGroup_GetApplicationData(Anal_SpectrumWindowGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindowGroup_GetByKey(Anal_SpectrumWindowGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_SpectrumWindowGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getByKey' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiString Anal_SpectrumWindowGroup_GetClassName(Anal_SpectrumWindowGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getClassName' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiList Anal_SpectrumWindowGroup_GetFieldNames(Anal_SpectrumWindowGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_SpectrumWindowGroup_GetFullKey(Anal_SpectrumWindowGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getFullKey' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowGroup_GetInConstructor(Anal_SpectrumWindowGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getInConstructor' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiBoolean Anal_SpectrumWindowGroup_GetIsDeleted(Anal_SpectrumWindowGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @returns  Local object key
**/
ApiObject Anal_SpectrumWindowGroup_GetLocalKey(Anal_SpectrumWindowGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowGroup.name

An arbitrary 
user-defined name for the window group.
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiString Anal_SpectrumWindowGroup_GetName(Anal_SpectrumWindowGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getName' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiString Anal_SpectrumWindowGroup_GetPackageName(Anal_SpectrumWindowGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getPackageName' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiString Anal_SpectrumWindowGroup_GetPackageShortName(Anal_SpectrumWindowGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowGroup.parent

link to parent 
object - synonym for analysisProject
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Anal_AnalysisProject Anal_SpectrumWindowGroup_GetParent(Anal_SpectrumWindowGroup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getParent' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiString Anal_SpectrumWindowGroup_GetQualifiedName(Anal_SpectrumWindowGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Impl_MemopsRoot Anal_SpectrumWindowGroup_GetRoot(Anal_SpectrumWindowGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiInteger Anal_SpectrumWindowGroup_GetSerial(Anal_SpectrumWindowGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiSet Anal_SpectrumWindowGroup_GetSpectrumWindows(Anal_SpectrumWindowGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getSpectrumWindows' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
Impl_TopObject Anal_SpectrumWindowGroup_GetTopObject(Anal_SpectrumWindowGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindowGroup_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewSpectrumWindowGroup(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
Anal_SpectrumWindowGroup Anal_SpectrumWindowGroup_Init_reqd(Anal_AnalysisProject parent, char * name)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_SpectrumWindowGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowGroup self
  @param  Impl_ApplicationData value
**/
void *Anal_SpectrumWindowGroup_RemoveApplicationData(Anal_SpectrumWindowGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  Anal_SpectrumWindow value
**/
void *Anal_SpectrumWindowGroup_RemoveSpectrumWindow(Anal_SpectrumWindowGroup self, Anal_SpectrumWindow value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'removeSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'removeSpectrumWindow' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_SpectrumWindowGroup_Set(Anal_SpectrumWindowGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowGroup self
  @param  Acco_AccessObject value
**/
void *Anal_SpectrumWindowGroup_SetAccess(Anal_SpectrumWindowGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'setAccess' is not callable");
  
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
  @param  Anal_SpectrumWindowGroup self
  @param  ApiList values
**/
void *Anal_SpectrumWindowGroup_SetApplicationData(Anal_SpectrumWindowGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowGroup.name

An arbitrary 
user-defined name for the window group.
  @param  Anal_SpectrumWindowGroup self
  @param  ApiString value
**/
void *Anal_SpectrumWindowGroup_SetName(Anal_SpectrumWindowGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowGroup self
  @param  ApiInteger value
**/
void *Anal_SpectrumWindowGroup_SetSerial(Anal_SpectrumWindowGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @param  ApiSet values
**/
void *Anal_SpectrumWindowGroup_SetSpectrumWindows(Anal_SpectrumWindowGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'setSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'setSpectrumWindows' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowGroup.spectrumWindows

the 
SpectrumWindows of the SpectrumWindowGroup
  @param  Anal_SpectrumWindowGroup self
  @returns   the result
**/
ApiList Anal_SpectrumWindowGroup_SortedSpectrumWindows(Anal_SpectrumWindowGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: cannot find method 'sortedSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SpectrumWindowGroup: method 'sortedSpectrumWindows' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
