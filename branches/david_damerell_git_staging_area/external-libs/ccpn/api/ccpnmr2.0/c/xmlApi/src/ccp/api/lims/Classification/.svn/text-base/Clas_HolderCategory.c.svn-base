
#include "ccp.h"

/*
  The category of the holder classified by namingSystem. Different organisations can have their own categories.
*/

/* package ccp.api.lims.Classification */

/**
  Add for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  Hold_AbstractHolderType value
**/
void *Clas_HolderCategory_AddAbstractHolderType(Clas_HolderCategory self, Hold_AbstractHolderType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAbstractHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'addAbstractHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'addAbstractHolderType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_HolderCategory_AddApplicationData(Clas_HolderCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  Hold_Holder value
**/
void *Clas_HolderCategory_AddHolder(Clas_HolderCategory self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'addHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'addHolder' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  ApiBoolean complete
**/
void *Clas_HolderCategory_CheckAllValid(Clas_HolderCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  ApiBoolean complete
**/
void *Clas_HolderCategory_CheckValid(Clas_HolderCategory self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes(Clas_HolderCategory self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAbstractHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findAllAbstractHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findAllAbstractHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes_keyval0(Clas_HolderCategory self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindAllAbstractHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindAllAbstractHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindAllAbstractHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindAllAbstractHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
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
ApiSet Clas_HolderCategory_FindAllAbstractHolderTypes_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindAllAbstractHolderTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_HolderCategory_FindAllApplicationData(Clas_HolderCategory self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_HolderCategory_FindAllApplicationData_keyval0(Clas_HolderCategory self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_HolderCategory_FindAllApplicationData_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_HolderCategory_FindAllApplicationData_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_HolderCategory_FindAllApplicationData_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
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
ApiList Clas_HolderCategory_FindAllApplicationData_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllHolders(Clas_HolderCategory self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findAllHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findAllHolders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllHolders_keyval0(Clas_HolderCategory self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllHolders_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllHolders_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_HolderCategory_FindAllHolders_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
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
ApiSet Clas_HolderCategory_FindAllHolders_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindAllHolders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType(Clas_HolderCategory self, ApiMap conditions)
{
  
  Hold_AbstractHolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAbstractHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findFirstAbstractHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findFirstAbstractHolderType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType_keyval0(Clas_HolderCategory self)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindFirstAbstractHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindFirstAbstractHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindFirstAbstractHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindFirstAbstractHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
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
Hold_AbstractHolderType Clas_HolderCategory_FindFirstAbstractHolderType_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_AbstractHolderType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindFirstAbstractHolderType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData(Clas_HolderCategory self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData_keyval0(Clas_HolderCategory self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
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
Impl_ApplicationData Clas_HolderCategory_FindFirstApplicationData_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Clas_HolderCategory_FindFirstHolder(Clas_HolderCategory self, ApiMap conditions)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'findFirstHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'findFirstHolder' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Clas_HolderCategory_FindFirstHolder_keyval0(Clas_HolderCategory self)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_HolderCategory_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Clas_HolderCategory_FindFirstHolder_keyval1(Clas_HolderCategory self, char * key, ApiObject value)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_HolderCategory_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Clas_HolderCategory_FindFirstHolder_keyval2(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_HolderCategory_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Clas_HolderCategory_FindFirstHolder_keyval3(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_HolderCategory_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
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
Hold_Holder Clas_HolderCategory_FindFirstHolder_keyval4(Clas_HolderCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_HolderCategory_FindFirstHolder(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_HolderCategory_Get(Clas_HolderCategory self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiSet Clas_HolderCategory_GetAbstractHolderTypes(Clas_HolderCategory self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAbstractHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getAbstractHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getAbstractHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_HolderCategory self
  @returns   the result
**/
Acco_AccessObject Clas_HolderCategory_GetAccess(Clas_HolderCategory self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getAccess' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiList Clas_HolderCategory_GetApplicationData(Clas_HolderCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_HolderCategory Clas_HolderCategory_GetByKey(Clas_HolderCategory self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getByKey' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetClassName(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.HolderCategory.classification

parent 
link
  @param  Clas_HolderCategory self
  @returns   the result
**/
Clas_Classification Clas_HolderCategory_GetClassification(Clas_HolderCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getClassification' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetDetails(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getDetails' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiList Clas_HolderCategory_GetFieldNames(Clas_HolderCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_HolderCategory_GetFullKey(Clas_HolderCategory self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiSet Clas_HolderCategory_GetHolders(Clas_HolderCategory self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getHolders' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiBoolean Clas_HolderCategory_GetInConstructor(Clas_HolderCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getInConstructor' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiBoolean Clas_HolderCategory_GetIsDeleted(Clas_HolderCategory self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @returns  Local object key
**/
ApiObject Clas_HolderCategory_GetLocalKey(Clas_HolderCategory self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetName(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getName' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetPackageName(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getPackageName' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetPackageShortName(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.HolderCategory.parent

link to parent 
object - synonym for classification
  @param  Clas_HolderCategory self
  @returns   the result
**/
Clas_Classification Clas_HolderCategory_GetParent(Clas_HolderCategory self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getParent' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiString Clas_HolderCategory_GetQualifiedName(Clas_HolderCategory self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
Impl_MemopsRoot Clas_HolderCategory_GetRoot(Clas_HolderCategory self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getRoot' is not callable");
  
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
  @param  Clas_HolderCategory self
  @returns   the result
**/
Impl_TopObject Clas_HolderCategory_GetTopObject(Clas_HolderCategory self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.HolderCategory
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_HolderCategory Clas_HolderCategory_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewHolderCategory(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.HolderCategory
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_HolderCategory Clas_HolderCategory_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_HolderCategory  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_HolderCategory_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  Hold_AbstractHolderType value
**/
void *Clas_HolderCategory_RemoveAbstractHolderType(Clas_HolderCategory self, Hold_AbstractHolderType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAbstractHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'removeAbstractHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'removeAbstractHolderType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_HolderCategory self
  @param  Impl_ApplicationData value
**/
void *Clas_HolderCategory_RemoveApplicationData(Clas_HolderCategory self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  Hold_Holder value
**/
void *Clas_HolderCategory_RemoveHolder(Clas_HolderCategory self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'removeHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'removeHolder' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.HolderCategory
  @param  Clas_HolderCategory self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_HolderCategory_Set(Clas_HolderCategory self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @param  ApiSet values
**/
void *Clas_HolderCategory_SetAbstractHolderTypes(Clas_HolderCategory self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAbstractHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setAbstractHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setAbstractHolderTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_HolderCategory self
  @param  Acco_AccessObject value
**/
void *Clas_HolderCategory_SetAccess(Clas_HolderCategory self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setAccess' is not callable");
  
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
  @param  Clas_HolderCategory self
  @param  ApiList values
**/
void *Clas_HolderCategory_SetApplicationData(Clas_HolderCategory self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setApplicationData' is not callable");
  
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
  @param  Clas_HolderCategory self
  @param  ApiString value
**/
void *Clas_HolderCategory_SetDetails(Clas_HolderCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @param  ApiSet values
**/
void *Clas_HolderCategory_SetHolders(Clas_HolderCategory self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setHolders' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_HolderCategory self
  @param  ApiString value
**/
void *Clas_HolderCategory_SetName(Clas_HolderCategory self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.HolderCategory.abstractHolderTypes
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiList Clas_HolderCategory_SortedAbstractHolderTypes(Clas_HolderCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAbstractHolderTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'sortedAbstractHolderTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'sortedAbstractHolderTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.HolderCategory.holders
  @param  Clas_HolderCategory self
  @returns   the result
**/
ApiList Clas_HolderCategory_SortedHolders(Clas_HolderCategory self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolders");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.HolderCategory: cannot find method 'sortedHolders'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.HolderCategory: method 'sortedHolders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
