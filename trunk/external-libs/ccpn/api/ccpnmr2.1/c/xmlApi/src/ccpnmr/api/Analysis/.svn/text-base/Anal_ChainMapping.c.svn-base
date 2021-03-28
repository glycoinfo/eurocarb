
#include "ccp.h"

/*
  ChainMaping - serves to organise AtomSetMappings
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  Impl_ApplicationData value
**/
void *Anal_ChainMapping_AddApplicationData(Anal_ChainMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean complete
**/
void *Anal_ChainMapping_CheckAllValid(Anal_ChainMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean complete
**/
void *Anal_ChainMapping_CheckValid(Anal_ChainMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'checkValid' is not callable");
  
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
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_ChainMapping_FindAllApplicationData(Anal_ChainMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_ChainMapping_FindAllApplicationData_keyval0(Anal_ChainMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_ChainMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_ChainMapping_FindAllApplicationData_keyval1(Anal_ChainMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_ChainMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_ChainMapping_FindAllApplicationData_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_ChainMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_ChainMapping_FindAllApplicationData_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_ChainMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
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
ApiList Anal_ChainMapping_FindAllApplicationData_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_ChainMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_ChainMapping_FindAllResidueMappings(Anal_ChainMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'findAllResidueMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'findAllResidueMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval0(Anal_ChainMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_ChainMapping_FindAllResidueMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval1(Anal_ChainMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_ChainMapping_FindAllResidueMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_ChainMapping_FindAllResidueMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_ChainMapping_FindAllResidueMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
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
ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_ChainMapping_FindAllResidueMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData(Anal_ChainMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval0(Anal_ChainMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_ChainMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval1(Anal_ChainMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_ChainMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_ChainMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_ChainMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
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
Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_ChainMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping(Anal_ChainMapping self, ApiMap conditions)
{
  
  Anal_ResidueMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'findFirstResidueMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'findFirstResidueMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @returns  the first value that satisfies the conditions 
**/
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval0(Anal_ChainMapping self)
{
  
  Anal_ResidueMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_ChainMapping_FindFirstResidueMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval1(Anal_ChainMapping self, char * key, ApiObject value)
{
  
  Anal_ResidueMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_ChainMapping_FindFirstResidueMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_ResidueMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_ChainMapping_FindFirstResidueMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_ResidueMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_ChainMapping_FindFirstResidueMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
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
Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_ResidueMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_ChainMapping_FindFirstResidueMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_ChainMapping_Get(Anal_ChainMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ChainMapping self
  @returns   the result
**/
Acco_AccessObject Anal_ChainMapping_GetAccess(Anal_ChainMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getAccess' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
Acco_AccessObject Anal_ChainMapping_GetActiveAccess(Anal_ChainMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.ChainMapping.analysisProject

parent link
  @param  Anal_ChainMapping self
  @returns   the result
**/
Anal_AnalysisProject Anal_ChainMapping_GetAnalysisProject(Anal_ChainMapping self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiList Anal_ChainMapping_GetApplicationData(Anal_ChainMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_ChainMapping Anal_ChainMapping_GetByKey(Anal_ChainMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_ChainMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chain
  @param  Anal_ChainMapping self
  @returns   the result
**/
Mols_Chain Anal_ChainMapping_GetChain(Anal_ChainMapping self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.ChainMapping.chainCode

key for the chain, used 
to derive chain link
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetChainCode(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainCode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getChainCode' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetClassName(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getClassName' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiList Anal_ChainMapping_GetFieldNames(Anal_ChainMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_ChainMapping_GetFullKey(Anal_ChainMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getFullKey' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiBoolean Anal_ChainMapping_GetInConstructor(Anal_ChainMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getInConstructor' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiBoolean Anal_ChainMapping_GetIsDeleted(Anal_ChainMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @returns  Local object key
**/
ApiObject Anal_ChainMapping_GetLocalKey(Anal_ChainMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.ChainMapping.molSystemCode

key for the 
molSystem, used to derive molSystem link
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetMolSystemCode(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemCode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getMolSystemCode' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetPackageName(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getPackageName' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetPackageShortName(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.ChainMapping.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_ChainMapping self
  @returns   the result
**/
Anal_AnalysisProject Anal_ChainMapping_GetParent(Anal_ChainMapping self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getParent' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiString Anal_ChainMapping_GetQualifiedName(Anal_ChainMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiSet Anal_ChainMapping_GetResidueMappings(Anal_ChainMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getResidueMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getResidueMappings' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
Impl_MemopsRoot Anal_ChainMapping_GetRoot(Anal_ChainMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getRoot' is not callable");
  
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
  @param  Anal_ChainMapping self
  @returns   the result
**/
Impl_TopObject Anal_ChainMapping_GetTopObject(Anal_ChainMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_ChainMapping Anal_ChainMapping_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewChainMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject parent
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
Anal_ChainMapping Anal_ChainMapping_Init_reqd(Anal_AnalysisProject parent, char * chainCode, char * molSystemCode)
{
  
  Anal_ChainMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Anal_ChainMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_ResidueMapping Anal_ChainMapping_NewResidueMapping(Anal_ChainMapping self, ApiMap attrlinks)
{
  
  Anal_ResidueMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidueMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'newResidueMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'newResidueMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiInteger seqId
  @returns  the new object
**/
Anal_ResidueMapping Anal_ChainMapping_NewResidueMapping_reqd(Anal_ChainMapping self, ApiInteger seqId)
{
  
  Anal_ResidueMapping  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "seqId", seqId);
  
  obj = Anal_ChainMapping_NewResidueMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  Impl_ApplicationData value
**/
void *Anal_ChainMapping_RemoveApplicationData(Anal_ChainMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_ChainMapping_Set(Anal_ChainMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ChainMapping self
  @param  Acco_AccessObject value
**/
void *Anal_ChainMapping_SetAccess(Anal_ChainMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'setAccess' is not callable");
  
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
  @param  Anal_ChainMapping self
  @param  ApiList values
**/
void *Anal_ChainMapping_SetApplicationData(Anal_ChainMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.ChainMapping.chainCode

key for the chain, used 
to derive chain link
  @param  Anal_ChainMapping self
  @param  ApiString value
**/
void *Anal_ChainMapping_SetChainCode(Anal_ChainMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainCode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'setChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'setChainCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.ChainMapping.molSystemCode

key for the 
molSystem, used to derive molSystem link
  @param  Anal_ChainMapping self
  @param  ApiString value
**/
void *Anal_ChainMapping_SetMolSystemCode(Anal_ChainMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystemCode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'setMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'setMolSystemCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns   the result
**/
ApiList Anal_ChainMapping_SortedResidueMappings(Anal_ChainMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.ChainMapping: cannot find method 'sortedResidueMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.ChainMapping: method 'sortedResidueMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
