
#include "ccp.h"

/*
  grouping for related Analysis data
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisProject_AddApplicationData(Anal_AnalysisProject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisProject_CheckAllValid(Anal_AnalysisProject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisProject_CheckValid(Anal_AnalysisProject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllActiveRepositories(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllActiveRepositories_keyval0(Anal_AnalysisProject self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllActiveRepositories_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllActiveRepositories_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllActiveRepositories_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
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
ApiList Anal_AnalysisProject_FindAllActiveRepositories_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisPopups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllAnalysisPopups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllAnalysisPopups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllAnalysisPopups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllAnalysisPopups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllAnalysisPopups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllAnalysisPopups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllAnalysisPopups_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllAnalysisPopups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisSpectra");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllAnalysisSpectra'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllAnalysisSpectra' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllAnalysisSpectra(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllAnalysisSpectra(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllAnalysisSpectra(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllAnalysisSpectra(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllAnalysisSpectra_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllAnalysisSpectra(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllApplicationData(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllApplicationData_keyval0(Anal_AnalysisProject self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllApplicationData_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllApplicationData_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisProject_FindAllApplicationData_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
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
ApiList Anal_AnalysisProject_FindAllApplicationData_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisRegionGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllAxisRegionGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllAxisRegionGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllAxisRegionGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllAxisRegionGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllAxisRegionGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllAxisRegionGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllAxisRegionGroups_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllAxisRegionGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisTypes(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllAxisTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllAxisTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisTypes_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllAxisTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisTypes_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllAxisTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisTypes_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllAxisTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisTypes_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllAxisTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllAxisTypes_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllAxisTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisUnits(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisUnits_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisUnits_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisUnits_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllAxisUnits_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllAxisUnits_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllAxisUnits(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllChainMappings(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllChainMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllChainMappings_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllChainMappings_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllChainMappings_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllChainMappings_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllChainMappings_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllMarks(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMarks");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllMarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllMarks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllMarks_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllMarks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllMarks_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllMarks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllMarks_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllMarks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllMarks_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllMarks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllMarks_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllMarks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllPanelTypes(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPanelTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllPanelTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllPanelTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllPanelTypes_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllPanelTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllPanelTypes_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllPanelTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllPanelTypes_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllPanelTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllPanelTypes_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllPanelTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllPanelTypes_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllPanelTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllRulers(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRulers");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllRulers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllRulers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllRulers_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllRulers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllRulers_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllRulers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllRulers_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllRulers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllRulers_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllRulers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllRulers_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllRulers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllSpectrumWindowGroups_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindowGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows(Anal_AnalysisProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findAllSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findAllSpectrumWindows' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows_keyval0(Anal_AnalysisProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
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
ApiSet Anal_AnalysisProject_FindAllSpectrumWindows_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindAllSpectrumWindows(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository_keyval0(Anal_AnalysisProject self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
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
Impl_Repository Anal_AnalysisProject_FindFirstActiveRepository_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_AnalysisPopup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisPopup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstAnalysisPopup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstAnalysisPopup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup_keyval0(Anal_AnalysisProject self)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstAnalysisPopup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisPopup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisPopup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisPopup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link 
to class AnalysisPopup
  @param  Anal_AnalysisProject self
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
Anal_AnalysisPopup Anal_AnalysisProject_FindFirstAnalysisPopup_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisPopup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstAnalysisSpectrum' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum_keyval0(Anal_AnalysisProject self)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstAnalysisSpectrum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisSpectrum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisSpectrum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisSpectrum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child 
link to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
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
Anal_AnalysisSpectrum Anal_AnalysisProject_FindFirstAnalysisSpectrum_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstAnalysisSpectrum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData_keyval0(Anal_AnalysisProject self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
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
Impl_ApplicationData Anal_AnalysisProject_FindFirstApplicationData_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_AxisRegionGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisRegionGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstAxisRegionGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstAxisRegionGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup_keyval0(Anal_AnalysisProject self)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstAxisRegionGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstAxisRegionGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstAxisRegionGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstAxisRegionGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child 
link to class AxisRegionGroup
  @param  Anal_AnalysisProject self
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
Anal_AxisRegionGroup Anal_AnalysisProject_FindFirstAxisRegionGroup_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstAxisRegionGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_AxisType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstAxisType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstAxisType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType_keyval0(Anal_AnalysisProject self)
{
  
  Anal_AxisType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstAxisType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_AxisType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstAxisType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstAxisType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstAxisType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
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
Anal_AxisType Anal_AnalysisProject_FindFirstAxisType_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstAxisType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_AxisUnit obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstAxisUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit_keyval0(Anal_AnalysisProject self)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
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
Anal_AxisUnit Anal_AnalysisProject_FindFirstAxisUnit_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisUnit  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstAxisUnit(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_ChainMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstChainMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstChainMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping_keyval0(Anal_AnalysisProject self)
{
  
  Anal_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.chainMappings

child link 
to class ChainMapping
  @param  Anal_AnalysisProject self
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
Anal_ChainMapping Anal_AnalysisProject_FindFirstChainMapping_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_Mark Anal_AnalysisProject_FindFirstMark(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_Mark obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMark");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstMark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstMark' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_Mark Anal_AnalysisProject_FindFirstMark_keyval0(Anal_AnalysisProject self)
{
  
  Anal_Mark  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstMark(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_Mark Anal_AnalysisProject_FindFirstMark_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_Mark  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstMark(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_Mark Anal_AnalysisProject_FindFirstMark_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_Mark  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstMark(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_Mark Anal_AnalysisProject_FindFirstMark_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_Mark  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstMark(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
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
Anal_Mark Anal_AnalysisProject_FindFirstMark_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_Mark  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstMark(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_PanelType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstPanelType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType_keyval0(Anal_AnalysisProject self)
{
  
  Anal_PanelType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstPanelType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_PanelType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstPanelType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_PanelType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstPanelType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_PanelType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstPanelType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
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
Anal_PanelType Anal_AnalysisProject_FindFirstPanelType_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_PanelType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstPanelType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_Ruler Anal_AnalysisProject_FindFirstRuler(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_Ruler obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRuler");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstRuler'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstRuler' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_Ruler Anal_AnalysisProject_FindFirstRuler_keyval0(Anal_AnalysisProject self)
{
  
  Anal_Ruler  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstRuler(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_Ruler Anal_AnalysisProject_FindFirstRuler_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_Ruler  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstRuler(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_Ruler Anal_AnalysisProject_FindFirstRuler_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_Ruler  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstRuler(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_Ruler Anal_AnalysisProject_FindFirstRuler_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_Ruler  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstRuler(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.rulers

child link to 
class Ruler
  @param  Anal_AnalysisProject self
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
Anal_Ruler Anal_AnalysisProject_FindFirstRuler_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_Ruler  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstRuler(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstSpectrumWindow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup(Anal_AnalysisProject self, ApiMap conditions)
{
  
  Anal_SpectrumWindowGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'findFirstSpectrumWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'findFirstSpectrumWindowGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup_keyval0(Anal_AnalysisProject self)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link to 
class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
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
Anal_SpectrumWindowGroup Anal_AnalysisProject_FindFirstSpectrumWindowGroup_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindowGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow_keyval0(Anal_AnalysisProject self)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow_keyval1(Anal_AnalysisProject self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow_keyval2(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow_keyval3(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child 
link to class SpectrumWindow
  @param  Anal_AnalysisProject self
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
Anal_SpectrumWindow Anal_AnalysisProject_FindFirstSpectrumWindow_keyval4(Anal_AnalysisProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisProject_FindFirstSpectrumWindow(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AnalysisProject_Get(Anal_AnalysisProject self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisProject_GetAccess(Anal_AnalysisProject self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAccess' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisProject_GetActiveAccess(Anal_AnalysisProject self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_GetActiveRepositories(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.activeWindowGroup

Window group 
currently active
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_GetActiveWindowGroup(Anal_AnalysisProject self)
{
  
  Anal_SpectrumWindowGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getActiveWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getActiveWindowGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link to 
class AnalysisPopup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetAnalysisPopups(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisPopups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAnalysisPopups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAnalysisPopups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link to 
class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetAnalysisSpectra(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectra");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAnalysisSpectra'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAnalysisSpectra' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_GetApplicationData(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.autoBackupFreq

NIterval between 
automatic backup (in minutes)
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetAutoBackupFreq(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAutoBackupFreq");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAutoBackupFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAutoBackupFreq' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link to 
class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetAxisRegionGroups(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisRegionGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAxisRegionGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAxisRegionGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to class 
AxisType
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetAxisTypes(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAxisTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAxisTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to class 
AxisUnit
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetAxisUnits(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AnalysisProject Anal_AnalysisProject_GetByKey(Anal_AnalysisProject self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetChainMappings(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getChainMappings' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetClassName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.contourToUnaliased

Contour 
unaliased parts of spectrum?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetContourToUnaliased(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContourToUnaliased");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getContourToUnaliased'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getContourToUnaliased' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetCreatedBy(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.defaultSpectrumFileType

Default 
spectrum file type
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetDefaultSpectrumFileType(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDefaultSpectrumFileType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDefaultSpectrumFileType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDefaultSpectrumFileType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doAssignmentAnnotations

Do peak 
annotations: Assignment?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoAssignmentAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoAssignmentAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoAssignmentAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoAssignmentAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doAutoBackup

Do automatic 
backup.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoAutoBackup(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoAutoBackup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoAutoBackup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoAutoBackup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doChainAnnotations

Do peak 
annotations: Chains?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoChainAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoChainAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoChainAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoChainAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doDetailAnnotations

Do peak 
annotations: Details?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoDetailAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoDetailAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoDetailAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoDetailAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doMeritAnnotations

Do peak 
annotations: Merit
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoMeritAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoMeritAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoMeritAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoMeritAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doMinimalAnnotations

Should 
minimal annotations be used?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoMinimalAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoMinimalAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoMinimalAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoMinimalAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doMolSysAnnotations

Do peak 
annotations: MolSystems?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoMolSysAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoMolSysAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoMolSysAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoMolSysAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.doSpinSystemAnnotations

Do peak 
annotations: Spin Systems?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetDoSpinSystemAnnotations(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoSpinSystemAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getDoSpinSystemAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getDoSpinSystemAnnotations' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_GetFieldNames(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AnalysisProject_GetFullKey(Anal_AnalysisProject self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.globalContourScale

Global 
contouring scale
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetGlobalContourScale(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGlobalContourScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getGlobalContourScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getGlobalContourScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetGuid(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getGuid' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetInConstructor(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsDeleted(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsLoaded(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsModifiable(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsModified(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsReading(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.isThreadingAllowed

May program 
be run as multiple threads?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetIsThreadingAllowed(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsThreadingAllowed");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getIsThreadingAllowed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getIsThreadingAllowed' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetLastUnlockedBy(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.linkPeakListsData

Input data 
for linkPeakLists
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetLinkPeakListsData(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkPeakListsData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getLinkPeakListsData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getLinkPeakListsData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.linkSeqSpinSystemsData

input 
dat for linkSeqSpinSystems
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetLinkSeqSpinSystemsData(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkSeqSpinSystemsData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getLinkSeqSpinSystemsData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getLinkSeqSpinSystemsData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @returns  Local object key
**/
ApiObject Anal_AnalysisProject_GetLocalKey(Anal_AnalysisProject self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.marks

child link to class Mark
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetMarks(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMarks");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMarks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.maxMarks

Maxc no. of marks
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetMaxMarks(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxMarks");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMaxMarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMaxMarks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.maxRulers

Max no. of rulers
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetMaxRulers(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxRulers");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMaxRulers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMaxRulers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.memopsRoot

parent link
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisProject_GetMemopsRoot(Anal_AnalysisProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.meritAnnotationBad

Annotation 
for merit=bad
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetMeritAnnotationBad(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeritAnnotationBad");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMeritAnnotationBad'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMeritAnnotationBad' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.meritAnnotationGood

Annotation 
for merit=good
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetMeritAnnotationGood(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeritAnnotationGood");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMeritAnnotationGood'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMeritAnnotationGood' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccpnmr.Analysis.AnalysisProject.meritAnnotationMediocre

Annotation for 
merit=mediocre
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetMeritAnnotationMediocre(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeritAnnotationMediocre");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getMeritAnnotationMediocre'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getMeritAnnotationMediocre' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.name

name of AnalysisProject
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.nmrProject

Nmr project to which 
AnalysisProject refers
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Nmr_NmrProject Anal_AnalysisProject_GetNmrProject(Anal_AnalysisProject self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Impl_PackageLocator Anal_AnalysisProject_GetPackageLocator(Anal_AnalysisProject self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPackageLocator' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPackageName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPackageName' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPackageShortName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to class 
PanelType
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetPanelTypes(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPanelTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPanelTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPanelTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.parent

link to parent object - 
synonym for memopsRoot
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisProject_GetParent(Anal_AnalysisProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakDrawMethod

Peak mark 
drawing method
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPeakDrawMethod(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDrawMethod");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakDrawMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakDrawMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindBuffer

Peak finding 
buffer extra width in pixels
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetPeakFindBuffer(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindBuffer");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindBuffer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindBuffer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindDrop

The fraction of 
the maximum height that the data must drop
by in all directions in order 
to be considered a peak, in peak finding.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPeakFindDrop(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindDrop");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindDrop'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindDrop' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindHaveHigh

Find positive 
extrema in peak finding?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPeakFindHaveHigh(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindHaveHigh");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindHaveHigh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindHaveHigh' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindHaveLow

Find negative 
extrema in peak finding?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPeakFindHaveLow(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindHaveLow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindHaveLow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindHaveLow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindNonadjacent

Consider 
positions that differ in more than one
coordinate (by +-1), and not just 
in one coordinate, in peak finding?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPeakFindNonadjacent(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindNonadjacent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindNonadjacent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindNonadjacent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindScale

Peak finding 
scale
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPeakFindScale(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindThickness

Peak finding 
thickness
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetPeakFindThickness(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindThickness' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakFindVolumeMethod

Volume 
integration method for peak find
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPeakFindVolumeMethod(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindVolumeMethod");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakFindVolumeMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakFindVolumeMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakIntensityScale

Peak 
Intensity scale
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPeakIntensityScale(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakIntensityScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakIntensityScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakIntensityScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakPixelSize

Peak size in 
pixels
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiInteger Anal_AnalysisProject_GetPeakPixelSize(Anal_AnalysisProject self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakPixelSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakPixelSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakPixelSize' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.peakVolumeScale

Peak volume 
scale
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPeakVolumeScale(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakVolumeScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPeakVolumeScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPeakVolumeScale' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinFileName

Window file 
name to print to.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinFileName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinFileName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinFileName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinInColor

Should windows 
be printed in color
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPrintWinInColor(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinInColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinInColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinInColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinOrientation

Print 
WIndow in orientation
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinOrientation(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinOrientation");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinOrientation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinOrientation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinOtherHeight

Paper 
height for 'other' paper print sizes
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPrintWinOtherHeight(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinOtherHeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinOtherHeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinOtherHeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinOtherUnit

Printer 
measurement unit for 'other' paper sizes
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinOtherUnit(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinOtherUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinOtherUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinOtherUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinOtherWidth

Paper width 
for 'other' paper print sizes
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPrintWinOtherWidth(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinOtherWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinOtherWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinOtherWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinOutputFormat

Format for 
window printing
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinOutputFormat(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinOutputFormat");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinOutputFormat'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinOutputFormat' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinPaperSize

Paper size 
for window printing
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinPaperSize(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinPaperSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinPaperSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinPaperSize' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinScaling

window print 
scaling
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiFloat Anal_AnalysisProject_GetPrintWinScaling(Anal_AnalysisProject self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinScaling");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinScaling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinShowsDateTime

Show data 
and time on window print
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPrintWinShowsDateTime(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinShowsDateTime");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinShowsDateTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinShowsDateTime' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinShowsFileName

Show file 
name on window print
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPrintWinShowsFileName(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinShowsFileName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinShowsFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinShowsFileName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinTickOutside

Print 
window ticks outside (True), inside (Falsde) or not at all (not set).
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetPrintWinTickOutside(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinTickOutside");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinTickOutside'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinTickOutside' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinTickPlacement

Which 
sides (n, s, e, w) to print ticks on for window printing.
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinTickPlacement(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinTickPlacement");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinTickPlacement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinTickPlacement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.printWinTitle

Title for window 
printing
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetPrintWinTitle(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrintWinTitle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getPrintWinTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getPrintWinTitle' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetQualifiedName(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisProject_GetRoot(Anal_AnalysisProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetRulers(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRulers");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getRulers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getRulers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.spectrumFont

Font to use for 
spectrum (annotations)
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiString Anal_AnalysisProject_GetSpectrumFont(Anal_AnalysisProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumFont");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getSpectrumFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getSpectrumFont' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child link 
to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetSpectrumWindowGroups(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link to 
class SpectrumWindow
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiSet Anal_AnalysisProject_GetSpectrumWindows(Anal_AnalysisProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getSpectrumWindows' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @returns   the result
**/
Impl_TopObject Anal_AnalysisProject_GetTopObject(Anal_AnalysisProject self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisProject.useBootstrap

Use bootstrap 
error estimation in fitting?
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiBoolean Anal_AnalysisProject_GetUseBootstrap(Anal_AnalysisProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseBootstrap");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'getUseBootstrap'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'getUseBootstrap' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AnalysisProject
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisProject Anal_AnalysisProject_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewAnalysisProject(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AnalysisProject
  @param  Impl_MemopsRoot parent
  @param  char * name
  @param  Nmr_NmrProject nmrProject
  @returns  the new object
**/
Anal_AnalysisProject Anal_AnalysisProject_Init_reqd(Impl_MemopsRoot parent, char * name, Nmr_NmrProject nmrProject)
{
  
  Anal_AnalysisProject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "nmrProject", nmrProject);
  
  obj = Anal_AnalysisProject_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisPopup Anal_AnalysisProject_NewAnalysisPopup(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_AnalysisPopup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisPopup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newAnalysisPopup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newAnalysisPopup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject self
  @param  char * name
  @returns  the new object
**/
Anal_AnalysisPopup Anal_AnalysisProject_NewAnalysisPopup_reqd(Anal_AnalysisProject self, char * name)
{
  
  Anal_AnalysisPopup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewAnalysisPopup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_NewAnalysisSpectrum(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newAnalysisSpectrum' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @param  Nmr_DataSource dataSource
  @returns  the new object
**/
Anal_AnalysisSpectrum Anal_AnalysisProject_NewAnalysisSpectrum_reqd(Anal_AnalysisProject self, Nmr_DataSource dataSource)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataSource", dataSource);
  
  obj = Anal_AnalysisProject_NewAnalysisSpectrum(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisRegionGroup Anal_AnalysisProject_NewAxisRegionGroup(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_AxisRegionGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisRegionGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newAxisRegionGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newAxisRegionGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject self
  @param  char * name
  @returns  the new object
**/
Anal_AxisRegionGroup Anal_AnalysisProject_NewAxisRegionGroup_reqd(Anal_AnalysisProject self, char * name)
{
  
  Anal_AxisRegionGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewAxisRegionGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisType
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisType Anal_AnalysisProject_NewAxisType(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_AxisType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newAxisType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newAxisType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisType
  @param  Anal_AnalysisProject self
  @param  char * name
  @returns  the new object
**/
Anal_AxisType Anal_AnalysisProject_NewAxisType_reqd(Anal_AnalysisProject self, char * name)
{
  
  Anal_AxisType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewAxisType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisUnit
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisUnit Anal_AnalysisProject_NewAxisUnit(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_AxisUnit obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAxisUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newAxisUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newAxisUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AxisUnit
  @param  Anal_AnalysisProject self
  @param  char * unit
  @returns  the new object
**/
Anal_AxisUnit Anal_AnalysisProject_NewAxisUnit_reqd(Anal_AnalysisProject self, char * unit)
{
  
  Anal_AxisUnit  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__unit = ApiString_New(unit);

  PyDict_SetItemString(attrlinks, "unit", api__unit);
  
  obj = Anal_AnalysisProject_NewAxisUnit(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__unit);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_ChainMapping Anal_AnalysisProject_NewChainMapping(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_ChainMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newChainMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newChainMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject self
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
Anal_ChainMapping Anal_AnalysisProject_NewChainMapping_reqd(Anal_AnalysisProject self, char * chainCode, char * molSystemCode)
{
  
  Anal_ChainMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);
  ApiString api__molSystemCode = ApiString_New(molSystemCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "molSystemCode", api__molSystemCode);
  
  obj = Anal_AnalysisProject_NewChainMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  Py_DECREF(api__molSystemCode);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_Mark Anal_AnalysisProject_NewMark(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_Mark obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMark");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newMark'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newMark' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject self
  @returns  the new object
**/
Anal_Mark Anal_AnalysisProject_NewMark_reqd(Anal_AnalysisProject self)
{
  
  Anal_Mark  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anal_AnalysisProject_NewMark(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.PanelType
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_PanelType Anal_AnalysisProject_NewPanelType(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_PanelType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newPanelType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.PanelType
  @param  Anal_AnalysisProject self
  @param  Anal_AxisType axisType
  @param  char * name
  @returns  the new object
**/
Anal_PanelType Anal_AnalysisProject_NewPanelType_reqd(Anal_AnalysisProject self, Anal_AxisType axisType, char * name)
{
  
  Anal_PanelType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "axisType", axisType);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewPanelType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.Ruler
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_Ruler Anal_AnalysisProject_NewRuler(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_Ruler obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRuler");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newRuler'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newRuler' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.Ruler
  @param  Anal_AnalysisProject self
  @param  Anal_PanelType panelType
  @param  float position
  @returns  the new object
**/
Anal_Ruler Anal_AnalysisProject_NewRuler_reqd(Anal_AnalysisProject self, Anal_PanelType panelType, float position)
{
  
  Anal_Ruler  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__position = ApiFloat_New(position);

  PyDict_SetItemString(attrlinks, "panelType", panelType);
  PyDict_SetItemString(attrlinks, "position", api__position);
  
  obj = Anal_AnalysisProject_NewRuler(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__position);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindow Anal_AnalysisProject_NewSpectrumWindow(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_SpectrumWindow obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectrumWindow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newSpectrumWindow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newSpectrumWindow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_NewSpectrumWindowGroup(Anal_AnalysisProject self, ApiMap attrlinks)
{
  
  Anal_SpectrumWindowGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectrumWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'newSpectrumWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'newSpectrumWindowGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @param  char * name
  @returns  the new object
**/
Anal_SpectrumWindowGroup Anal_AnalysisProject_NewSpectrumWindowGroup_reqd(Anal_AnalysisProject self, char * name)
{
  
  Anal_SpectrumWindowGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewSpectrumWindowGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject self
  @param  char * name
  @returns  the new object
**/
Anal_SpectrumWindow Anal_AnalysisProject_NewSpectrumWindow_reqd(Anal_AnalysisProject self, char * name)
{
  
  Anal_SpectrumWindow  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AnalysisProject_NewSpectrumWindow(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisProject self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisProject_RemoveApplicationData(Anal_AnalysisProject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AnalysisProject_Set(Anal_AnalysisProject self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisProject self
  @param  Acco_AccessObject value
**/
void *Anal_AnalysisProject_SetAccess(Anal_AnalysisProject self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.activeWindowGroup

Window group 
currently active
  @param  Anal_AnalysisProject self
  @param  Anal_SpectrumWindowGroup value
**/
void *Anal_AnalysisProject_SetActiveWindowGroup(Anal_AnalysisProject self, Anal_SpectrumWindowGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setActiveWindowGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setActiveWindowGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setActiveWindowGroup' is not callable");
  
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
  @param  Anal_AnalysisProject self
  @param  ApiList values
**/
void *Anal_AnalysisProject_SetApplicationData(Anal_AnalysisProject self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.autoBackupFreq

NIterval between 
automatic backup (in minutes)
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetAutoBackupFreq(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAutoBackupFreq");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setAutoBackupFreq'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setAutoBackupFreq' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.contourToUnaliased

Contour 
unaliased parts of spectrum?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetContourToUnaliased(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContourToUnaliased");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setContourToUnaliased'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setContourToUnaliased' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetCreatedBy(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.defaultSpectrumFileType

Default 
spectrum file type
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetDefaultSpectrumFileType(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDefaultSpectrumFileType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDefaultSpectrumFileType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDefaultSpectrumFileType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doAssignmentAnnotations

Do peak 
annotations: Assignment?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoAssignmentAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoAssignmentAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoAssignmentAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoAssignmentAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doAutoBackup

Do automatic 
backup.
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoAutoBackup(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoAutoBackup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoAutoBackup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoAutoBackup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doChainAnnotations

Do peak 
annotations: Chains?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoChainAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoChainAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoChainAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoChainAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doDetailAnnotations

Do peak 
annotations: Details?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoDetailAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoDetailAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoDetailAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoDetailAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doMeritAnnotations

Do peak 
annotations: Merit
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoMeritAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoMeritAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoMeritAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoMeritAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doMinimalAnnotations

Should 
minimal annotations be used?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoMinimalAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoMinimalAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoMinimalAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoMinimalAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doMolSysAnnotations

Do peak 
annotations: MolSystems?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoMolSysAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoMolSysAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoMolSysAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoMolSysAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.doSpinSystemAnnotations

Do peak 
annotations: Spin Systems?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetDoSpinSystemAnnotations(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoSpinSystemAnnotations");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setDoSpinSystemAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setDoSpinSystemAnnotations' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.globalContourScale

Global 
contouring scale
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetGlobalContourScale(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGlobalContourScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setGlobalContourScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setGlobalContourScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetGuid(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetIsModifiable(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.isThreadingAllowed

May program 
be run as multiple threads?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetIsThreadingAllowed(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsThreadingAllowed");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setIsThreadingAllowed'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setIsThreadingAllowed' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetLastUnlockedBy(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.linkPeakListsData

Input data 
for linkPeakLists
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetLinkPeakListsData(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinkPeakListsData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setLinkPeakListsData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setLinkPeakListsData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.linkSeqSpinSystemsData

input 
dat for linkSeqSpinSystems
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetLinkSeqSpinSystemsData(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinkSeqSpinSystemsData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setLinkSeqSpinSystemsData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setLinkSeqSpinSystemsData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.maxMarks

Maxc no. of marks
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetMaxMarks(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxMarks");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setMaxMarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setMaxMarks' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.maxRulers

Max no. of rulers
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetMaxRulers(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxRulers");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setMaxRulers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setMaxRulers' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.meritAnnotationBad

Annotation 
for merit=bad
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetMeritAnnotationBad(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeritAnnotationBad");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setMeritAnnotationBad'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setMeritAnnotationBad' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.meritAnnotationGood

Annotation 
for merit=good
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetMeritAnnotationGood(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeritAnnotationGood");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setMeritAnnotationGood'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setMeritAnnotationGood' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccpnmr.Analysis.AnalysisProject.meritAnnotationMediocre

Annotation for 
merit=mediocre
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetMeritAnnotationMediocre(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeritAnnotationMediocre");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setMeritAnnotationMediocre'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setMeritAnnotationMediocre' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.name

name of AnalysisProject
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetName(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.nmrProject

Nmr project to which 
AnalysisProject refers
  @param  Anal_AnalysisProject self
  @param  Nmr_NmrProject value
**/
void *Anal_AnalysisProject_SetNmrProject(Anal_AnalysisProject self, Nmr_NmrProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setNmrProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakDrawMethod

Peak mark 
drawing method
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPeakDrawMethod(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDrawMethod");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakDrawMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakDrawMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindBuffer

Peak finding 
buffer extra width in pixels
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetPeakFindBuffer(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindBuffer");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindBuffer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindBuffer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindDrop

The fraction of 
the maximum height that the data must drop
by in all directions in order 
to be considered a peak, in peak finding.
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPeakFindDrop(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindDrop");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindDrop'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindDrop' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindHaveHigh

Find positive 
extrema in peak finding?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPeakFindHaveHigh(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindHaveHigh");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindHaveHigh'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindHaveHigh' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindHaveLow

Find negative 
extrema in peak finding?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPeakFindHaveLow(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindHaveLow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindHaveLow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindHaveLow' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindNonadjacent

Consider 
positions that differ in more than one
coordinate (by +-1), and not just 
in one coordinate, in peak finding?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPeakFindNonadjacent(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindNonadjacent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindNonadjacent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindNonadjacent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindScale

Peak finding 
scale
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPeakFindScale(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindThickness

Peak finding 
thickness
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetPeakFindThickness(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindThickness' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakFindVolumeMethod

Volume 
integration method for peak find
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPeakFindVolumeMethod(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindVolumeMethod");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakFindVolumeMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakFindVolumeMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakIntensityScale

Peak 
Intensity scale
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPeakIntensityScale(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakIntensityScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakIntensityScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakIntensityScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakPixelSize

Peak size in 
pixels
  @param  Anal_AnalysisProject self
  @param  ApiInteger value
**/
void *Anal_AnalysisProject_SetPeakPixelSize(Anal_AnalysisProject self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakPixelSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakPixelSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakPixelSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.peakVolumeScale

Peak volume 
scale
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPeakVolumeScale(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakVolumeScale");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPeakVolumeScale'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPeakVolumeScale' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinFileName

Window file 
name to print to.
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinFileName(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinFileName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinFileName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinInColor

Should windows 
be printed in color
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPrintWinInColor(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinInColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinInColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinInColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinOrientation

Print 
WIndow in orientation
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinOrientation(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinOrientation");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinOrientation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinOrientation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinOtherHeight

Paper 
height for 'other' paper print sizes
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPrintWinOtherHeight(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinOtherHeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinOtherHeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinOtherHeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinOtherUnit

Printer 
measurement unit for 'other' paper sizes
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinOtherUnit(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinOtherUnit");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinOtherUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinOtherUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinOtherWidth

Paper width 
for 'other' paper print sizes
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPrintWinOtherWidth(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinOtherWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinOtherWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinOtherWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinOutputFormat

Format for 
window printing
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinOutputFormat(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinOutputFormat");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinOutputFormat'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinOutputFormat' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinPaperSize

Paper size 
for window printing
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinPaperSize(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinPaperSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinPaperSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinPaperSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinScaling

window print 
scaling
  @param  Anal_AnalysisProject self
  @param  ApiFloat value
**/
void *Anal_AnalysisProject_SetPrintWinScaling(Anal_AnalysisProject self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinScaling");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinScaling' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinShowsDateTime

Show data 
and time on window print
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPrintWinShowsDateTime(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinShowsDateTime");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinShowsDateTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinShowsDateTime' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinShowsFileName

Show file 
name on window print
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPrintWinShowsFileName(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinShowsFileName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinShowsFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinShowsFileName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinTickOutside

Print 
window ticks outside (True), inside (Falsde) or not at all (not set).
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetPrintWinTickOutside(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinTickOutside");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinTickOutside'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinTickOutside' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinTickPlacement

Which 
sides (n, s, e, w) to print ticks on for window printing.
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinTickPlacement(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinTickPlacement");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinTickPlacement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinTickPlacement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.printWinTitle

Title for window 
printing
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetPrintWinTitle(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrintWinTitle");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setPrintWinTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setPrintWinTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.spectrumFont

Font to use for 
spectrum (annotations)
  @param  Anal_AnalysisProject self
  @param  ApiString value
**/
void *Anal_AnalysisProject_SetSpectrumFont(Anal_AnalysisProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectrumFont");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setSpectrumFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setSpectrumFont' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisProject.useBootstrap

Use bootstrap 
error estimation in fitting?
  @param  Anal_AnalysisProject self
  @param  ApiBoolean value
**/
void *Anal_AnalysisProject_SetUseBootstrap(Anal_AnalysisProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseBootstrap");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'setUseBootstrap'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'setUseBootstrap' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.analysisPopups

child link to 
class AnalysisPopup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedAnalysisPopups(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisPopups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedAnalysisPopups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedAnalysisPopups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.analysisSpectra

child link 
to class AnalysisSpectrum
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedAnalysisSpectra(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisSpectra");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedAnalysisSpectra'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedAnalysisSpectra' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.axisRegionGroups

child link 
to class AxisRegionGroup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedAxisRegionGroups(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisRegionGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedAxisRegionGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedAxisRegionGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.axisTypes

child link to 
class AxisType
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedAxisTypes(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedAxisTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedAxisTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.axisUnits

child link to 
class AxisUnit
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedAxisUnits(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisUnits");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedAxisUnits'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedAxisUnits' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.chainMappings

child link to 
class ChainMapping
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedChainMappings(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedChainMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.marks

child link to class 
Mark
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedMarks(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMarks");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedMarks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedMarks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.panelTypes

child link to 
class PanelType
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedPanelTypes(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPanelTypes");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedPanelTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedPanelTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.rulers

child link to class 
Ruler
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedRulers(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRulers");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedRulers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedRulers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.spectrumWindowGroups

child 
link to class SpectrumWindowGroup
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedSpectrumWindowGroups(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindowGroups");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedSpectrumWindowGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedSpectrumWindowGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisProject.spectrumWindows

child link 
to class SpectrumWindow
  @param  Anal_AnalysisProject self
  @returns   the result
**/
ApiList Anal_AnalysisProject_SortedSpectrumWindows(Anal_AnalysisProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: cannot find method 'sortedSpectrumWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisProject: method 'sortedSpectrumWindows' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
