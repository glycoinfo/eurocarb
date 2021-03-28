
#include "ccp.h"

/*
  Popup option setting
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  Impl_ApplicationData value
**/
void *Anal_PopupOption_AddApplicationData(Anal_PopupOption self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Anal_PopupOption self
  @param  ApiInteger value
**/
void *Anal_PopupOption_AddIntValue(Anal_PopupOption self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIntValue");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'addIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'addIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Anal_PopupOption self
  @param  ApiString value
**/
void *Anal_PopupOption_AddTextValue(Anal_PopupOption self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTextValue");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'addTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'addTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  ApiBoolean complete
**/
void *Anal_PopupOption_CheckAllValid(Anal_PopupOption self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  ApiBoolean complete
**/
void *Anal_PopupOption_CheckValid(Anal_PopupOption self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'checkValid' is not callable");
  
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
  @param  Anal_PopupOption self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_PopupOption_FindAllApplicationData(Anal_PopupOption self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_PopupOption_FindAllApplicationData_keyval0(Anal_PopupOption self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_PopupOption_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_PopupOption_FindAllApplicationData_keyval1(Anal_PopupOption self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_PopupOption_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_PopupOption_FindAllApplicationData_keyval2(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_PopupOption_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_PopupOption_FindAllApplicationData_keyval3(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_PopupOption_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
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
ApiList Anal_PopupOption_FindAllApplicationData_keyval4(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_PopupOption_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData(Anal_PopupOption self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData_keyval0(Anal_PopupOption self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_PopupOption_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData_keyval1(Anal_PopupOption self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_PopupOption_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData_keyval2(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_PopupOption_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData_keyval3(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_PopupOption_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
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
Impl_ApplicationData Anal_PopupOption_FindFirstApplicationData_keyval4(Anal_PopupOption self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_PopupOption_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_PopupOption_Get(Anal_PopupOption self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_PopupOption self
  @returns   the result
**/
Acco_AccessObject Anal_PopupOption_GetAccess(Anal_PopupOption self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getAccess' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
Acco_AccessObject Anal_PopupOption_GetActiveAccess(Anal_PopupOption self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.PopupOption.analysisPopup

parent link
  @param  Anal_PopupOption self
  @returns   the result
**/
Anal_AnalysisPopup Anal_PopupOption_GetAnalysisPopup(Anal_PopupOption self)
{
  
  Anal_AnalysisPopup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisPopup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getAnalysisPopup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getAnalysisPopup' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiList Anal_PopupOption_GetApplicationData(Anal_PopupOption self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiBoolean Anal_PopupOption_GetBoolValues(Anal_PopupOption self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoolValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getBoolValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getBoolValues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_PopupOption Anal_PopupOption_GetByKey(Anal_PopupOption self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_PopupOption obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getByKey' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetClassName(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.PopupOption.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetDetails(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getDetails' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiList Anal_PopupOption_GetFieldNames(Anal_PopupOption self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiFloat Anal_PopupOption_GetFloatValues(Anal_PopupOption self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getFloatValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getFloatValues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_PopupOption_GetFullKey(Anal_PopupOption self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getFullKey' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiBoolean Anal_PopupOption_GetInConstructor(Anal_PopupOption self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiList Anal_PopupOption_GetIntValues(Anal_PopupOption self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getIntValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getIntValues' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiBoolean Anal_PopupOption_GetIsDeleted(Anal_PopupOption self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.PopupOption.keyword

Popup option keyword
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetKeyword(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @returns  Local object key
**/
ApiObject Anal_PopupOption_GetLocalKey(Anal_PopupOption self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getLocalKey' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetPackageName(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getPackageName' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetPackageShortName(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.PopupOption.parent

link to parent object - 
synonym for analysisPopup
  @param  Anal_PopupOption self
  @returns   the result
**/
Anal_AnalysisPopup Anal_PopupOption_GetParent(Anal_PopupOption self)
{
  
  Anal_AnalysisPopup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getParent' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiString Anal_PopupOption_GetQualifiedName(Anal_PopupOption self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
Impl_MemopsRoot Anal_PopupOption_GetRoot(Anal_PopupOption self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Anal_PopupOption self
  @returns   the result
**/
ApiList Anal_PopupOption_GetTextValues(Anal_PopupOption self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getTextValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getTextValues' is not callable");
  
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
  @param  Anal_PopupOption self
  @returns   the result
**/
Impl_TopObject Anal_PopupOption_GetTopObject(Anal_PopupOption self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_PopupOption Anal_PopupOption_Init(Anal_AnalysisPopup parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisPopup_NewPopupOption(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup parent
  @param  char * keyword
  @returns  the new object
**/
Anal_PopupOption Anal_PopupOption_Init_reqd(Anal_AnalysisPopup parent, char * keyword)
{
  
  Anal_PopupOption  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Anal_PopupOption_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_PopupOption self
  @param  Impl_ApplicationData value
**/
void *Anal_PopupOption_RemoveApplicationData(Anal_PopupOption self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Template.MultiTypesValue.intValues

Int values 
list
  @param  Anal_PopupOption self
  @param  ApiInteger value
**/
void *Anal_PopupOption_RemoveIntValue(Anal_PopupOption self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIntValue");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'removeIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'removeIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Template.MultiTypesValue.textValues

text values 
(NB type Line)
  @param  Anal_PopupOption self
  @param  ApiString value
**/
void *Anal_PopupOption_RemoveTextValue(Anal_PopupOption self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTextValue");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'removeTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'removeTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.PopupOption
  @param  Anal_PopupOption self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_PopupOption_Set(Anal_PopupOption self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_PopupOption self
  @param  Acco_AccessObject value
**/
void *Anal_PopupOption_SetAccess(Anal_PopupOption self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setAccess' is not callable");
  
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
  @param  Anal_PopupOption self
  @param  ApiList values
**/
void *Anal_PopupOption_SetApplicationData(Anal_PopupOption self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Anal_PopupOption self
  @param  ApiBoolean value
**/
void *Anal_PopupOption_SetBoolValues(Anal_PopupOption self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoolValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setBoolValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setBoolValues' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.PopupOption.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anal_PopupOption self
  @param  ApiString value
**/
void *Anal_PopupOption_SetDetails(Anal_PopupOption self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Anal_PopupOption self
  @param  ApiFloat value
**/
void *Anal_PopupOption_SetFloatValues(Anal_PopupOption self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setFloatValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setFloatValues' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Anal_PopupOption self
  @param  ApiList values
**/
void *Anal_PopupOption_SetIntValues(Anal_PopupOption self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setIntValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setIntValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.PopupOption.keyword

Popup option keyword
  @param  Anal_PopupOption self
  @param  ApiString value
**/
void *Anal_PopupOption_SetKeyword(Anal_PopupOption self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Anal_PopupOption self
  @param  ApiList values
**/
void *Anal_PopupOption_SetTextValues(Anal_PopupOption self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValues");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.PopupOption: cannot find method 'setTextValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.PopupOption: method 'setTextValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
