
#include "ccp.h"

/*
  TopObject for ChemComp specific Nmr Reference Data. Serves as a local handle, holding information about where the actual data are stored.
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  Impl_ApplicationData value
**/
void *Nmrr_NmrReferenceStore_AddApplicationData(Nmrr_NmrReferenceStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiBoolean complete
**/
void *Nmrr_NmrReferenceStore_CheckAllValid(Nmrr_NmrReferenceStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiBoolean complete
**/
void *Nmrr_NmrReferenceStore_CheckValid(Nmrr_NmrReferenceStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'checkValid' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories_keyval0(Nmrr_NmrReferenceStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
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
ApiList Nmrr_NmrReferenceStore_FindAllActiveRepositories_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData_keyval0(Nmrr_NmrReferenceStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
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
ApiList Nmrr_NmrReferenceStore_FindAllApplicationData_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findAllChemCompNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findAllChemCompNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs_keyval0(Nmrr_NmrReferenceStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
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
ApiSet Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindAllChemCompNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository_keyval0(Nmrr_NmrReferenceStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrr_NmrReferenceStore self
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
Impl_Repository Nmrr_NmrReferenceStore_FindFirstActiveRepository_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData_keyval0(Nmrr_NmrReferenceStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
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
Impl_ApplicationData Nmrr_NmrReferenceStore_FindFirstApplicationData_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(Nmrr_NmrReferenceStore self, ApiMap conditions)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'findFirstChemCompNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'findFirstChemCompNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef_keyval0(Nmrr_NmrReferenceStore self)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef_keyval1(Nmrr_NmrReferenceStore self, char * key, ApiObject value)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef_keyval2(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef_keyval3(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child link to 
class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
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
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef_keyval4(Nmrr_NmrReferenceStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_NmrReferenceStore_FindFirstChemCompNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrr_NmrReferenceStore_Get(Nmrr_NmrReferenceStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Acco_AccessObject Nmrr_NmrReferenceStore_GetAccess(Nmrr_NmrReferenceStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getAccess' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiList Nmrr_NmrReferenceStore_GetActiveRepositories(Nmrr_NmrReferenceStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiList Nmrr_NmrReferenceStore_GetApplicationData(Nmrr_NmrReferenceStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrr_NmrReferenceStore Nmrr_NmrReferenceStore_GetByKey(Nmrr_NmrReferenceStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Nmrr_NmrReferenceStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.ccpCode

ccpCode for 
relevant ChemComp.
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetCcpCode(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Chem_ChemComp Nmrr_NmrReferenceStore_GetChemComp(Nmrr_NmrReferenceStore self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child 
link to class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiSet Nmrr_NmrReferenceStore_GetChemCompNmrRefs(Nmrr_NmrReferenceStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getChemCompNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getChemCompNmrRefs' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetClassName(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getClassName' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetCreatedBy(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getCreatedBy' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiList Nmrr_NmrReferenceStore_GetFieldNames(Nmrr_NmrReferenceStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrr_NmrReferenceStore_GetFullKey(Nmrr_NmrReferenceStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getFullKey' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetGuid(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getGuid' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetInConstructor(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getInConstructor' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetIsDeleted(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getIsDeleted' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetIsLoaded(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getIsLoaded' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetIsModifiable(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getIsModifiable' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetIsModified(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getIsModified' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiBoolean Nmrr_NmrReferenceStore_GetIsReading(Nmrr_NmrReferenceStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getIsReading' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetLastUnlockedBy(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @returns  Local object key
**/
ApiObject Nmrr_NmrReferenceStore_GetLocalKey(Nmrr_NmrReferenceStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.memopsRoot

parent link
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_NmrReferenceStore_GetMemopsRoot(Nmrr_NmrReferenceStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.molType

Molecule Type of 
referenced ChemComp
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetMolType(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.name

name of 
NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetName(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getName' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Impl_PackageLocator Nmrr_NmrReferenceStore_GetPackageLocator(Nmrr_NmrReferenceStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getPackageLocator' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetPackageName(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getPackageName' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetPackageShortName(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.NmrReferenceStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_NmrReferenceStore_GetParent(Nmrr_NmrReferenceStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getParent' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiString Nmrr_NmrReferenceStore_GetQualifiedName(Nmrr_NmrReferenceStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_NmrReferenceStore_GetRoot(Nmrr_NmrReferenceStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getRoot' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
Impl_TopObject Nmrr_NmrReferenceStore_GetTopObject(Nmrr_NmrReferenceStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_NmrReferenceStore Nmrr_NmrReferenceStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNmrReferenceStore(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Impl_MemopsRoot parent
  @param  char * ccpCode
  @param  char * molType
  @returns  the new object
**/
Nmrr_NmrReferenceStore Nmrr_NmrReferenceStore_Init_reqd(Impl_MemopsRoot parent, char * ccpCode, char * molType)
{
  
  Nmrr_NmrReferenceStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Nmrr_NmrReferenceStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_NewChemCompNmrRef(Nmrr_NmrReferenceStore self, ApiMap attrlinks)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'newChemCompNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'newChemCompNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @param  char * sourceName
  @returns  the new object
**/
Nmrr_ChemCompNmrRef Nmrr_NmrReferenceStore_NewChemCompNmrRef_reqd(Nmrr_NmrReferenceStore self, char * sourceName)
{
  
  Nmrr_ChemCompNmrRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Nmrr_NmrReferenceStore_NewChemCompNmrRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_NmrReferenceStore self
  @param  Impl_ApplicationData value
**/
void *Nmrr_NmrReferenceStore_RemoveApplicationData(Nmrr_NmrReferenceStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrReference.NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrr_NmrReferenceStore_Set(Nmrr_NmrReferenceStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_NmrReferenceStore self
  @param  Acco_AccessObject value
**/
void *Nmrr_NmrReferenceStore_SetAccess(Nmrr_NmrReferenceStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setAccess' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiList values
**/
void *Nmrr_NmrReferenceStore_SetApplicationData(Nmrr_NmrReferenceStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.NmrReferenceStore.ccpCode

ccpCode for 
relevant ChemComp.
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetCcpCode(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setCcpCode' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetCreatedBy(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setCreatedBy' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetGuid(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setGuid' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiBoolean value
**/
void *Nmrr_NmrReferenceStore_SetIsModifiable(Nmrr_NmrReferenceStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setIsModifiable' is not callable");
  
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
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetLastUnlockedBy(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.NmrReferenceStore.molType

Molecule Type of 
referenced ChemComp
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetMolType(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.NmrReferenceStore.name

name of 
NmrReferenceStore
  @param  Nmrr_NmrReferenceStore self
  @param  ApiString value
**/
void *Nmrr_NmrReferenceStore_SetName(Nmrr_NmrReferenceStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrReference.NmrReferenceStore.chemCompNmrRefs

child 
link to class ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore self
  @returns   the result
**/
ApiList Nmrr_NmrReferenceStore_SortedChemCompNmrRefs(Nmrr_NmrReferenceStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: cannot find method 'sortedChemCompNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.NmrReferenceStore: method 'sortedChemCompNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
