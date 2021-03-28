
#include "ccp.h"

/*
  TopObject for Analysis user profile package
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  Impl_ApplicationData value
**/
void *Anap_AnalysisProfile_AddApplicationData(Anap_AnalysisProfile self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean complete
**/
void *Anap_AnalysisProfile_CheckAllValid(Anap_AnalysisProfile self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean complete
**/
void *Anap_AnalysisProfile_CheckValid(Anap_AnalysisProfile self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'checkValid' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllActiveRepositories(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval0(Anap_AnalysisProfile self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
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
ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllApplicationData(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllApplicationData' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval0(Anap_AnalysisProfile self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
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
ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllColorSchemes(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllColorSchemes");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllColorSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllColorSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval0(Anap_AnalysisProfile self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllColorSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllColorSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllColorSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllColorSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
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
ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllColorSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllMacros(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMacros");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllMacros'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllMacros' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllMacros_keyval0(Anap_AnalysisProfile self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllMacros(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllMacros_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllMacros(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllMacros_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllMacros(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllMacros_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllMacros(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
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
ApiSet Anap_AnalysisProfile_FindAllMacros_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllMacros(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefExpProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllRefExpProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllRefExpProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval0(Anap_AnalysisProfile self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllRefExpProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllRefExpProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllRefExpProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllRefExpProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
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
ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllRefExpProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findAllResidueProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findAllResidueProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval0(Anap_AnalysisProfile self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindAllResidueProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindAllResidueProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindAllResidueProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindAllResidueProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
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
ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindAllResidueProfiles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval0(Anap_AnalysisProfile self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
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
Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval0(Anap_AnalysisProfile self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
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
Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Anap_ColorScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstColorScheme");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstColorScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstColorScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval0(Anap_AnalysisProfile self)
{
  
  Anap_ColorScheme  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstColorScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Anap_ColorScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstColorScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anap_ColorScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstColorScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anap_ColorScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstColorScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
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
Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anap_ColorScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstColorScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anap_Macro Anap_AnalysisProfile_FindFirstMacro(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Anap_Macro obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMacro");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstMacro'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstMacro' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval0(Anap_AnalysisProfile self)
{
  
  Anap_Macro  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstMacro(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Anap_Macro  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstMacro(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anap_Macro  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstMacro(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anap_Macro  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstMacro(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
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
Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anap_Macro  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstMacro(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Anap_RefExpProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefExpProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstRefExpProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstRefExpProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval0(Anap_AnalysisProfile self)
{
  
  Anap_RefExpProfile  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstRefExpProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Anap_RefExpProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstRefExpProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anap_RefExpProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstRefExpProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anap_RefExpProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstRefExpProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
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
Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anap_RefExpProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstRefExpProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile(Anap_AnalysisProfile self, ApiMap conditions)
{
  
  Anap_ResidueProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'findFirstResidueProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'findFirstResidueProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval0(Anap_AnalysisProfile self)
{
  
  Anap_ResidueProfile  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_AnalysisProfile_FindFirstResidueProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value)
{
  
  Anap_ResidueProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_AnalysisProfile_FindFirstResidueProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anap_ResidueProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_AnalysisProfile_FindFirstResidueProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anap_ResidueProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_AnalysisProfile_FindFirstResidueProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
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
Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anap_ResidueProfile  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_AnalysisProfile_FindFirstResidueProfile(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anap_AnalysisProfile_Get(Anap_AnalysisProfile self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Acco_AccessObject Anap_AnalysisProfile_GetAccess(Anap_AnalysisProfile self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getAccess' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_GetActiveRepositories(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getActiveRepositories' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_GetApplicationData(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.bgColor

background 
contour plot color
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetBgColor(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBgColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getBgColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getBgColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anap_AnalysisProfile Anap_AnalysisProfile_GetByKey(Anap_AnalysisProfile self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getByKey' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetClassName(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child link 
to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiSet Anap_AnalysisProfile_GetColorSchemes(Anap_AnalysisProfile self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColorSchemes");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getColorSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getColorSchemes' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetCreatedBy(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.fgColor

foreground 
contour plot color
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetFgColor(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFgColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getFgColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getFgColor' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_GetFieldNames(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.font

font for general 
use in interface
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetFont(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFont");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getFont' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anap_AnalysisProfile_GetFullKey(Anap_AnalysisProfile self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.graphicsHandler

Name of 
graphics handler to use
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetGraphicsHandler(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGraphicsHandler");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getGraphicsHandler'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getGraphicsHandler' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetGuid(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getGuid' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetInConstructor(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getInConstructor' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetIsDeleted(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getIsDeleted' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetIsLoaded(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getIsLoaded' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetIsModifiable(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getIsModifiable' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetIsModified(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getIsModified' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetIsReading(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getIsReading' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetLastUnlockedBy(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @returns  Local object key
**/
ApiObject Anap_AnalysisProfile_GetLocalKey(Anap_AnalysisProfile self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiSet Anap_AnalysisProfile_GetMacros(Anap_AnalysisProfile self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMacros");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getMacros'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getMacros' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.marksColor

Color scheme 
for marks
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Anap_ColorScheme Anap_AnalysisProfile_GetMarksColor(Anap_AnalysisProfile self)
{
  
  Anap_ColorScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMarksColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getMarksColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getMarksColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.memopsRoot

parent link
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Impl_MemopsRoot Anap_AnalysisProfile_GetMemopsRoot(Anap_AnalysisProfile self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.name

name of 
AnalysisProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetName(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getName' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Impl_PackageLocator Anap_AnalysisProfile_GetPackageLocator(Anap_AnalysisProfile self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getPackageLocator' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetPackageName(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getPackageName' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetPackageShortName(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.panView

Move view when 
panning (rather than viewing window)
Does pan track the view, rather 
than the contours?
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetPanView(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPanView");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getPanView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getPanView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.parent

link to parent 
object - synonym for memopsRoot
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Impl_MemopsRoot Anap_AnalysisProfile_GetParent(Anap_AnalysisProfile self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getParent' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetQualifiedName(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiSet Anap_AnalysisProfile_GetRefExpProfiles(Anap_AnalysisProfile self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getRefExpProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getRefExpProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child 
link to class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiSet Anap_AnalysisProfile_GetResidueProfiles(Anap_AnalysisProfile self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getResidueProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getResidueProfiles' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Impl_MemopsRoot Anap_AnalysisProfile_GetRoot(Anap_AnalysisProfile self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.rulersColor

Color scheme 
for rulers
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Anap_ColorScheme Anap_AnalysisProfile_GetRulersColor(Anap_AnalysisProfile self)
{
  
  Anap_ColorScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRulersColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getRulersColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getRulersColor' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
Impl_TopObject Anap_AnalysisProfile_GetTopObject(Anap_AnalysisProfile self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.transientDialogs

Are 
dialogs transient
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetTransientDialogs(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTransientDialogs");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getTransientDialogs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getTransientDialogs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.transientWindows

Are 
windows transient
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetTransientWindows(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTransientWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getTransientWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getTransientWindows' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.twoCharShortcuts

Use two 
character shortcuts (rather than single-character)
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetTwoCharShortcuts(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTwoCharShortcuts");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getTwoCharShortcuts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getTwoCharShortcuts' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.useCrosshair

Use 
crosshair on contuor plots
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetUseCrosshair(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseCrosshair");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getUseCrosshair'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getUseCrosshair' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.useGlobalShortcuts

Do 
shortcuts toggle all windows, or just the current?
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiBoolean Anap_AnalysisProfile_GetUseGlobalShortcuts(Anap_AnalysisProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseGlobalShortcuts");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getUseGlobalShortcuts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getUseGlobalShortcuts' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.webBrowser

Name of web 
browser to use for help etc.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiString Anap_AnalysisProfile_GetWebBrowser(Anap_AnalysisProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWebBrowser");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'getWebBrowser'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'getWebBrowser' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_AnalysisProfile Anap_AnalysisProfile_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewAnalysisProfile(parent, attrlinks);
}

/**
  Constructor for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Anap_AnalysisProfile Anap_AnalysisProfile_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Anap_AnalysisProfile  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_AnalysisProfile_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_ColorScheme Anap_AnalysisProfile_NewColorScheme(Anap_AnalysisProfile self, ApiMap attrlinks)
{
  
  Anap_ColorScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newColorScheme");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'newColorScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'newColorScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * name
  @returns  the new object
**/
Anap_ColorScheme Anap_AnalysisProfile_NewColorScheme_reqd(Anap_AnalysisProfile self, char * name)
{
  
  Anap_ColorScheme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_AnalysisProfile_NewColorScheme(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_Macro Anap_AnalysisProfile_NewMacro(Anap_AnalysisProfile self, ApiMap attrlinks)
{
  
  Anap_Macro obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMacro");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'newMacro'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'newMacro' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile self
  @param  char * function
  @param  char * module
  @param  char * name
  @returns  the new object
**/
Anap_Macro Anap_AnalysisProfile_NewMacro_reqd(Anap_AnalysisProfile self, char * function, char * module, char * name)
{
  
  Anap_Macro  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__function = ApiString_New(function);
  ApiString api__module = ApiString_New(module);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "function", api__function);
  PyDict_SetItemString(attrlinks, "module", api__module);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_AnalysisProfile_NewMacro(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__function);
  Py_DECREF(api__module);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_RefExpProfile Anap_AnalysisProfile_NewRefExpProfile(Anap_AnalysisProfile self, ApiMap attrlinks)
{
  
  Anap_RefExpProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefExpProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'newRefExpProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'newRefExpProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * name
  @returns  the new object
**/
Anap_RefExpProfile Anap_AnalysisProfile_NewRefExpProfile_reqd(Anap_AnalysisProfile self, char * name)
{
  
  Anap_RefExpProfile  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_AnalysisProfile_NewRefExpProfile(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_ResidueProfile Anap_AnalysisProfile_NewResidueProfile(Anap_AnalysisProfile self, ApiMap attrlinks)
{
  
  Anap_ResidueProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidueProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'newResidueProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'newResidueProfile' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * ccpCode
  @param  char * guiName
  @param  char * molType
  @returns  the new object
**/
Anap_ResidueProfile Anap_AnalysisProfile_NewResidueProfile_reqd(Anap_AnalysisProfile self, char * ccpCode, char * guiName, char * molType)
{
  
  Anap_ResidueProfile  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__guiName = ApiString_New(guiName);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "guiName", api__guiName);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Anap_AnalysisProfile_NewResidueProfile(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__guiName);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  Impl_ApplicationData value
**/
void *Anap_AnalysisProfile_RemoveApplicationData(Anap_AnalysisProfile self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anap_AnalysisProfile_Set(Anap_AnalysisProfile self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_AnalysisProfile self
  @param  Acco_AccessObject value
**/
void *Anap_AnalysisProfile_SetAccess(Anap_AnalysisProfile self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setAccess' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiList values
**/
void *Anap_AnalysisProfile_SetApplicationData(Anap_AnalysisProfile self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.bgColor

background 
contour plot color
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetBgColor(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBgColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setBgColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setBgColor' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetCreatedBy(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.fgColor

foreground 
contour plot color
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetFgColor(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFgColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setFgColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setFgColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.font

font for general 
use in interface
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetFont(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFont");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setFont' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.graphicsHandler

Name of 
graphics handler to use
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetGraphicsHandler(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGraphicsHandler");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setGraphicsHandler'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setGraphicsHandler' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetGuid(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setGuid' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetIsModifiable(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setIsModifiable' is not callable");
  
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
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetLastUnlockedBy(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.marksColor

Color scheme 
for marks
  @param  Anap_AnalysisProfile self
  @param  Anap_ColorScheme value
**/
void *Anap_AnalysisProfile_SetMarksColor(Anap_AnalysisProfile self, Anap_ColorScheme value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMarksColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setMarksColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setMarksColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.name

name of 
AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetName(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.panView

Move view when 
panning (rather than viewing window)
Does pan track the view, rather 
than the contours?
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetPanView(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPanView");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setPanView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setPanView' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.rulersColor

Color scheme 
for rulers
  @param  Anap_AnalysisProfile self
  @param  Anap_ColorScheme value
**/
void *Anap_AnalysisProfile_SetRulersColor(Anap_AnalysisProfile self, Anap_ColorScheme value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRulersColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setRulersColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setRulersColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.transientDialogs

Are 
dialogs transient
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetTransientDialogs(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTransientDialogs");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setTransientDialogs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setTransientDialogs' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.transientWindows

Are 
windows transient
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetTransientWindows(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTransientWindows");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setTransientWindows'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setTransientWindows' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.twoCharShortcuts

Use two 
character shortcuts (rather than single-character)
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetTwoCharShortcuts(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTwoCharShortcuts");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setTwoCharShortcuts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setTwoCharShortcuts' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.useCrosshair

Use 
crosshair on contuor plots
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetUseCrosshair(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseCrosshair");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setUseCrosshair'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setUseCrosshair' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.useGlobalShortcuts

Do 
shortcuts toggle all windows, or just the current?
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
void *Anap_AnalysisProfile_SetUseGlobalShortcuts(Anap_AnalysisProfile self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseGlobalShortcuts");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setUseGlobalShortcuts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setUseGlobalShortcuts' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.webBrowser

Name of web 
browser to use for help etc.
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
void *Anap_AnalysisProfile_SetWebBrowser(Anap_AnalysisProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWebBrowser");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'setWebBrowser'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'setWebBrowser' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_SortedColorSchemes(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedColorSchemes");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'sortedColorSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'sortedColorSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_SortedMacros(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMacros");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'sortedMacros'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'sortedMacros' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_SortedRefExpProfiles(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefExpProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'sortedRefExpProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'sortedRefExpProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child 
link to class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
ApiList Anap_AnalysisProfile_SortedResidueProfiles(Anap_AnalysisProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueProfiles");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: cannot find method 'sortedResidueProfiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.AnalysisProfile: method 'sortedResidueProfiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
