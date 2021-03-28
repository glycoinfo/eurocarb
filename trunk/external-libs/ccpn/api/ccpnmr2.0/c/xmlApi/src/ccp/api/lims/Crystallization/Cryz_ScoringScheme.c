
#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  Impl_ApplicationData value
**/
void *Cryz_ScoringScheme_AddApplicationData(Cryz_ScoringScheme self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  ApiBoolean complete
**/
void *Cryz_ScoringScheme_CheckAllValid(Cryz_ScoringScheme self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  ApiBoolean complete
**/
void *Cryz_ScoringScheme_CheckValid(Cryz_ScoringScheme self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'checkValid' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ScoringScheme_FindAllApplicationData(Cryz_ScoringScheme self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'findAllApplicationData' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ScoringScheme_FindAllApplicationData_keyval0(Cryz_ScoringScheme self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ScoringScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ScoringScheme_FindAllApplicationData_keyval1(Cryz_ScoringScheme self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ScoringScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ScoringScheme_FindAllApplicationData_keyval2(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ScoringScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_ScoringScheme_FindAllApplicationData_keyval3(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ScoringScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
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
ApiList Cryz_ScoringScheme_FindAllApplicationData_keyval4(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ScoringScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ScoringScheme_FindAllScores(Cryz_ScoringScheme self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllScores");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'findAllScores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'findAllScores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ScoringScheme_FindAllScores_keyval0(Cryz_ScoringScheme self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ScoringScheme_FindAllScores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ScoringScheme_FindAllScores_keyval1(Cryz_ScoringScheme self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ScoringScheme_FindAllScores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ScoringScheme_FindAllScores_keyval2(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ScoringScheme_FindAllScores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_ScoringScheme_FindAllScores_keyval3(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ScoringScheme_FindAllScores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
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
ApiSet Cryz_ScoringScheme_FindAllScores_keyval4(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ScoringScheme_FindAllScores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData(Cryz_ScoringScheme self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData_keyval0(Cryz_ScoringScheme self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ScoringScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData_keyval1(Cryz_ScoringScheme self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ScoringScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData_keyval2(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ScoringScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData_keyval3(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ScoringScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
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
Impl_ApplicationData Cryz_ScoringScheme_FindFirstApplicationData_keyval4(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ScoringScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_Score Cryz_ScoringScheme_FindFirstScore(Cryz_ScoringScheme self, ApiMap conditions)
{
  
  Cryz_Score obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstScore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'findFirstScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'findFirstScore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
  @returns  the first value that satisfies the conditions 
**/
Cryz_Score Cryz_ScoringScheme_FindFirstScore_keyval0(Cryz_ScoringScheme self)
{
  
  Cryz_Score  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_ScoringScheme_FindFirstScore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_Score Cryz_ScoringScheme_FindFirstScore_keyval1(Cryz_ScoringScheme self, char * key, ApiObject value)
{
  
  Cryz_Score  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_ScoringScheme_FindFirstScore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_Score Cryz_ScoringScheme_FindFirstScore_keyval2(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_Score  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_ScoringScheme_FindFirstScore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_Score Cryz_ScoringScheme_FindFirstScore_keyval3(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_Score  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_ScoringScheme_FindFirstScore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.ScoringScheme.scores

child link 
to class Score
  @param  Cryz_ScoringScheme self
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
Cryz_Score Cryz_ScoringScheme_FindFirstScore_keyval4(Cryz_ScoringScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_Score  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_ScoringScheme_FindFirstScore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cryz_ScoringScheme_Get(Cryz_ScoringScheme self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
Acco_AccessObject Cryz_ScoringScheme_GetAccess(Cryz_ScoringScheme self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getAccess' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiList Cryz_ScoringScheme_GetApplicationData(Cryz_ScoringScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cryz_ScoringScheme Cryz_ScoringScheme_GetByKey(Cryz_ScoringScheme self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cryz_ScoringScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getByKey' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetClassName(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.ScoringScheme.crystallizationStore

parent link
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_ScoringScheme_GetCrystallizationStore(Cryz_ScoringScheme self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCrystallizationStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ScoringScheme.details

Free text, for 
notes, explanatory comments, etc.
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetDetails(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getDetails' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiList Cryz_ScoringScheme_GetFieldNames(Cryz_ScoringScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cryz_ScoringScheme_GetFullKey(Cryz_ScoringScheme self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getFullKey' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiBoolean Cryz_ScoringScheme_GetInConstructor(Cryz_ScoringScheme self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getInConstructor' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiBoolean Cryz_ScoringScheme_GetIsDeleted(Cryz_ScoringScheme self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @returns  Local object key
**/
ApiObject Cryz_ScoringScheme_GetLocalKey(Cryz_ScoringScheme self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ScoringScheme.name
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetName(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getName' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetPackageName(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getPackageName' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetPackageShortName(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ScoringScheme.parent

link to parent 
object - synonym for crystallizationStore
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_ScoringScheme_GetParent(Cryz_ScoringScheme self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getParent' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetQualifiedName(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getQualifiedName' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
Impl_MemopsRoot Cryz_ScoringScheme_GetRoot(Cryz_ScoringScheme self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiSet Cryz_ScoringScheme_GetScores(Cryz_ScoringScheme self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScores");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getScores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getScores' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
Impl_TopObject Cryz_ScoringScheme_GetTopObject(Cryz_ScoringScheme self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.ScoringScheme.version
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiString Cryz_ScoringScheme_GetVersion(Cryz_ScoringScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVersion");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'getVersion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'getVersion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_ScoringScheme Cryz_ScoringScheme_Init(Cryz_CrystallizationStore parent, ApiMap attrlinks)
{
  
  return Cryz_CrystallizationStore_NewScoringScheme(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore parent
  @param  char * name
  @returns  the new object
**/
Cryz_ScoringScheme Cryz_ScoringScheme_Init_reqd(Cryz_CrystallizationStore parent, char * name)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Cryz_ScoringScheme_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Score
  @param  Cryz_ScoringScheme self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_Score Cryz_ScoringScheme_NewScore(Cryz_ScoringScheme self, ApiMap attrlinks)
{
  
  Cryz_Score obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newScore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'newScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'newScore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Score
  @param  Cryz_ScoringScheme self
  @returns  the new object
**/
Cryz_Score Cryz_ScoringScheme_NewScore_reqd(Cryz_ScoringScheme self)
{
  
  Cryz_Score  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cryz_ScoringScheme_NewScore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ScoringScheme self
  @param  Impl_ApplicationData value
**/
void *Cryz_ScoringScheme_RemoveApplicationData(Cryz_ScoringScheme self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_ScoringScheme self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cryz_ScoringScheme_Set(Cryz_ScoringScheme self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ScoringScheme self
  @param  Acco_AccessObject value
**/
void *Cryz_ScoringScheme_SetAccess(Cryz_ScoringScheme self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'setAccess' is not callable");
  
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
  @param  Cryz_ScoringScheme self
  @param  ApiList values
**/
void *Cryz_ScoringScheme_SetApplicationData(Cryz_ScoringScheme self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ScoringScheme.details

Free text, for 
notes, explanatory comments, etc.
  @param  Cryz_ScoringScheme self
  @param  ApiString value
**/
void *Cryz_ScoringScheme_SetDetails(Cryz_ScoringScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ScoringScheme.name
  @param  Cryz_ScoringScheme self
  @param  ApiString value
**/
void *Cryz_ScoringScheme_SetName(Cryz_ScoringScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.ScoringScheme.version
  @param  Cryz_ScoringScheme self
  @param  ApiString value
**/
void *Cryz_ScoringScheme_SetVersion(Cryz_ScoringScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVersion");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'setVersion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'setVersion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Crystallization.ScoringScheme.scores

child link to 
class Score
  @param  Cryz_ScoringScheme self
  @returns   the result
**/
ApiList Cryz_ScoringScheme_SortedScores(Cryz_ScoringScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedScores");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: cannot find method 'sortedScores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.ScoringScheme: method 'sortedScores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
