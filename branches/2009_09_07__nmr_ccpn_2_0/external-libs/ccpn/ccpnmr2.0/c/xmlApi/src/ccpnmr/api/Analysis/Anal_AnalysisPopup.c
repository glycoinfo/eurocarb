
#include "ccp.h"

/*
  Analysis popup information
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisPopup_AddApplicationData(Anal_AnalysisPopup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisPopup_CheckAllValid(Anal_AnalysisPopup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisPopup_CheckValid(Anal_AnalysisPopup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'checkValid' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPopup_FindAllApplicationData(Anal_AnalysisPopup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval0(Anal_AnalysisPopup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPopup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPopup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPopup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPopup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
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
ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPopup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPopup_FindAllPopupOptions(Anal_AnalysisPopup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPopupOptions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'findAllPopupOptions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'findAllPopupOptions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval0(Anal_AnalysisPopup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPopup_FindAllPopupOptions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPopup_FindAllPopupOptions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPopup_FindAllPopupOptions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPopup_FindAllPopupOptions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
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
ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPopup_FindAllPopupOptions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData(Anal_AnalysisPopup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval0(Anal_AnalysisPopup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPopup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPopup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPopup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPopup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
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
Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPopup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption(Anal_AnalysisPopup self, ApiMap conditions)
{
  
  Anal_PopupOption obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPopupOption");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'findFirstPopupOption'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'findFirstPopupOption' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns  the first value that satisfies the conditions 
**/
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval0(Anal_AnalysisPopup self)
{
  
  Anal_PopupOption  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisPopup_FindFirstPopupOption(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value)
{
  
  Anal_PopupOption  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisPopup_FindFirstPopupOption(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_PopupOption  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisPopup_FindFirstPopupOption(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_PopupOption  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisPopup_FindFirstPopupOption(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
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
Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_PopupOption  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisPopup_FindFirstPopupOption(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AnalysisPopup_Get(Anal_AnalysisPopup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisPopup_GetAccess(Anal_AnalysisPopup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.analysisProject

parent link
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
Anal_AnalysisProject Anal_AnalysisPopup_GetAnalysisProject(Anal_AnalysisPopup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiList Anal_AnalysisPopup_GetApplicationData(Anal_AnalysisPopup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AnalysisPopup Anal_AnalysisPopup_GetByKey(Anal_AnalysisPopup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AnalysisPopup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getByKey' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetClassName(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getClassName' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiList Anal_AnalysisPopup_GetFieldNames(Anal_AnalysisPopup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AnalysisPopup_GetFullKey(Anal_AnalysisPopup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.height

Popup Height
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiInteger Anal_AnalysisPopup_GetHeight(Anal_AnalysisPopup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getHeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getHeight' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiBoolean Anal_AnalysisPopup_GetInConstructor(Anal_AnalysisPopup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiBoolean Anal_AnalysisPopup_GetIsDeleted(Anal_AnalysisPopup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.isOpen

Is popup open
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiBoolean Anal_AnalysisPopup_GetIsOpen(Anal_AnalysisPopup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsOpen");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getIsOpen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getIsOpen' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @returns  Local object key
**/
ApiObject Anal_AnalysisPopup_GetLocalKey(Anal_AnalysisPopup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.name

name of AnalysisPopup
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetName(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getName' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetPackageName(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getPackageName' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetPackageShortName(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
Anal_AnalysisProject Anal_AnalysisPopup_GetParent(Anal_AnalysisPopup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to class 
PopupOption
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiSet Anal_AnalysisPopup_GetPopupOptions(Anal_AnalysisPopup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPopupOptions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getPopupOptions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getPopupOptions' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetQualifiedName(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisPopup_GetRoot(Anal_AnalysisPopup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.screenX

Screen X position
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiInteger Anal_AnalysisPopup_GetScreenX(Anal_AnalysisPopup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScreenX");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getScreenX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getScreenX' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.screenY

Screen Y position
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiInteger Anal_AnalysisPopup_GetScreenY(Anal_AnalysisPopup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScreenY");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getScreenY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getScreenY' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.title

Popup title
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiString Anal_AnalysisPopup_GetTitle(Anal_AnalysisPopup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTitle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getTitle' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
Impl_TopObject Anal_AnalysisPopup_GetTopObject(Anal_AnalysisPopup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisPopup.width

Popup width
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiInteger Anal_AnalysisPopup_GetWidth(Anal_AnalysisPopup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'getWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'getWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisPopup Anal_AnalysisPopup_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewAnalysisPopup(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
Anal_AnalysisPopup Anal_AnalysisPopup_Init_reqd(Anal_AnalysisProject parent, char * name)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisPopup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_PopupOption Anal_AnalysisPopup_NewPopupOption(Anal_AnalysisPopup self, ApiMap attrlinks)
{
  
  Anal_PopupOption obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPopupOption");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'newPopupOption'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'newPopupOption' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * keyword
  @returns  the new object
**/
Anal_PopupOption Anal_AnalysisPopup_NewPopupOption_reqd(Anal_AnalysisPopup self, char * keyword)
{
  
  Anal_PopupOption  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Anal_AnalysisPopup_NewPopupOption(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisPopup_RemoveApplicationData(Anal_AnalysisPopup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AnalysisPopup_Set(Anal_AnalysisPopup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPopup self
  @param  Acco_AccessObject value
**/
void *Anal_AnalysisPopup_SetAccess(Anal_AnalysisPopup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setAccess' is not callable");
  
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
  @param  Anal_AnalysisPopup self
  @param  ApiList values
**/
void *Anal_AnalysisPopup_SetApplicationData(Anal_AnalysisPopup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.height

Popup Height
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
void *Anal_AnalysisPopup_SetHeight(Anal_AnalysisPopup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setHeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setHeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.isOpen

Is popup open
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean value
**/
void *Anal_AnalysisPopup_SetIsOpen(Anal_AnalysisPopup self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsOpen");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setIsOpen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setIsOpen' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.name

name of AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString value
**/
void *Anal_AnalysisPopup_SetName(Anal_AnalysisPopup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.screenX

Screen X position
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
void *Anal_AnalysisPopup_SetScreenX(Anal_AnalysisPopup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScreenX");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setScreenX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setScreenX' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.screenY

Screen Y position
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
void *Anal_AnalysisPopup_SetScreenY(Anal_AnalysisPopup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScreenY");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setScreenY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setScreenY' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.title

Popup title
  @param  Anal_AnalysisPopup self
  @param  ApiString value
**/
void *Anal_AnalysisPopup_SetTitle(Anal_AnalysisPopup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTitle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisPopup.width

Popup width
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
void *Anal_AnalysisPopup_SetWidth(Anal_AnalysisPopup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'setWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'setWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
ApiList Anal_AnalysisPopup_SortedPopupOptions(Anal_AnalysisPopup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPopupOptions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: cannot find method 'sortedPopupOptions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisPopup: method 'sortedPopupOptions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
