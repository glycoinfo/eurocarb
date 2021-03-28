
#include "ccp.h"

/*
  The reference information for an holder.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  Impl_ApplicationData value
**/
void *Hold_AbstractHolderType_AddApplicationData(Hold_AbstractHolderType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  Clas_HolderCategory value
**/
void *Hold_AbstractHolderType_AddHolderCategory(Hold_AbstractHolderType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'addHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'addHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Hold_AbstractHolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_AbstractHolderType_FindAllApplicationData(Hold_AbstractHolderType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_AbstractHolderType_FindAllApplicationData_keyval0(Hold_AbstractHolderType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_AbstractHolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_AbstractHolderType_FindAllApplicationData_keyval1(Hold_AbstractHolderType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_AbstractHolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_AbstractHolderType_FindAllApplicationData_keyval2(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_AbstractHolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_AbstractHolderType_FindAllApplicationData_keyval3(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_AbstractHolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
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
ApiList Hold_AbstractHolderType_FindAllApplicationData_keyval4(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_AbstractHolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_AbstractHolderType_FindAllHolderCategories(Hold_AbstractHolderType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'findAllHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'findAllHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_AbstractHolderType_FindAllHolderCategories_keyval0(Hold_AbstractHolderType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_AbstractHolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_AbstractHolderType_FindAllHolderCategories_keyval1(Hold_AbstractHolderType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_AbstractHolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_AbstractHolderType_FindAllHolderCategories_keyval2(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_AbstractHolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_AbstractHolderType_FindAllHolderCategories_keyval3(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_AbstractHolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
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
ApiSet Hold_AbstractHolderType_FindAllHolderCategories_keyval4(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_AbstractHolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData(Hold_AbstractHolderType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData_keyval0(Hold_AbstractHolderType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_AbstractHolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData_keyval1(Hold_AbstractHolderType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_AbstractHolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData_keyval2(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_AbstractHolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData_keyval3(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_AbstractHolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_AbstractHolderType self
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
Impl_ApplicationData Hold_AbstractHolderType_FindFirstApplicationData_keyval4(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_AbstractHolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory(Hold_AbstractHolderType self, ApiMap conditions)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'findFirstHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'findFirstHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory_keyval0(Hold_AbstractHolderType self)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_AbstractHolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory_keyval1(Hold_AbstractHolderType self, char * key, ApiObject value)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_AbstractHolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory_keyval2(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_AbstractHolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory_keyval3(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_AbstractHolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
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
Clas_HolderCategory Hold_AbstractHolderType_FindFirstHolderCategory_keyval4(Hold_AbstractHolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_AbstractHolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
Acco_AccessObject Hold_AbstractHolderType_GetAccess(Hold_AbstractHolderType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getAccess' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiList Hold_AbstractHolderType_GetApplicationData(Hold_AbstractHolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.AbstractHolderType
  @param  Hold_AbstractHolderType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_AbstractHolderType Hold_AbstractHolderType_GetByKey(Hold_AbstractHolderType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_AbstractHolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getByKey' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetClassName(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getClassName' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetDetails(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getDetails' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiList Hold_AbstractHolderType_GetFieldNames(Hold_AbstractHolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Holder.AbstractHolderType
  @param  Hold_AbstractHolderType self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Hold_AbstractHolderType_GetFullKey(Hold_AbstractHolderType self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiSet Hold_AbstractHolderType_GetHolderCategories(Hold_AbstractHolderType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderStore

parent link
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
Hold_HolderStore Hold_AbstractHolderType_GetHolderStore(Hold_AbstractHolderType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getHolderStore' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiBoolean Hold_AbstractHolderType_GetInConstructor(Hold_AbstractHolderType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getInConstructor' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiBoolean Hold_AbstractHolderType_GetIsDeleted(Hold_AbstractHolderType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Holder.AbstractHolderType
  @param  Hold_AbstractHolderType self
  @returns  Local object key
**/
ApiObject Hold_AbstractHolderType_GetLocalKey(Hold_AbstractHolderType self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getLocalKey' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetName(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getName' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetPackageName(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getPackageName' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetPackageShortName(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getPackageShortName' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
Hold_HolderStore Hold_AbstractHolderType_GetParent(Hold_AbstractHolderType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getParent' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiString Hold_AbstractHolderType_GetQualifiedName(Hold_AbstractHolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getQualifiedName' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
Impl_MemopsRoot Hold_AbstractHolderType_GetRoot(Hold_AbstractHolderType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getRoot' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
Impl_TopObject Hold_AbstractHolderType_GetTopObject(Hold_AbstractHolderType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Hold_AbstractHolderType self
  @param  Impl_ApplicationData value
**/
void *Hold_AbstractHolderType_RemoveApplicationData(Hold_AbstractHolderType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  Clas_HolderCategory value
**/
void *Hold_AbstractHolderType_RemoveHolderCategory(Hold_AbstractHolderType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'removeHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'removeHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_AbstractHolderType self
  @param  Acco_AccessObject value
**/
void *Hold_AbstractHolderType_SetAccess(Hold_AbstractHolderType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'setAccess' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @param  ApiList values
**/
void *Hold_AbstractHolderType_SetApplicationData(Hold_AbstractHolderType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'setApplicationData' is not callable");
  
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
  @param  Hold_AbstractHolderType self
  @param  ApiString value
**/
void *Hold_AbstractHolderType_SetDetails(Hold_AbstractHolderType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @param  ApiSet values
**/
void *Hold_AbstractHolderType_SetHolderCategories(Hold_AbstractHolderType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'setHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'setHolderCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_AbstractHolderType self
  @param  ApiString value
**/
void *Hold_AbstractHolderType_SetName(Hold_AbstractHolderType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_AbstractHolderType self
  @returns   the result
**/
ApiList Hold_AbstractHolderType_SortedHolderCategories(Hold_AbstractHolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: cannot find method 'sortedHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.AbstractHolderType: method 'sortedHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
