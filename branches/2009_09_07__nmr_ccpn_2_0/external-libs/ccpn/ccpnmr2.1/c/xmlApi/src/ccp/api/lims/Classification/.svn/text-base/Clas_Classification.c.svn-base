
#include "ccp.h"

/*
  TopObject for Classification package
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  Impl_ApplicationData value
**/
void *Clas_Classification_AddApplicationData(Clas_Classification self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  ApiBoolean complete
**/
void *Clas_Classification_CheckAllValid(Clas_Classification self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  ApiBoolean complete
**/
void *Clas_Classification_CheckValid(Clas_Classification self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'checkValid' is not callable");
  
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
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllActiveRepositories(Clas_Classification self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllActiveRepositories_keyval0(Clas_Classification self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllActiveRepositories_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllActiveRepositories_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllActiveRepositories_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
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
ApiList Clas_Classification_FindAllActiveRepositories_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllApplicationData(Clas_Classification self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllApplicationData_keyval0(Clas_Classification self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllApplicationData_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllApplicationData_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_Classification_FindAllApplicationData_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
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
ApiList Clas_Classification_FindAllApplicationData_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllExperimentTypes(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllExperimentTypes_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllExperimentTypes_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllExperimentTypes_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllExperimentTypes_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllExperimentTypes_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllExperimentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHazardPhrases(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHazardPhrases_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHazardPhrases_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHazardPhrases_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHazardPhrases_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllHazardPhrases_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllHazardPhrases(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHolderCategorys(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderCategorys");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllHolderCategorys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllHolderCategorys' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHolderCategorys_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllHolderCategorys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHolderCategorys_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllHolderCategorys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHolderCategorys_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllHolderCategorys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllHolderCategorys_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllHolderCategorys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllHolderCategorys_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllHolderCategorys(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllInstrumentTypes(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllInstrumentTypes_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllInstrumentTypes_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllInstrumentTypes_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllInstrumentTypes_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllInstrumentTypes_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleCategories(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleCategories_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleCategories_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleCategories_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleCategories_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllSampleCategories_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleComponentCategory(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleComponentCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllSampleComponentCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllSampleComponentCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleComponentCategory_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllSampleComponentCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleComponentCategory_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllSampleComponentCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleComponentCategory_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllSampleComponentCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllSampleComponentCategory_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllSampleComponentCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllSampleComponentCategory_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllSampleComponentCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetScoreboards(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetScoreboards_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetScoreboards_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetScoreboards_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetScoreboards_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllTargetScoreboards_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetStatus(Clas_Classification self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findAllTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findAllTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetStatus_keyval0(Clas_Classification self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetStatus_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetStatus_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_Classification_FindAllTargetStatus_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
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
ApiSet Clas_Classification_FindAllTargetStatus_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Clas_Classification_FindFirstActiveRepository(Clas_Classification self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Clas_Classification_FindFirstActiveRepository_keyval0(Clas_Classification self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Clas_Classification_FindFirstActiveRepository_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Clas_Classification_FindFirstActiveRepository_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Clas_Classification_FindFirstActiveRepository_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Clas_Classification self
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
Impl_Repository Clas_Classification_FindFirstActiveRepository_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_Classification_FindFirstApplicationData(Clas_Classification self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_Classification_FindFirstApplicationData_keyval0(Clas_Classification self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_Classification_FindFirstApplicationData_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_Classification_FindFirstApplicationData_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_Classification_FindFirstApplicationData_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
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
Impl_ApplicationData Clas_Classification_FindFirstApplicationData_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_Classification_FindFirstExperimentType(Clas_Classification self, ApiMap conditions)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstExperimentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_Classification_FindFirstExperimentType_keyval0(Clas_Classification self)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_Classification_FindFirstExperimentType_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_Classification_FindFirstExperimentType_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_ExperimentType Clas_Classification_FindFirstExperimentType_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.experimentTypes

child link to 
class ExperimentType
  @param  Clas_Classification self
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
Clas_ExperimentType Clas_Classification_FindFirstExperimentType_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_ExperimentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstExperimentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase(Clas_Classification self, ApiMap conditions)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstHazardPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase_keyval0(Clas_Classification self)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.hazardPhrases

child link to 
class HazardPhrase
  @param  Clas_Classification self
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
Clas_HazardPhrase Clas_Classification_FindFirstHazardPhrase_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HazardPhrase  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstHazardPhrase(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory(Clas_Classification self, ApiMap conditions)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory_keyval0(Clas_Classification self)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.holderCategorys

child link to 
class HolderCategory
  @param  Clas_Classification self
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
Clas_HolderCategory Clas_Classification_FindFirstHolderCategory_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType(Clas_Classification self, ApiMap conditions)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType_keyval0(Clas_Classification self)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.instrumentTypes

child link to 
class InstrumentType
  @param  Clas_Classification self
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
Clas_InstrumentType Clas_Classification_FindFirstInstrumentType_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory(Clas_Classification self, ApiMap conditions)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstSampleCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory_keyval0(Clas_Classification self)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
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
Clas_SampleCategory Clas_Classification_FindFirstSampleCategory_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories(Clas_Classification self, ApiMap conditions)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleComponentCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstSampleComponentCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstSampleComponentCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories_keyval0(Clas_Classification self)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstSampleComponentCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstSampleComponentCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstSampleComponentCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstSampleComponentCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
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
Clas_SampleComponentCategory Clas_Classification_FindFirstSampleComponentCategories_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstSampleComponentCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard(Clas_Classification self, ApiMap conditions)
{
  
  Clas_TargetScoreboard obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetScoreboard");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstTargetScoreboard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstTargetScoreboard' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard_keyval0(Clas_Classification self)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
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
Clas_TargetScoreboard Clas_Classification_FindFirstTargetScoreboard_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus(Clas_Classification self, ApiMap conditions)
{
  
  Clas_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'findFirstTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'findFirstTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus_keyval0(Clas_Classification self)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_Classification_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus_keyval1(Clas_Classification self, char * key, ApiObject value)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_Classification_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus_keyval2(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_Classification_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus_keyval3(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_Classification_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
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
Clas_TargetStatus Clas_Classification_FindFirstTargetStatus_keyval4(Clas_Classification self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_Classification_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_Classification_Get(Clas_Classification self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_Classification self
  @returns   the result
**/
Acco_AccessObject Clas_Classification_GetAccess(Clas_Classification self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getAccess' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
Acco_AccessObject Clas_Classification_GetActiveAccess(Clas_Classification self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getActiveAccess' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_GetActiveRepositories(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getActiveRepositories' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_GetApplicationData(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_Classification Clas_Classification_GetByKey(Clas_Classification self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getByKey' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetClassName(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getClassName' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetCreatedBy(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.experimentTypes

child 
link to class ExperimentType
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetExperimentTypes(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getExperimentTypes' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_GetFieldNames(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_Classification_GetFullKey(Clas_Classification self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetGuid(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.hazardPhrases

child link 
to class HazardPhrase
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetHazardPhrases(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.holderCategorys

child 
link to class HolderCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetHolderCategorys(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderCategorys");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getHolderCategorys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getHolderCategorys' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetInConstructor(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.instrumentTypes

child 
link to class InstrumentType
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetInstrumentTypes(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getInstrumentTypes' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetIsDeleted(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getIsDeleted' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetIsLoaded(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getIsLoaded' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetIsModifiable(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getIsModifiable' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetIsModified(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getIsModified' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiBoolean Clas_Classification_GetIsReading(Clas_Classification self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getIsReading' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetLastUnlockedBy(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @returns  Local object key
**/
ApiObject Clas_Classification_GetLocalKey(Clas_Classification self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.memopsRoot

parent link
  @param  Clas_Classification self
  @returns   the result
**/
Impl_MemopsRoot Clas_Classification_GetMemopsRoot(Clas_Classification self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.namingSystem

Name of 
naming system(s) or classification(s) in the package
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetNamingSystem(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getNamingSystem' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
Impl_PackageLocator Clas_Classification_GetPackageLocator(Clas_Classification self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getPackageLocator' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetPackageName(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getPackageName' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetPackageShortName(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.parent

link to parent 
object - synonym for memopsRoot
  @param  Clas_Classification self
  @returns   the result
**/
Impl_MemopsRoot Clas_Classification_GetParent(Clas_Classification self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getParent' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
ApiString Clas_Classification_GetQualifiedName(Clas_Classification self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
Impl_MemopsRoot Clas_Classification_GetRoot(Clas_Classification self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.sampleCategories

child 
link to class SampleCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetSampleCategories(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetSampleComponentCategory(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleComponentCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getSampleComponentCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getSampleComponentCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.targetScoreboards

child 
link to class TargetScoreboard
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetTargetScoreboards(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.Classification.targetStatus

child link 
to class TargetStatus
  @param  Clas_Classification self
  @returns   the result
**/
ApiSet Clas_Classification_GetTargetStatus(Clas_Classification self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getTargetStatus' is not callable");
  
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
  @param  Clas_Classification self
  @returns   the result
**/
Impl_TopObject Clas_Classification_GetTopObject(Clas_Classification self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.Classification
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_Classification Clas_Classification_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewClassification(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.Classification
  @param  Impl_MemopsRoot parent
  @param  char * namingSystem
  @returns  the new object
**/
Clas_Classification Clas_Classification_Init_reqd(Impl_MemopsRoot parent, char * namingSystem)
{
  
  Clas_Classification  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__namingSystem = ApiString_New(namingSystem);

  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  
  obj = Clas_Classification_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__namingSystem);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.ExperimentType
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_ExperimentType Clas_Classification_NewExperimentType(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExperimentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newExperimentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newExperimentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.ExperimentType
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_ExperimentType Clas_Classification_NewExperimentType_reqd(Clas_Classification self, char * name)
{
  
  Clas_ExperimentType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewExperimentType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.HazardPhrase
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_HazardPhrase Clas_Classification_NewHazardPhrase(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_HazardPhrase obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHazardPhrase");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newHazardPhrase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newHazardPhrase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.HazardPhrase
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_HazardPhrase Clas_Classification_NewHazardPhrase_reqd(Clas_Classification self, char * name)
{
  
  Clas_HazardPhrase  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewHazardPhrase(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.HolderCategory
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_HolderCategory Clas_Classification_NewHolderCategory(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.HolderCategory
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_HolderCategory Clas_Classification_NewHolderCategory_reqd(Clas_Classification self, char * name)
{
  
  Clas_HolderCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewHolderCategory(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.InstrumentType
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_InstrumentType Clas_Classification_NewInstrumentType(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.InstrumentType
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_InstrumentType Clas_Classification_NewInstrumentType_reqd(Clas_Classification self, char * name)
{
  
  Clas_InstrumentType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewInstrumentType(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.SampleCategory
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_SampleCategory Clas_Classification_NewSampleCategory(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newSampleCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.SampleCategory
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_SampleCategory Clas_Classification_NewSampleCategory_reqd(Clas_Classification self, char * name)
{
  
  Clas_SampleCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewSampleCategory(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_SampleComponentCategory Clas_Classification_NewSampleComponentCategory(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampleComponentCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newSampleComponentCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newSampleComponentCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_SampleComponentCategory Clas_Classification_NewSampleComponentCategory_reqd(Clas_Classification self, char * name)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewSampleComponentCategory(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.TargetScoreboard
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_TargetScoreboard Clas_Classification_NewTargetScoreboard(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_TargetScoreboard obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTargetScoreboard");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newTargetScoreboard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newTargetScoreboard' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.TargetScoreboard
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_TargetScoreboard Clas_Classification_NewTargetScoreboard_reqd(Clas_Classification self, char * name)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewTargetScoreboard(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.TargetStatus
  @param  Clas_Classification self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_TargetStatus Clas_Classification_NewTargetStatus(Clas_Classification self, ApiMap attrlinks)
{
  
  Clas_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'newTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'newTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Classification.TargetStatus
  @param  Clas_Classification self
  @param  char * name
  @returns  the new object
**/
Clas_TargetStatus Clas_Classification_NewTargetStatus_reqd(Clas_Classification self, char * name)
{
  
  Clas_TargetStatus  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_Classification_NewTargetStatus(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_Classification self
  @param  Impl_ApplicationData value
**/
void *Clas_Classification_RemoveApplicationData(Clas_Classification self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.Classification
  @param  Clas_Classification self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_Classification_Set(Clas_Classification self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_Classification self
  @param  Acco_AccessObject value
**/
void *Clas_Classification_SetAccess(Clas_Classification self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setAccess' is not callable");
  
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
  @param  Clas_Classification self
  @param  ApiList values
**/
void *Clas_Classification_SetApplicationData(Clas_Classification self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Clas_Classification self
  @param  ApiString value
**/
void *Clas_Classification_SetCreatedBy(Clas_Classification self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setCreatedBy' is not callable");
  
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
  @param  Clas_Classification self
  @param  ApiString value
**/
void *Clas_Classification_SetGuid(Clas_Classification self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setGuid' is not callable");
  
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
  @param  Clas_Classification self
  @param  ApiBoolean value
**/
void *Clas_Classification_SetIsModifiable(Clas_Classification self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setIsModifiable' is not callable");
  
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
  @param  Clas_Classification self
  @param  ApiString value
**/
void *Clas_Classification_SetLastUnlockedBy(Clas_Classification self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.Classification.namingSystem

Name of 
naming system(s) or classification(s) in the package
  @param  Clas_Classification self
  @param  ApiString value
**/
void *Clas_Classification_SetNamingSystem(Clas_Classification self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'setNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'setNamingSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.Classification.experimentTypes

child 
link to class ExperimentType
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedExperimentTypes(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperimentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedExperimentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedExperimentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.Classification.hazardPhrases

child 
link to class HazardPhrase
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedHazardPhrases(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHazardPhrases");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedHazardPhrases'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedHazardPhrases' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.Classification.holderCategorys

child 
link to class HolderCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedHolderCategorys(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderCategorys");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedHolderCategorys'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedHolderCategorys' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.Classification.instrumentTypes

child 
link to class InstrumentType
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedInstrumentTypes(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Classification.Classification.sampleCategories

child link to 
class SampleCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedSampleCategories(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Classification.Classification.sampleComponentCategory

child 
link to class SampleComponentCategory
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedSampleComponentCategory(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleComponentCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedSampleComponentCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedSampleComponentCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Classification.Classification.targetScoreboards

child link to 
class TargetScoreboard
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedTargetScoreboards(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.Classification.targetStatus

child 
link to class TargetStatus
  @param  Clas_Classification self
  @returns   the result
**/
ApiList Clas_Classification_SortedTargetStatus(Clas_Classification self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.Classification: cannot find method 'sortedTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.Classification: method 'sortedTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
