
#include "ccp.h"

/*
  The type of pin for a crystal container.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  Impl_ApplicationData value
**/
void *Hold_PinType_AddApplicationData(Hold_PinType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  Clas_HolderCategory value
**/
void *Hold_PinType_AddHolderCategory(Hold_PinType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'addHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'addHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiBoolean complete
**/
void *Hold_PinType_CheckAllValid(Hold_PinType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiBoolean complete
**/
void *Hold_PinType_CheckValid(Hold_PinType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'checkValid' is not callable");
  
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
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_PinType_FindAllApplicationData(Hold_PinType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_PinType self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_PinType_FindAllApplicationData_keyval0(Hold_PinType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_PinType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_PinType_FindAllApplicationData_keyval1(Hold_PinType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_PinType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_PinType_FindAllApplicationData_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_PinType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_PinType_FindAllApplicationData_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_PinType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
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
ApiList Hold_PinType_FindAllApplicationData_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_PinType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_PinType_FindAllHolderCategories(Hold_PinType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'findAllHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'findAllHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_PinType_FindAllHolderCategories_keyval0(Hold_PinType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_PinType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_PinType_FindAllHolderCategories_keyval1(Hold_PinType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_PinType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_PinType_FindAllHolderCategories_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_PinType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_PinType_FindAllHolderCategories_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_PinType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
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
ApiSet Hold_PinType_FindAllHolderCategories_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_PinType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_PinType_FindFirstApplicationData(Hold_PinType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_PinType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval0(Hold_PinType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_PinType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval1(Hold_PinType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_PinType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_PinType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_PinType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
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
Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_PinType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory(Hold_PinType self, ApiMap conditions)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'findFirstHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'findFirstHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval0(Hold_PinType self)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_PinType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval1(Hold_PinType self, char * key, ApiObject value)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_PinType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_PinType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_PinType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
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
Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_PinType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_PinType_Get(Hold_PinType self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_PinType self
  @returns   the result
**/
Acco_AccessObject Hold_PinType_GetAccess(Hold_PinType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getAccess' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiList Hold_PinType_GetApplicationData(Hold_PinType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_PinType Hold_PinType_GetByKey(Hold_PinType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_PinType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getByKey' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetClassName(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetDetails(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getDetails' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiList Hold_PinType_GetFieldNames(Hold_PinType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns   the result
**/
ApiSet Hold_PinType_GetHolderCategories(Hold_PinType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderStore

parent link
  @param  Hold_PinType self
  @returns   the result
**/
Hold_HolderStore Hold_PinType_GetHolderStore(Hold_PinType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getHolderStore' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiBoolean Hold_PinType_GetInConstructor(Hold_PinType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getInConstructor' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiBoolean Hold_PinType_GetIsDeleted(Hold_PinType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.PinType.length

The length of pin + hat, in 
millimeter.
  @param  Hold_PinType self
  @returns   the result
**/
ApiFloat Hold_PinType_GetLength(Hold_PinType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLength");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.PinType.loopLength

The length of the loop 
containing the Crystal, in millimeter.
  @param  Hold_PinType self
  @returns   the result
**/
ApiFloat Hold_PinType_GetLoopLength(Hold_PinType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLoopLength");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getLoopLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getLoopLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.PinType.loopType

The type of the loop.
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetLoopType(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLoopType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getLoopType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getLoopType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetName(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getName' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetPackageName(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getPackageName' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetPackageShortName(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.parent

link to parent object 
- synonym for holderStore
  @param  Hold_PinType self
  @returns   the result
**/
Hold_HolderStore Hold_PinType_GetParent(Hold_PinType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getParent' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
ApiString Hold_PinType_GetQualifiedName(Hold_PinType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getQualifiedName' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
Impl_MemopsRoot Hold_PinType_GetRoot(Hold_PinType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getRoot' is not callable");
  
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
  @param  Hold_PinType self
  @returns   the result
**/
Impl_TopObject Hold_PinType_GetTopObject(Hold_PinType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.PinType.wireWidth

The width of the loop wire, 
in micrometer.
  @param  Hold_PinType self
  @returns   the result
**/
ApiFloat Hold_PinType_GetWireWidth(Hold_PinType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWireWidth");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'getWireWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'getWireWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.PinType
  @param  Hold_HolderStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_PinType Hold_PinType_Init(Hold_HolderStore parent, ApiMap attrlinks)
{
  
  return Hold_HolderStore_NewPinType(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.PinType
  @param  Hold_HolderStore parent
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_PinType Hold_PinType_Init_reqd(Hold_HolderStore parent, ApiSet holderCategories, char * name)
{
  
  Hold_PinType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_PinType_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  Impl_ApplicationData value
**/
void *Hold_PinType_RemoveApplicationData(Hold_PinType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  Clas_HolderCategory value
**/
void *Hold_PinType_RemoveHolderCategory(Hold_PinType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'removeHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'removeHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_PinType_Set(Hold_PinType self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_PinType self
  @param  Acco_AccessObject value
**/
void *Hold_PinType_SetAccess(Hold_PinType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setAccess' is not callable");
  
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
  @param  Hold_PinType self
  @param  ApiList values
**/
void *Hold_PinType_SetApplicationData(Hold_PinType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_PinType self
  @param  ApiString value
**/
void *Hold_PinType_SetDetails(Hold_PinType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiSet values
**/
void *Hold_PinType_SetHolderCategories(Hold_PinType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setHolderCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.PinType.length

The length of pin + hat, in 
millimeter.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
void *Hold_PinType_SetLength(Hold_PinType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLength");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.PinType.loopLength

The length of the loop 
containing the Crystal, in millimeter.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
void *Hold_PinType_SetLoopLength(Hold_PinType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLoopLength");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setLoopLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setLoopLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.PinType.loopType

The type of the loop.
  @param  Hold_PinType self
  @param  ApiString value
**/
void *Hold_PinType_SetLoopType(Hold_PinType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLoopType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setLoopType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setLoopType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_PinType self
  @param  ApiString value
**/
void *Hold_PinType_SetName(Hold_PinType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.PinType.wireWidth

The width of the loop wire, 
in micrometer.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
void *Hold_PinType_SetWireWidth(Hold_PinType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWireWidth");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'setWireWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'setWireWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns   the result
**/
ApiList Hold_PinType_SortedHolderCategories(Hold_PinType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.PinType: cannot find method 'sortedHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.PinType: method 'sortedHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
