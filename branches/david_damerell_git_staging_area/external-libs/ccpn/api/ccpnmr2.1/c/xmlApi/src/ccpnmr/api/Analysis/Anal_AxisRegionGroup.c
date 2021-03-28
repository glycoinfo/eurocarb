
#include "ccp.h"

/*
  Group of axis regions which are tied together. Used e.g. for strip plots.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisRegionGroup_AddApplicationData(Anal_AxisRegionGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Anal_AxisRegion value
**/
void *Anal_AxisRegionGroup_AddAxisRegion(Anal_AxisRegionGroup self, Anal_AxisRegion value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAxisRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'addAxisRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'addAxisRegion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean complete
**/
void *Anal_AxisRegionGroup_CheckAllValid(Anal_AxisRegionGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean complete
**/
void *Anal_AxisRegionGroup_CheckValid(Anal_AxisRegionGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'checkValid' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegionGroup_FindAllApplicationData(Anal_AxisRegionGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval0(Anal_AxisRegionGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegionGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegionGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegionGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegionGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
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
ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegionGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions(Anal_AxisRegionGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'findAllAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'findAllAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval0(Anal_AxisRegionGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegionGroup_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegionGroup_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegionGroup_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegionGroup_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
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
ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegionGroup_FindAllAxisRegions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData(Anal_AxisRegionGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval0(Anal_AxisRegionGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegionGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegionGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegionGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegionGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
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
Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegionGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion(Anal_AxisRegionGroup self, ApiMap conditions)
{
  
  Anal_AxisRegion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'findFirstAxisRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'findFirstAxisRegion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval0(Anal_AxisRegionGroup self)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegionGroup_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegionGroup_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegionGroup_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegionGroup_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
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
Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisRegion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegionGroup_FindFirstAxisRegion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AxisRegionGroup_Get(Anal_AxisRegionGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Acco_AccessObject Anal_AxisRegionGroup_GetAccess(Anal_AxisRegionGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getAccess' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Acco_AccessObject Anal_AxisRegionGroup_GetActiveAccess(Anal_AxisRegionGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.analysisProject

parent link
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Anal_AnalysisProject Anal_AxisRegionGroup_GetAnalysisProject(Anal_AxisRegionGroup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiList Anal_AxisRegionGroup_GetApplicationData(Anal_AxisRegionGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiSet Anal_AxisRegionGroup_GetAxisRegions(Anal_AxisRegionGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AxisRegionGroup Anal_AxisRegionGroup_GetByKey(Anal_AxisRegionGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AxisRegionGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getByKey' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiString Anal_AxisRegionGroup_GetClassName(Anal_AxisRegionGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getClassName' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiList Anal_AxisRegionGroup_GetFieldNames(Anal_AxisRegionGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AxisRegionGroup_GetFullKey(Anal_AxisRegionGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getFullKey' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiBoolean Anal_AxisRegionGroup_GetInConstructor(Anal_AxisRegionGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiBoolean Anal_AxisRegionGroup_GetIsDeleted(Anal_AxisRegionGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  Local object key
**/
ApiObject Anal_AxisRegionGroup_GetLocalKey(Anal_AxisRegionGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.name

name of AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiString Anal_AxisRegionGroup_GetName(Anal_AxisRegionGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getName' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiString Anal_AxisRegionGroup_GetPackageName(Anal_AxisRegionGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getPackageName' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiString Anal_AxisRegionGroup_GetPackageShortName(Anal_AxisRegionGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link panelType
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Anal_PanelType Anal_AxisRegionGroup_GetPanelType(Anal_AxisRegionGroup self)
{
  
  Anal_PanelType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getPanelType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Anal_AnalysisProject Anal_AxisRegionGroup_GetParent(Anal_AxisRegionGroup self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getParent' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiString Anal_AxisRegionGroup_GetQualifiedName(Anal_AxisRegionGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Impl_MemopsRoot Anal_AxisRegionGroup_GetRoot(Anal_AxisRegionGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiInteger Anal_AxisRegionGroup_GetSerial(Anal_AxisRegionGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getSerial' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
Impl_TopObject Anal_AxisRegionGroup_GetTopObject(Anal_AxisRegionGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisRegionGroup Anal_AxisRegionGroup_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewAxisRegionGroup(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
Anal_AxisRegionGroup Anal_AxisRegionGroup_Init_reqd(Anal_AnalysisProject parent, char * name)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AxisRegionGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisRegionGroup_RemoveApplicationData(Anal_AxisRegionGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Anal_AxisRegion value
**/
void *Anal_AxisRegionGroup_RemoveAxisRegion(Anal_AxisRegionGroup self, Anal_AxisRegion value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAxisRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'removeAxisRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'removeAxisRegion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AxisRegionGroup_Set(Anal_AxisRegionGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegionGroup self
  @param  Acco_AccessObject value
**/
void *Anal_AxisRegionGroup_SetAccess(Anal_AxisRegionGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'setAccess' is not callable");
  
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
  @param  Anal_AxisRegionGroup self
  @param  ApiList values
**/
void *Anal_AxisRegionGroup_SetApplicationData(Anal_AxisRegionGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiSet values
**/
void *Anal_AxisRegionGroup_SetAxisRegions(Anal_AxisRegionGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'setAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'setAxisRegions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.name

name of AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString value
**/
void *Anal_AxisRegionGroup_SetName(Anal_AxisRegionGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegionGroup self
  @param  ApiInteger value
**/
void *Anal_AxisRegionGroup_SetSerial(Anal_AxisRegionGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
ApiList Anal_AxisRegionGroup_SortedAxisRegions(Anal_AxisRegionGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisRegions");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: cannot find method 'sortedAxisRegions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegionGroup: method 'sortedAxisRegions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
