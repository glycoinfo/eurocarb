
#include "ccp.h"

/*
  
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisPeakList_AddApplicationData(Anal_AnalysisPeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisPeakList_CheckAllValid(Anal_AnalysisPeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisPeakList_CheckValid(Anal_AnalysisPeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'checkValid' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPeakList_FindAllApplicationData(Anal_AnalysisPeakList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPeakList_FindAllApplicationData_keyval0(Anal_AnalysisPeakList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPeakList_FindAllApplicationData_keyval1(Anal_AnalysisPeakList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPeakList_FindAllApplicationData_keyval2(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPeakList_FindAllApplicationData_keyval3(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
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
ApiList Anal_AnalysisPeakList_FindAllApplicationData_keyval4(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists(Anal_AnalysisPeakList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'findAllWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'findAllWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists_keyval0(Anal_AnalysisPeakList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPeakList_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists_keyval1(Anal_AnalysisPeakList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPeakList_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists_keyval2(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPeakList_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists_keyval3(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPeakList_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
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
ApiSet Anal_AnalysisPeakList_FindAllWindowPeakLists_keyval4(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPeakList_FindAllWindowPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData(Anal_AnalysisPeakList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData_keyval0(Anal_AnalysisPeakList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData_keyval1(Anal_AnalysisPeakList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData_keyval2(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData_keyval3(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
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
Impl_ApplicationData Anal_AnalysisPeakList_FindFirstApplicationData_keyval4(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList(Anal_AnalysisPeakList self, ApiMap conditions)
{
  
  Anal_WindowPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstWindowPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'findFirstWindowPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'findFirstWindowPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList_keyval0(Anal_AnalysisPeakList self)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPeakList_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList_keyval1(Anal_AnalysisPeakList self, char * key, ApiObject value)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPeakList_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList_keyval2(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPeakList_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList_keyval3(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPeakList_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
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
Anal_WindowPeakList Anal_AnalysisPeakList_FindFirstWindowPeakList_keyval4(Anal_AnalysisPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_WindowPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPeakList_FindFirstWindowPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AnalysisPeakList_Get(Anal_AnalysisPeakList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisPeakList_GetAccess(Anal_AnalysisPeakList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.analysisSpectrum

parent link
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_AnalysisPeakList_GetAnalysisSpectrum(Anal_AnalysisPeakList self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getAnalysisSpectrum' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiList Anal_AnalysisPeakList_GetApplicationData(Anal_AnalysisPeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AnalysisPeakList Anal_AnalysisPeakList_GetByKey(Anal_AnalysisPeakList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AnalysisPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getByKey' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetClassName(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getClassName' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiList Anal_AnalysisPeakList_GetFieldNames(Anal_AnalysisPeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AnalysisPeakList_GetFullKey(Anal_AnalysisPeakList self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getFullKey' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiBoolean Anal_AnalysisPeakList_GetInConstructor(Anal_AnalysisPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiBoolean Anal_AnalysisPeakList_GetIsDeleted(Anal_AnalysisPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @returns  Local object key
**/
ApiObject Anal_AnalysisPeakList_GetLocalKey(Anal_AnalysisPeakList self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.noeIntensityType

NOE intensity 
type
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetNoeIntensityType(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoeIntensityType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getNoeIntensityType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getNoeIntensityType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.noeRefDistance

NOE calibration 
reference distance
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiFloat Anal_AnalysisPeakList_GetNoeRefDistance(Anal_AnalysisPeakList self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoeRefDistance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getNoeRefDistance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getNoeRefDistance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.noeRefIntensity

NOE 
calibration reference intensity
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiFloat Anal_AnalysisPeakList_GetNoeRefIntensity(Anal_AnalysisPeakList self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoeRefIntensity");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getNoeRefIntensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getNoeRefIntensity' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetPackageName(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getPackageName' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetPackageShortName(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.parent

link to parent object - 
synonym for analysisSpectrum
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_AnalysisPeakList_GetParent(Anal_AnalysisPeakList self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.peakList

PeakList that 
AnalysisPeakList refers to. Key for class
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Nmr_PeakList Anal_AnalysisPeakList_GetPeakList(Anal_AnalysisPeakList self)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getPeakList' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetQualifiedName(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisPeakList_GetRoot(Anal_AnalysisPeakList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.symbolColor

Color for 
displayed symbols
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetSymbolColor(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymbolColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getSymbolColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getSymbolColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.symbolStyle

Peak symbol style
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetSymbolStyle(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymbolStyle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getSymbolStyle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getSymbolStyle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPeakList.textColor

Color for displayed 
text
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiString Anal_AnalysisPeakList_GetTextColor(Anal_AnalysisPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getTextColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getTextColor' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
Impl_TopObject Anal_AnalysisPeakList_GetTopObject(Anal_AnalysisPeakList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiSet Anal_AnalysisPeakList_GetWindowPeakLists(Anal_AnalysisPeakList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'getWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'getWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisPeakList Anal_AnalysisPeakList_Init(Anal_AnalysisSpectrum parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisSpectrum_NewAnalysisPeakList(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum parent
  @param  Nmr_PeakList peakList
  @returns  the new object
**/
Anal_AnalysisPeakList Anal_AnalysisPeakList_Init_reqd(Anal_AnalysisSpectrum parent, Nmr_PeakList peakList)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "peakList", peakList);
  
  obj = Anal_AnalysisPeakList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPeakList self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisPeakList_RemoveApplicationData(Anal_AnalysisPeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AnalysisPeakList_Set(Anal_AnalysisPeakList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPeakList self
  @param  Acco_AccessObject value
**/
void *Anal_AnalysisPeakList_SetAccess(Anal_AnalysisPeakList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setAccess' is not callable");
  
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
  @param  Anal_AnalysisPeakList self
  @param  ApiList values
**/
void *Anal_AnalysisPeakList_SetApplicationData(Anal_AnalysisPeakList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.noeIntensityType

NOE intensity 
type
  @param  Anal_AnalysisPeakList self
  @param  ApiString value
**/
void *Anal_AnalysisPeakList_SetNoeIntensityType(Anal_AnalysisPeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoeIntensityType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setNoeIntensityType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setNoeIntensityType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.noeRefDistance

NOE calibration 
reference distance
  @param  Anal_AnalysisPeakList self
  @param  ApiFloat value
**/
void *Anal_AnalysisPeakList_SetNoeRefDistance(Anal_AnalysisPeakList self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoeRefDistance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setNoeRefDistance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setNoeRefDistance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.noeRefIntensity

NOE 
calibration reference intensity
  @param  Anal_AnalysisPeakList self
  @param  ApiFloat value
**/
void *Anal_AnalysisPeakList_SetNoeRefIntensity(Anal_AnalysisPeakList self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoeRefIntensity");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setNoeRefIntensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setNoeRefIntensity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.peakList

PeakList that 
AnalysisPeakList refers to. Key for class
  @param  Anal_AnalysisPeakList self
  @param  Nmr_PeakList value
**/
void *Anal_AnalysisPeakList_SetPeakList(Anal_AnalysisPeakList self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.symbolColor

Color for 
displayed symbols
  @param  Anal_AnalysisPeakList self
  @param  ApiString value
**/
void *Anal_AnalysisPeakList_SetSymbolColor(Anal_AnalysisPeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSymbolColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setSymbolColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setSymbolColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.symbolStyle

Peak symbol style
  @param  Anal_AnalysisPeakList self
  @param  ApiString value
**/
void *Anal_AnalysisPeakList_SetSymbolStyle(Anal_AnalysisPeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSymbolStyle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setSymbolStyle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setSymbolStyle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPeakList.textColor

Color for displayed 
text
  @param  Anal_AnalysisPeakList self
  @param  ApiString value
**/
void *Anal_AnalysisPeakList_SetTextColor(Anal_AnalysisPeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setTextColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setTextColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @param  ApiSet values
**/
void *Anal_AnalysisPeakList_SetWindowPeakLists(Anal_AnalysisPeakList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'setWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'setWindowPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccpnmr.Analysis.AnalysisPeakList.windowPeakLists

WindowPeakLists 
referring to AnalysisPeakList
  @param  Anal_AnalysisPeakList self
  @returns   the result
**/
ApiList Anal_AnalysisPeakList_SortedWindowPeakLists(Anal_AnalysisPeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedWindowPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: cannot find method 'sortedWindowPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPeakList: method 'sortedWindowPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
