
#include "ccp.h"

/*
  TopObject for StructureValidation package
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  Impl_ApplicationData value
**/
void *Vald_ValidationStore_AddApplicationData(Vald_ValidationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean complete
**/
void *Vald_ValidationStore_CheckAllValid(Vald_ValidationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean complete
**/
void *Vald_ValidationStore_CheckValid(Vald_ValidationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'checkValid' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllActiveRepositories(Vald_ValidationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval0(Vald_ValidationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
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
ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllApplicationData(Vald_ValidationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllApplicationData_keyval0(Vald_ValidationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllApplicationData_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllApplicationData_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_ValidationStore_FindAllApplicationData_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
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
ApiList Vald_ValidationStore_FindAllApplicationData_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_ValidationStore_FindAllValidationResults(Vald_ValidationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllValidationResults");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findAllValidationResults'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findAllValidationResults' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_ValidationStore_FindAllValidationResults_keyval0(Vald_ValidationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindAllValidationResults(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_ValidationStore_FindAllValidationResults_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindAllValidationResults(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_ValidationStore_FindAllValidationResults_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindAllValidationResults(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_ValidationStore_FindAllValidationResults_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindAllValidationResults(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
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
ApiSet Vald_ValidationStore_FindAllValidationResults_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindAllValidationResults(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository(Vald_ValidationStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval0(Vald_ValidationStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
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
Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData(Vald_ValidationStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval0(Vald_ValidationStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
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
Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult(Vald_ValidationStore self, ApiMap conditions)
{
  
  Vald_ValidationResult obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstValidationResult");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'findFirstValidationResult'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'findFirstValidationResult' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval0(Vald_ValidationStore self)
{
  
  Vald_ValidationResult  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_ValidationStore_FindFirstValidationResult(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval1(Vald_ValidationStore self, char * key, ApiObject value)
{
  
  Vald_ValidationResult  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_ValidationStore_FindFirstValidationResult(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ValidationResult  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_ValidationStore_FindFirstValidationResult(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ValidationResult  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_ValidationStore_FindFirstValidationResult(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
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
Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ValidationResult  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_ValidationStore_FindFirstValidationResult(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_ValidationStore_Get(Vald_ValidationStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ValidationStore self
  @returns   the result
**/
Acco_AccessObject Vald_ValidationStore_GetAccess(Vald_ValidationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getAccess' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiList Vald_ValidationStore_GetActiveRepositories(Vald_ValidationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiList Vald_ValidationStore_GetApplicationData(Vald_ValidationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_ValidationStore Vald_ValidationStore_GetByKey(Vald_ValidationStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getByKey' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetClassName(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getClassName' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetCreatedBy(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getCreatedBy' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiList Vald_ValidationStore_GetFieldNames(Vald_ValidationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Vald_ValidationStore_GetFullKey(Vald_ValidationStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getFullKey' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetGuid(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getGuid' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetInConstructor(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getInConstructor' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetIsDeleted(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getIsDeleted' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetIsLoaded(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getIsLoaded' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetIsModifiable(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getIsModifiable' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetIsModified(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getIsModified' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiBoolean Vald_ValidationStore_GetIsReading(Vald_ValidationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getIsReading' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetLastUnlockedBy(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @returns  Local object key
**/
ApiObject Vald_ValidationStore_GetLocalKey(Vald_ValidationStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.memopsRoot

parent 
link
  @param  Vald_ValidationStore self
  @returns   the result
**/
Impl_MemopsRoot Vald_ValidationStore_GetMemopsRoot(Vald_ValidationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationStore.name
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetName(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.nmrConstraintStore

NmrConstraintStore 
that validation refres to
  @param  Vald_ValidationStore self
  @returns   the result
**/
Nmrc_NmrConstraintStore Vald_ValidationStore_GetNmrConstraintStore(Vald_ValidationStore self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.nmrProject

NmrProject 
that validation refres to
  @param  Vald_ValidationStore self
  @returns   the result
**/
Nmr_NmrProject Vald_ValidationStore_GetNmrProject(Vald_ValidationStore self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getNmrProject' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
Impl_PackageLocator Vald_ValidationStore_GetPackageLocator(Vald_ValidationStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getPackageLocator' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetPackageName(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getPackageName' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetPackageShortName(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.parent

link 
to parent object - synonym for memopsRoot
  @param  Vald_ValidationStore self
  @returns   the result
**/
Impl_MemopsRoot Vald_ValidationStore_GetParent(Vald_ValidationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getParent' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiString Vald_ValidationStore_GetQualifiedName(Vald_ValidationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
Impl_MemopsRoot Vald_ValidationStore_GetRoot(Vald_ValidationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.structureEnsemble

strucureEnsemble 
that is being validated
  @param  Vald_ValidationStore self
  @returns   the result
**/
Coor_StructureEnsemble Vald_ValidationStore_GetStructureEnsemble(Vald_ValidationStore self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getStructureEnsemble' is not callable");
  
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
  @param  Vald_ValidationStore self
  @returns   the result
**/
Impl_TopObject Vald_ValidationStore_GetTopObject(Vald_ValidationStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiSet Vald_ValidationStore_GetValidationResults(Vald_ValidationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationResults");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'getValidationResults'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'getValidationResults' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_ValidationStore Vald_ValidationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewValidationStore(parent, attrlinks);
}

/**
  Constructor for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Vald_ValidationStore Vald_ValidationStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Vald_ValidationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Vald_ValidationStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_AtomValidation Vald_ValidationStore_NewAtomValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_AtomValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newAtomValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newAtomValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_AtomValidation Vald_ValidationStore_NewAtomValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_AtomValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewAtomValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_ChainValidation Vald_ValidationStore_NewChainValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_ChainValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newChainValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_ChainValidation Vald_ValidationStore_NewChainValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_ChainValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewChainValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.EnsembleValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_EnsembleValidation Vald_ValidationStore_NewEnsembleValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_EnsembleValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newEnsembleValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newEnsembleValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newEnsembleValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.EnsembleValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_EnsembleValidation Vald_ValidationStore_NewEnsembleValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_EnsembleValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewEnsembleValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.EntryValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_EntryValidation Vald_ValidationStore_NewEntryValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_EntryValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newEntryValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newEntryValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newEntryValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.EntryValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_EntryValidation Vald_ValidationStore_NewEntryValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_EntryValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewEntryValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_NmrConstraintListValidation Vald_ValidationStore_NewNmrConstraintListValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_NmrConstraintListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrConstraintListValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newNmrConstraintListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newNmrConstraintListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_NmrConstraintListValidation Vald_ValidationStore_NewNmrConstraintListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_NmrConstraintListValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewNmrConstraintListValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_NmrConstraintValidation Vald_ValidationStore_NewNmrConstraintValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_NmrConstraintValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrConstraintValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newNmrConstraintValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newNmrConstraintValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_NmrConstraintValidation Vald_ValidationStore_NewNmrConstraintValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_NmrConstraintValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewNmrConstraintValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_NmrMeasurementListValidation Vald_ValidationStore_NewNmrMeasurementListValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_NmrMeasurementListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_NmrMeasurementListValidation Vald_ValidationStore_NewNmrMeasurementListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewNmrMeasurementListValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_NmrMeasurementValidation Vald_ValidationStore_NewNmrMeasurementValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_NmrMeasurementValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrMeasurementValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newNmrMeasurementValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newNmrMeasurementValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_NmrMeasurementValidation Vald_ValidationStore_NewNmrMeasurementValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_NmrMeasurementValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewNmrMeasurementValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_PeakListValidation Vald_ValidationStore_NewPeakListValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_PeakListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakListValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newPeakListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newPeakListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_PeakListValidation Vald_ValidationStore_NewPeakListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_PeakListValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewPeakListValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_PeakValidation Vald_ValidationStore_NewPeakValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_PeakValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newPeakValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newPeakValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_PeakValidation Vald_ValidationStore_NewPeakValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_PeakValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewPeakValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_ResidueValidation Vald_ValidationStore_NewResidueValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_ResidueValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newResidueValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_ResidueValidation Vald_ValidationStore_NewResidueValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_ResidueValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewResidueValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.StructureValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_StructureValidation Vald_ValidationStore_NewStructureValidation(Vald_ValidationStore self, ApiMap attrlinks)
{
  
  Vald_StructureValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStructureValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'newStructureValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'newStructureValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.molecule.StructureValidation.StructureValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_StructureValidation Vald_ValidationStore_NewStructureValidation_reqd(Vald_ValidationStore self, char * context, char * keyword)
{
  
  Vald_StructureValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_ValidationStore_NewStructureValidation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  Impl_ApplicationData value
**/
void *Vald_ValidationStore_RemoveApplicationData(Vald_ValidationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_ValidationStore_Set(Vald_ValidationStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ValidationStore self
  @param  Acco_AccessObject value
**/
void *Vald_ValidationStore_SetAccess(Vald_ValidationStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setAccess' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiList values
**/
void *Vald_ValidationStore_SetApplicationData(Vald_ValidationStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setApplicationData' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
void *Vald_ValidationStore_SetCreatedBy(Vald_ValidationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setCreatedBy' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
void *Vald_ValidationStore_SetGuid(Vald_ValidationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setGuid' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiBoolean value
**/
void *Vald_ValidationStore_SetIsModifiable(Vald_ValidationStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setIsModifiable' is not callable");
  
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
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
void *Vald_ValidationStore_SetLastUnlockedBy(Vald_ValidationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationStore.name
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
void *Vald_ValidationStore_SetName(Vald_ValidationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.nmrConstraintStore

NmrConstraintStore 
that validation refres to
  @param  Vald_ValidationStore self
  @param  Nmrc_NmrConstraintStore value
**/
void *Vald_ValidationStore_SetNmrConstraintStore(Vald_ValidationStore self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.nmrProject

NmrProject 
that validation refres to
  @param  Vald_ValidationStore self
  @param  Nmr_NmrProject value
**/
void *Vald_ValidationStore_SetNmrProject(Vald_ValidationStore self, Nmr_NmrProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProject");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setNmrProject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.structureEnsemble

strucureEnsemble 
that is being validated
  @param  Vald_ValidationStore self
  @param  Coor_StructureEnsemble value
**/
void *Vald_ValidationStore_SetStructureEnsemble(Vald_ValidationStore self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'setStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'setStructureEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns   the result
**/
ApiList Vald_ValidationStore_SortedValidationResults(Vald_ValidationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedValidationResults");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: cannot find method 'sortedValidationResults'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.ValidationStore: method 'sortedValidationResults' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
