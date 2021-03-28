
#include "ccp.h"

/*
  TopObject for Taxonomy
*/

/* package ccp.api.general.Taxonomy */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  Impl_ApplicationData value
**/
void *Taxo_Taxonomy_AddApplicationData(Taxo_Taxonomy self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean complete
**/
void *Taxo_Taxonomy_CheckAllValid(Taxo_Taxonomy self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean complete
**/
void *Taxo_Taxonomy_CheckValid(Taxo_Taxonomy self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'checkValid' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllActiveRepositories(Taxo_Taxonomy self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval0(Taxo_Taxonomy self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
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
ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllApplicationData(Taxo_Taxonomy self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findAllApplicationData' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllApplicationData_keyval0(Taxo_Taxonomy self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllApplicationData_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllApplicationData_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_Taxonomy_FindAllApplicationData_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
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
ApiList Taxo_Taxonomy_FindAllApplicationData_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_Taxonomy_FindAllNaturalSources(Taxo_Taxonomy self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNaturalSources");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findAllNaturalSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findAllNaturalSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval0(Taxo_Taxonomy self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindAllNaturalSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindAllNaturalSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindAllNaturalSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindAllNaturalSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
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
ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindAllNaturalSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository(Taxo_Taxonomy self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval0(Taxo_Taxonomy self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
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
Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData(Taxo_Taxonomy self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findFirstApplicationData' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval0(Taxo_Taxonomy self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
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
Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource(Taxo_Taxonomy self, ApiMap conditions)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'findFirstNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'findFirstNaturalSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval0(Taxo_Taxonomy self)
{
  
  Taxo_NaturalSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_Taxonomy_FindFirstNaturalSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval1(Taxo_Taxonomy self, char * key, ApiObject value)
{
  
  Taxo_NaturalSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_Taxonomy_FindFirstNaturalSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Taxo_NaturalSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_Taxonomy_FindFirstNaturalSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Taxo_NaturalSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_Taxonomy_FindFirstNaturalSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
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
Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Taxo_NaturalSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_Taxonomy_FindFirstNaturalSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Taxo_Taxonomy_Get(Taxo_Taxonomy self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Acco_AccessObject Taxo_Taxonomy_GetAccess(Taxo_Taxonomy self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getAccess' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiList Taxo_Taxonomy_GetActiveRepositories(Taxo_Taxonomy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getActiveRepositories' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiList Taxo_Taxonomy_GetApplicationData(Taxo_Taxonomy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Taxo_Taxonomy Taxo_Taxonomy_GetByKey(Taxo_Taxonomy self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getByKey' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetClassName(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getClassName' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetCreatedBy(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getCreatedBy' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiList Taxo_Taxonomy_GetFieldNames(Taxo_Taxonomy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Taxo_Taxonomy_GetFullKey(Taxo_Taxonomy self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getFullKey' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetGuid(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getGuid' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetInConstructor(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getInConstructor' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetIsDeleted(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getIsDeleted' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetIsLoaded(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getIsLoaded' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetIsModifiable(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getIsModifiable' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetIsModified(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getIsModified' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiBoolean Taxo_Taxonomy_GetIsReading(Taxo_Taxonomy self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getIsReading' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetLastUnlockedBy(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @returns  Local object key
**/
ApiObject Taxo_Taxonomy_GetLocalKey(Taxo_Taxonomy self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.Taxonomy.memopsRoot

parent link
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Impl_MemopsRoot Taxo_Taxonomy_GetMemopsRoot(Taxo_Taxonomy self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.Taxonomy.name

name of Taxonomy
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetName(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiSet Taxo_Taxonomy_GetNaturalSources(Taxo_Taxonomy self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSources");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getNaturalSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getNaturalSources' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Impl_PackageLocator Taxo_Taxonomy_GetPackageLocator(Taxo_Taxonomy self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getPackageLocator' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetPackageName(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getPackageName' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetPackageShortName(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.Taxonomy.parent

link to parent object - 
synonym for memopsRoot
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Impl_MemopsRoot Taxo_Taxonomy_GetParent(Taxo_Taxonomy self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getParent' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiString Taxo_Taxonomy_GetQualifiedName(Taxo_Taxonomy self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getQualifiedName' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Impl_MemopsRoot Taxo_Taxonomy_GetRoot(Taxo_Taxonomy self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getRoot' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
Impl_TopObject Taxo_Taxonomy_GetTopObject(Taxo_Taxonomy self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Taxo_Taxonomy Taxo_Taxonomy_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewTaxonomy(parent, attrlinks);
}

/**
  Constructor for ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Taxo_Taxonomy Taxo_Taxonomy_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Taxo_Taxonomy  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Taxo_Taxonomy_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Taxo_NaturalSource Taxo_Taxonomy_NewNaturalSource(Taxo_Taxonomy self, ApiMap attrlinks)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'newNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'newNaturalSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * organismName
  @returns  the new object
**/
Taxo_NaturalSource Taxo_Taxonomy_NewNaturalSource_reqd(Taxo_Taxonomy self, char * organismName)
{
  
  Taxo_NaturalSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__organismName = ApiString_New(organismName);

  PyDict_SetItemString(attrlinks, "organismName", api__organismName);
  
  obj = Taxo_Taxonomy_NewNaturalSource(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__organismName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  Impl_ApplicationData value
**/
void *Taxo_Taxonomy_RemoveApplicationData(Taxo_Taxonomy self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString name
  @param  ApiObject value
**/
void *Taxo_Taxonomy_Set(Taxo_Taxonomy self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_Taxonomy self
  @param  Acco_AccessObject value
**/
void *Taxo_Taxonomy_SetAccess(Taxo_Taxonomy self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setAccess' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiList values
**/
void *Taxo_Taxonomy_SetApplicationData(Taxo_Taxonomy self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setApplicationData' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
void *Taxo_Taxonomy_SetCreatedBy(Taxo_Taxonomy self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setCreatedBy' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
void *Taxo_Taxonomy_SetGuid(Taxo_Taxonomy self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setGuid' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiBoolean value
**/
void *Taxo_Taxonomy_SetIsModifiable(Taxo_Taxonomy self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setIsModifiable' is not callable");
  
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
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
void *Taxo_Taxonomy_SetLastUnlockedBy(Taxo_Taxonomy self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.Taxonomy.name

name of Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
void *Taxo_Taxonomy_SetName(Taxo_Taxonomy self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns   the result
**/
ApiList Taxo_Taxonomy_SortedNaturalSources(Taxo_Taxonomy self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNaturalSources");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: cannot find method 'sortedNaturalSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.Taxonomy: method 'sortedNaturalSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
