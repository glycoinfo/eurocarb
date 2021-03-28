
#include "ccp.h"

/*
  Multidimensional graphical mark.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  Impl_ApplicationData value
**/
void *Anal_Mark_AddApplicationData(Anal_Mark self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean complete
**/
void *Anal_Mark_CheckAllValid(Anal_Mark self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean complete
**/
void *Anal_Mark_CheckValid(Anal_Mark self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'checkValid' is not callable");
  
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
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Mark_FindAllApplicationData(Anal_Mark self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_Mark self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Mark_FindAllApplicationData_keyval0(Anal_Mark self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Mark_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Mark_FindAllApplicationData_keyval1(Anal_Mark self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Mark_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Mark_FindAllApplicationData_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Mark_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Mark_FindAllApplicationData_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Mark_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
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
ApiList Anal_Mark_FindAllApplicationData_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Mark_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_Mark_FindAllMarkDims(Anal_Mark self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMarkDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'findAllMarkDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'findAllMarkDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_Mark_FindAllMarkDims_keyval0(Anal_Mark self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Mark_FindAllMarkDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_Mark_FindAllMarkDims_keyval1(Anal_Mark self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Mark_FindAllMarkDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_Mark_FindAllMarkDims_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Mark_FindAllMarkDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_Mark_FindAllMarkDims_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Mark_FindAllMarkDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
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
ApiSet Anal_Mark_FindAllMarkDims_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Mark_FindAllMarkDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Mark_FindFirstApplicationData(Anal_Mark self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_Mark self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval0(Anal_Mark self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Mark_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval1(Anal_Mark self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Mark_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Mark_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Mark_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
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
Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Mark_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_MarkDim Anal_Mark_FindFirstMarkDim(Anal_Mark self, ApiMap conditions)
{
  
  Anal_MarkDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMarkDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'findFirstMarkDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'findFirstMarkDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns  the first value that satisfies the conditions 
**/
Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval0(Anal_Mark self)
{
  
  Anal_MarkDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Mark_FindFirstMarkDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval1(Anal_Mark self, char * key, ApiObject value)
{
  
  Anal_MarkDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Mark_FindFirstMarkDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_MarkDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Mark_FindFirstMarkDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_MarkDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Mark_FindFirstMarkDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
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
Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_MarkDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Mark_FindFirstMarkDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_Mark_Get(Anal_Mark self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Mark self
  @returns   the result
**/
Acco_AccessObject Anal_Mark_GetAccess(Anal_Mark self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getAccess' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
Acco_AccessObject Anal_Mark_GetActiveAccess(Anal_Mark self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Mark.analysisProject

parent link
  @param  Anal_Mark self
  @returns   the result
**/
Anal_AnalysisProject Anal_Mark_GetAnalysisProject(Anal_Mark self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiList Anal_Mark_GetApplicationData(Anal_Mark self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_Mark Anal_Mark_GetByKey(Anal_Mark self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_Mark obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getByKey' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiString Anal_Mark_GetClassName(Anal_Mark self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Mark.color

Mark color
  @param  Anal_Mark self
  @returns   the result
**/
ApiString Anal_Mark_GetColor(Anal_Mark self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Mark self
  @returns   the result
**/
ApiInteger Anal_Mark_GetDashLength(Anal_Mark self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDashLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getDashLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getDashLength' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiList Anal_Mark_GetFieldNames(Anal_Mark self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_Mark_GetFullKey(Anal_Mark self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Mark self
  @returns   the result
**/
ApiInteger Anal_Mark_GetGapLength(Anal_Mark self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGapLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getGapLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getGapLength' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiBoolean Anal_Mark_GetInConstructor(Anal_Mark self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getInConstructor' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiBoolean Anal_Mark_GetIsDeleted(Anal_Mark self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Mark self
  @returns   the result
**/
ApiFloat Anal_Mark_GetLineWidth(Anal_Mark self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getLineWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @returns  Local object key
**/
ApiObject Anal_Mark_GetLocalKey(Anal_Mark self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns   the result
**/
ApiSet Anal_Mark_GetMarkDims(Anal_Mark self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMarkDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getMarkDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getMarkDims' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiString Anal_Mark_GetPackageName(Anal_Mark self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getPackageName' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiString Anal_Mark_GetPackageShortName(Anal_Mark self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Mark.parent

link to parent object - synonym for 
analysisProject
  @param  Anal_Mark self
  @returns   the result
**/
Anal_AnalysisProject Anal_Mark_GetParent(Anal_Mark self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getParent' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
ApiString Anal_Mark_GetQualifiedName(Anal_Mark self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
Impl_MemopsRoot Anal_Mark_GetRoot(Anal_Mark self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Mark.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Mark self
  @returns   the result
**/
ApiInteger Anal_Mark_GetSerial(Anal_Mark self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getSerial' is not callable");
  
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
  @param  Anal_Mark self
  @returns   the result
**/
Impl_TopObject Anal_Mark_GetTopObject(Anal_Mark self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_Mark Anal_Mark_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewMark(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject parent
  @returns  the new object
**/
Anal_Mark Anal_Mark_Init_reqd(Anal_AnalysisProject parent)
{
  
  Anal_Mark  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anal_Mark_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.MarkDim
  @param  Anal_Mark self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_MarkDim Anal_Mark_NewMarkDim(Anal_Mark self, ApiMap attrlinks)
{
  
  Anal_MarkDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMarkDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'newMarkDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'newMarkDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.MarkDim
  @param  Anal_Mark self
  @param  Anal_AxisType axisType
  @param  float position
  @returns  the new object
**/
Anal_MarkDim Anal_Mark_NewMarkDim_reqd(Anal_Mark self, Anal_AxisType axisType, float position)
{
  
  Anal_MarkDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__position = ApiFloat_New(position);

  PyDict_SetItemString(attrlinks, "axisType", axisType);
  PyDict_SetItemString(attrlinks, "position", api__position);
  
  obj = Anal_Mark_NewMarkDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__position);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  Impl_ApplicationData value
**/
void *Anal_Mark_RemoveApplicationData(Anal_Mark self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_Mark_Set(Anal_Mark self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Mark self
  @param  Acco_AccessObject value
**/
void *Anal_Mark_SetAccess(Anal_Mark self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setAccess' is not callable");
  
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
  @param  Anal_Mark self
  @param  ApiList values
**/
void *Anal_Mark_SetApplicationData(Anal_Mark self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Mark.color

Mark color
  @param  Anal_Mark self
  @param  ApiString value
**/
void *Anal_Mark_SetColor(Anal_Mark self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Mark self
  @param  ApiInteger value
**/
void *Anal_Mark_SetDashLength(Anal_Mark self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDashLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setDashLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setDashLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Mark self
  @param  ApiInteger value
**/
void *Anal_Mark_SetGapLength(Anal_Mark self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGapLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setGapLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setGapLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Mark self
  @param  ApiFloat value
**/
void *Anal_Mark_SetLineWidth(Anal_Mark self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setLineWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Mark.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Mark self
  @param  ApiInteger value
**/
void *Anal_Mark_SetSerial(Anal_Mark self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns   the result
**/
ApiList Anal_Mark_SortedMarkDims(Anal_Mark self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMarkDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Mark: cannot find method 'sortedMarkDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Mark: method 'sortedMarkDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
