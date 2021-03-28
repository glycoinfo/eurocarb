
#include "ccp.h"

/*
  This corresponds to one axis of a SpectrumWindow.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisPanel_AddApplicationData(Anal_AxisPanel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  ApiBoolean complete
**/
void *Anal_AxisPanel_CheckAllValid(Anal_AxisPanel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  ApiBoolean complete
**/
void *Anal_AxisPanel_CheckValid(Anal_AxisPanel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'checkValid' is not callable");
  
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
  @param  Anal_AxisPanel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisPanel_FindAllApplicationData(Anal_AxisPanel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisPanel_FindAllApplicationData_keyval0(Anal_AxisPanel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisPanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisPanel_FindAllApplicationData_keyval1(Anal_AxisPanel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisPanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisPanel_FindAllApplicationData_keyval2(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisPanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisPanel_FindAllApplicationData_keyval3(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisPanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
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
ApiList Anal_AxisPanel_FindAllApplicationData_keyval4(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisPanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisPanel_FindAllAxisRegions(Anal_AxisPanel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'findAllAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'findAllAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisPanel_FindAllAxisRegions_keyval0(Anal_AxisPanel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisPanel_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisPanel_FindAllAxisRegions_keyval1(Anal_AxisPanel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisPanel_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisPanel_FindAllAxisRegions_keyval2(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisPanel_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisPanel_FindAllAxisRegions_keyval3(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisPanel_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
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
ApiSet Anal_AxisPanel_FindAllAxisRegions_keyval4(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisPanel_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData(Anal_AxisPanel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData_keyval0(Anal_AxisPanel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisPanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData_keyval1(Anal_AxisPanel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisPanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData_keyval2(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisPanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData_keyval3(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisPanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
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
Impl_ApplicationData Anal_AxisPanel_FindFirstApplicationData_keyval4(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisPanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion(Anal_AxisPanel self, ApiMap conditions)
{
  
  Anal_AxisRegion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'findFirstAxisRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'findFirstAxisRegion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion_keyval0(Anal_AxisPanel self)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisPanel_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion_keyval1(Anal_AxisPanel self, char * key, ApiObject value)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisPanel_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion_keyval2(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisPanel_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion_keyval3(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisPanel_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
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
Anal_AxisRegion Anal_AxisPanel_FindFirstAxisRegion_keyval4(Anal_AxisPanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisPanel_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AxisPanel_Get(Anal_AxisPanel self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisPanel self
  @returns   the result
**/
Acco_AccessObject Anal_AxisPanel_GetAccess(Anal_AxisPanel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getAccess' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
Acco_AccessObject Anal_AxisPanel_GetActiveAccess(Anal_AxisPanel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getActiveAccess' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiList Anal_AxisPanel_GetApplicationData(Anal_AxisPanel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiSet Anal_AxisPanel_GetAxisRegions(Anal_AxisPanel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link axisType
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_AxisType Anal_AxisPanel_GetAxisType(Anal_AxisPanel self)
{
  
  Anal_AxisType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getAxisType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getAxisType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisPanel.axisUnit

the AixsUnits of the 
AxisPanel
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_AxisUnit Anal_AxisPanel_GetAxisUnit(Anal_AxisPanel self)
{
  
  Anal_AxisUnit obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getAxisUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AxisPanel Anal_AxisPanel_GetByKey(Anal_AxisPanel self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getByKey' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiString Anal_AxisPanel_GetClassName(Anal_AxisPanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getClassName' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiList Anal_AxisPanel_GetFieldNames(Anal_AxisPanel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AxisPanel_GetFullKey(Anal_AxisPanel self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getFullKey' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiBoolean Anal_AxisPanel_GetInConstructor(Anal_AxisPanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiBoolean Anal_AxisPanel_GetIsDeleted(Anal_AxisPanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.isVisible

Whether or not visible in 
the display
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiBoolean Anal_AxisPanel_GetIsVisible(Anal_AxisPanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getIsVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getIsVisible' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.label

enum. 'x', 'y', 'z1', ...
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiString Anal_AxisPanel_GetLabel(Anal_AxisPanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @returns  Local object key
**/
ApiObject Anal_AxisPanel_GetLocalKey(Anal_AxisPanel self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getLocalKey' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiString Anal_AxisPanel_GetPackageName(Anal_AxisPanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getPackageName' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiString Anal_AxisPanel_GetPackageShortName(Anal_AxisPanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisPanel.panelType

the PanelType of the 
AxisPanel
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_PanelType Anal_AxisPanel_GetPanelType(Anal_AxisPanel self)
{
  
  Anal_PanelType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getPanelType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisPanel.parent

link to parent object - 
synonym for spectrumWindowPane
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_SpectrumWindowPane Anal_AxisPanel_GetParent(Anal_AxisPanel self)
{
  
  Anal_SpectrumWindowPane obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getParent' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiString Anal_AxisPanel_GetQualifiedName(Anal_AxisPanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
Impl_MemopsRoot Anal_AxisPanel_GetRoot(Anal_AxisPanel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_SlicePanel Anal_AxisPanel_GetSlicePanel(Anal_AxisPanel self)
{
  
  Anal_SlicePanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSlicePanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getSlicePanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getSlicePanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisPanel.spectrumWindowPane

parent link
  @param  Anal_AxisPanel self
  @returns   the result
**/
Anal_SpectrumWindowPane Anal_AxisPanel_GetSpectrumWindowPane(Anal_AxisPanel self)
{
  
  Anal_SpectrumWindowPane obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowPane");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getSpectrumWindowPane'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getSpectrumWindowPane' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.thickness

Graphical width of panel in 
pixels
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiInteger Anal_AxisPanel_GetThickness(Anal_AxisPanel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getThickness' is not callable");
  
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
  @param  Anal_AxisPanel self
  @returns   the result
**/
Impl_TopObject Anal_AxisPanel_GetTopObject(Anal_AxisPanel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisPanel Anal_AxisPanel_Init(Anal_SpectrumWindowPane parent, ApiMap attrlinks)
{
  
  return Anal_SpectrumWindowPane_NewAxisPanel(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane parent
  @param  char * label
  @returns  the new object
**/
Anal_AxisPanel Anal_AxisPanel_Init_reqd(Anal_SpectrumWindowPane parent, char * label)
{
  
  Anal_AxisPanel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__label = ApiString_New(label);

  PyDict_SetItemString(attrlinks, "label", api__label);
  
  obj = Anal_AxisPanel_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__label);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisRegion Anal_AxisPanel_NewAxisRegion(Anal_AxisPanel self, ApiMap attrlinks)
{
  
  Anal_AxisRegion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'newAxisRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'newAxisRegion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel self
  @returns  the new object
**/
Anal_AxisRegion Anal_AxisPanel_NewAxisRegion_reqd(Anal_AxisPanel self)
{
  
  Anal_AxisRegion  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anal_AxisPanel_NewAxisRegion(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisPanel self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisPanel_RemoveApplicationData(Anal_AxisPanel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AxisPanel
  @param  Anal_AxisPanel self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AxisPanel_Set(Anal_AxisPanel self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisPanel self
  @param  Acco_AccessObject value
**/
void *Anal_AxisPanel_SetAccess(Anal_AxisPanel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setAccess' is not callable");
  
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
  @param  Anal_AxisPanel self
  @param  ApiList values
**/
void *Anal_AxisPanel_SetApplicationData(Anal_AxisPanel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisPanel.axisUnit

the AixsUnits of the 
AxisPanel
  @param  Anal_AxisPanel self
  @param  Anal_AxisUnit value
**/
void *Anal_AxisPanel_SetAxisUnit(Anal_AxisPanel self, Anal_AxisUnit value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setAxisUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.isVisible

Whether or not visible in 
the display
  @param  Anal_AxisPanel self
  @param  ApiBoolean value
**/
void *Anal_AxisPanel_SetIsVisible(Anal_AxisPanel self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setIsVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setIsVisible' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.label

enum. 'x', 'y', 'z1', ...
  @param  Anal_AxisPanel self
  @param  ApiString value
**/
void *Anal_AxisPanel_SetLabel(Anal_AxisPanel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisPanel.panelType

the PanelType of the 
AxisPanel
  @param  Anal_AxisPanel self
  @param  Anal_PanelType value
**/
void *Anal_AxisPanel_SetPanelType(Anal_AxisPanel self, Anal_PanelType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setPanelType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.thickness

Graphical width of panel in 
pixels
  @param  Anal_AxisPanel self
  @param  ApiInteger value
**/
void *Anal_AxisPanel_SetThickness(Anal_AxisPanel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'setThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'setThickness' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AxisPanel.axisRegions

child link to class 
AxisRegion
  @param  Anal_AxisPanel self
  @returns   the result
**/
ApiList Anal_AxisPanel_SortedAxisRegions(Anal_AxisPanel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisPanel: cannot find method 'sortedAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisPanel: method 'sortedAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
