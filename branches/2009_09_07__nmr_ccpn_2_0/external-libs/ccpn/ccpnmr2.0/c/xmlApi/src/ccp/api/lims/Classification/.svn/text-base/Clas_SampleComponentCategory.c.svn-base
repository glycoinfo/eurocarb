
#include "ccp.h"

/*
  The category of the Samplecomponent classified by namingSystem. Different organisations can have their own categories. PIMS default caregories include buffering agent, salt, inhibitor,...
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_SampleComponentCategory_AddApplicationData(Clas_SampleComponentCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  Refs_AbstractComponent value
**/
void *Clas_SampleComponentCategory_AddComponent(Clas_SampleComponentCategory self, Refs_AbstractComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'addComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'addComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean complete
**/
void *Clas_SampleComponentCategory_CheckAllValid(Clas_SampleComponentCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean complete
**/
void *Clas_SampleComponentCategory_CheckValid(Clas_SampleComponentCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'checkValid' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleComponentCategory_FindAllApplicationData(Clas_SampleComponentCategory self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval0(Clas_SampleComponentCategory self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleComponentCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleComponentCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleComponentCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleComponentCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
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
ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleComponentCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleComponentCategory_FindAllComponents(Clas_SampleComponentCategory self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'findAllComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'findAllComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval0(Clas_SampleComponentCategory self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleComponentCategory_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleComponentCategory_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleComponentCategory_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleComponentCategory_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
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
ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleComponentCategory_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData(Clas_SampleComponentCategory self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval0(Clas_SampleComponentCategory self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleComponentCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleComponentCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleComponentCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleComponentCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
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
Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleComponentCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent(Clas_SampleComponentCategory self, ApiMap conditions)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'findFirstComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'findFirstComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval0(Clas_SampleComponentCategory self)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_SampleComponentCategory_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_SampleComponentCategory_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_SampleComponentCategory_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_SampleComponentCategory_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
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
Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_SampleComponentCategory_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_SampleComponentCategory_Get(Clas_SampleComponentCategory self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
Acco_AccessObject Clas_SampleComponentCategory_GetAccess(Clas_SampleComponentCategory self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getAccess' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiList Clas_SampleComponentCategory_GetApplicationData(Clas_SampleComponentCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_SampleComponentCategory Clas_SampleComponentCategory_GetByKey(Clas_SampleComponentCategory self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getByKey' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetClassName(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Classification.SampleComponentCategory.classification

parent 
link
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
Clas_Classification Clas_SampleComponentCategory_GetClassification(Clas_SampleComponentCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiSet Clas_SampleComponentCategory_GetComponents(Clas_SampleComponentCategory self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetDetails(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getDetails' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiList Clas_SampleComponentCategory_GetFieldNames(Clas_SampleComponentCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_SampleComponentCategory_GetFullKey(Clas_SampleComponentCategory self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getFullKey' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiBoolean Clas_SampleComponentCategory_GetInConstructor(Clas_SampleComponentCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getInConstructor' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiBoolean Clas_SampleComponentCategory_GetIsDeleted(Clas_SampleComponentCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @returns  Local object key
**/
ApiObject Clas_SampleComponentCategory_GetLocalKey(Clas_SampleComponentCategory self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetName(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getName' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetPackageName(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getPackageName' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetPackageShortName(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.SampleComponentCategory.parent

link to 
parent object - synonym for classification
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
Clas_Classification Clas_SampleComponentCategory_GetParent(Clas_SampleComponentCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getParent' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiString Clas_SampleComponentCategory_GetQualifiedName(Clas_SampleComponentCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
Impl_MemopsRoot Clas_SampleComponentCategory_GetRoot(Clas_SampleComponentCategory self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getRoot' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
Impl_TopObject Clas_SampleComponentCategory_GetTopObject(Clas_SampleComponentCategory self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_SampleComponentCategory Clas_SampleComponentCategory_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewSampleComponentCategory(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_SampleComponentCategory Clas_SampleComponentCategory_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_SampleComponentCategory_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_SampleComponentCategory_RemoveApplicationData(Clas_SampleComponentCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  Refs_AbstractComponent value
**/
void *Clas_SampleComponentCategory_RemoveComponent(Clas_SampleComponentCategory self, Refs_AbstractComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'removeComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'removeComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_SampleComponentCategory_Set(Clas_SampleComponentCategory self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleComponentCategory self
  @param  Acco_AccessObject value
**/
void *Clas_SampleComponentCategory_SetAccess(Clas_SampleComponentCategory self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'setAccess' is not callable");
  
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
  @param  Clas_SampleComponentCategory self
  @param  ApiList values
**/
void *Clas_SampleComponentCategory_SetApplicationData(Clas_SampleComponentCategory self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiSet values
**/
void *Clas_SampleComponentCategory_SetComponents(Clas_SampleComponentCategory self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'setComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'setComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleComponentCategory self
  @param  ApiString value
**/
void *Clas_SampleComponentCategory_SetDetails(Clas_SampleComponentCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleComponentCategory self
  @param  ApiString value
**/
void *Clas_SampleComponentCategory_SetName(Clas_SampleComponentCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
ApiList Clas_SampleComponentCategory_SortedComponents(Clas_SampleComponentCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: cannot find method 'sortedComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.SampleComponentCategory: method 'sortedComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
