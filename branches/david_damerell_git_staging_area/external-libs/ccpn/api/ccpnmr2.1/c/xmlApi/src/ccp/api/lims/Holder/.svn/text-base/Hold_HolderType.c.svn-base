
#include "ccp.h"

/*
  The information to describe a type of holder. A tube uses maxVolume, plate with one sample/well uses HolderTypePosition with no position set rather than A1.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderType_AddApplicationData(Hold_HolderType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  Clas_HolderCategory value
**/
void *Hold_HolderType_AddHolderCategory(Hold_HolderType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'addHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'addHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiBoolean complete
**/
void *Hold_HolderType_CheckAllValid(Hold_HolderType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiBoolean complete
**/
void *Hold_HolderType_CheckValid(Hold_HolderType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'checkValid' is not callable");
  
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
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderType_FindAllApplicationData(Hold_HolderType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderType_FindAllApplicationData_keyval0(Hold_HolderType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderType_FindAllApplicationData_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderType_FindAllApplicationData_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderType_FindAllApplicationData_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
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
ApiList Hold_HolderType_FindAllApplicationData_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderCategories(Hold_HolderType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findAllHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findAllHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderCategories_keyval0(Hold_HolderType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderCategories_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderCategories_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderCategories_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
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
ApiSet Hold_HolderType_FindAllHolderCategories_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderTypePositions(Hold_HolderType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderTypePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findAllHolderTypePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findAllHolderTypePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval0(Hold_HolderType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindAllHolderTypePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindAllHolderTypePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindAllHolderTypePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindAllHolderTypePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
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
ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindAllHolderTypePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData(Hold_HolderType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval0(Hold_HolderType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
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
Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory(Hold_HolderType self, ApiMap conditions)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findFirstHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findFirstHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval0(Hold_HolderType self)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
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
Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition(Hold_HolderType self, ApiMap conditions)
{
  
  Hold_HolderTypePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderTypePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'findFirstHolderTypePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'findFirstHolderTypePosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval0(Hold_HolderType self)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderType_FindFirstHolderTypePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval1(Hold_HolderType self, char * key, ApiObject value)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderType_FindFirstHolderTypePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderType_FindFirstHolderTypePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderType_FindFirstHolderTypePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
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
Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderType_FindFirstHolderTypePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_HolderType_Get(Hold_HolderType self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderType self
  @returns   the result
**/
Acco_AccessObject Hold_HolderType_GetAccess(Hold_HolderType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getAccess' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
Acco_AccessObject Hold_HolderType_GetActiveAccess(Hold_HolderType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getActiveAccess' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiList Hold_HolderType_GetApplicationData(Hold_HolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_HolderType Hold_HolderType_GetByKey(Hold_HolderType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_HolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getByKey' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetClassName(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getClassName' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetDetails(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getDetails' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiList Hold_HolderType_GetFieldNames(Hold_HolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.holdHolderFlag

Is this holder can 
hold another holder?
  @param  Hold_HolderType self
  @returns   the result
**/
ApiBoolean Hold_HolderType_GetHoldHolderFlag(Hold_HolderType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHoldHolderFlag");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getHoldHolderFlag'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getHoldHolderFlag' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns   the result
**/
ApiSet Hold_HolderType_GetHolderCategories(Hold_HolderType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderStore

parent link
  @param  Hold_HolderType self
  @returns   the result
**/
Hold_HolderStore Hold_HolderType_GetHolderStore(Hold_HolderType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getHolderStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.holderTypePositions

child link to 
class HolderTypePosition
  @param  Hold_HolderType self
  @returns   the result
**/
ApiSet Hold_HolderType_GetHolderTypePositions(Hold_HolderType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderTypePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getHolderTypePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getHolderTypePositions' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiBoolean Hold_HolderType_GetInConstructor(Hold_HolderType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getInConstructor' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiBoolean Hold_HolderType_GetIsDeleted(Hold_HolderType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.maxColumn

The maximum number of 
columns.
  @param  Hold_HolderType self
  @returns   the result
**/
ApiInteger Hold_HolderType_GetMaxColumn(Hold_HolderType self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxColumn");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getMaxColumn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getMaxColumn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.maxRow

The maximum number of rows.
  @param  Hold_HolderType self
  @returns   the result
**/
ApiInteger Hold_HolderType_GetMaxRow(Hold_HolderType self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxRow");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getMaxRow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getMaxRow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.maxSubPosition

The maximum number of 
sub-positions.
  @param  Hold_HolderType self
  @returns   the result
**/
ApiInteger Hold_HolderType_GetMaxSubPosition(Hold_HolderType self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getMaxSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getMaxSubPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.maxVolume

The maximum volume.
  @param  Hold_HolderType self
  @returns   the result
**/
ApiFloat Hold_HolderType_GetMaxVolume(Hold_HolderType self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxVolume");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getMaxVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getMaxVolume' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderType.maxVolumeDisplayUnit

The display 
unit of the max volume.
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetMaxVolumeDisplayUnit(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxVolumeDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getMaxVolumeDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getMaxVolumeDisplayUnit' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetName(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getName' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetPackageName(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getPackageName' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetPackageShortName(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getPackageShortName' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
Hold_HolderStore Hold_HolderType_GetParent(Hold_HolderType self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getParent' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
ApiString Hold_HolderType_GetQualifiedName(Hold_HolderType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getQualifiedName' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
Impl_MemopsRoot Hold_HolderType_GetRoot(Hold_HolderType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getRoot' is not callable");
  
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
  @param  Hold_HolderType self
  @returns   the result
**/
Impl_TopObject Hold_HolderType_GetTopObject(Hold_HolderType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.HolderType
  @param  Hold_HolderStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderType Hold_HolderType_Init(Hold_HolderStore parent, ApiMap attrlinks)
{
  
  return Hold_HolderStore_NewHolderType(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.HolderType
  @param  Hold_HolderStore parent
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_HolderType Hold_HolderType_Init_reqd(Hold_HolderStore parent, ApiSet holderCategories, char * name)
{
  
  Hold_HolderType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_HolderType_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderTypePosition Hold_HolderType_NewHolderTypePosition(Hold_HolderType self, ApiMap attrlinks)
{
  
  Hold_HolderTypePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolderTypePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'newHolderTypePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'newHolderTypePosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType self
  @returns  the new object
**/
Hold_HolderTypePosition Hold_HolderType_NewHolderTypePosition_reqd(Hold_HolderType self)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Hold_HolderType_NewHolderTypePosition(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderType_RemoveApplicationData(Hold_HolderType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  Clas_HolderCategory value
**/
void *Hold_HolderType_RemoveHolderCategory(Hold_HolderType self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'removeHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'removeHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_HolderType_Set(Hold_HolderType self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderType self
  @param  Acco_AccessObject value
**/
void *Hold_HolderType_SetAccess(Hold_HolderType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setAccess' is not callable");
  
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
  @param  Hold_HolderType self
  @param  ApiList values
**/
void *Hold_HolderType_SetApplicationData(Hold_HolderType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setApplicationData' is not callable");
  
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
  @param  Hold_HolderType self
  @param  ApiString value
**/
void *Hold_HolderType_SetDetails(Hold_HolderType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.holdHolderFlag

Is this holder can 
hold another holder?
  @param  Hold_HolderType self
  @param  ApiBoolean value
**/
void *Hold_HolderType_SetHoldHolderFlag(Hold_HolderType self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHoldHolderFlag");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setHoldHolderFlag'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setHoldHolderFlag' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiSet values
**/
void *Hold_HolderType_SetHolderCategories(Hold_HolderType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setHolderCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.maxColumn

The maximum number of 
columns.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
void *Hold_HolderType_SetMaxColumn(Hold_HolderType self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxColumn");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setMaxColumn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setMaxColumn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.maxRow

The maximum number of rows.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
void *Hold_HolderType_SetMaxRow(Hold_HolderType self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxRow");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setMaxRow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setMaxRow' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.maxSubPosition

The maximum number of 
sub-positions.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
void *Hold_HolderType_SetMaxSubPosition(Hold_HolderType self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setMaxSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setMaxSubPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.maxVolume

The maximum volume.
  @param  Hold_HolderType self
  @param  ApiFloat value
**/
void *Hold_HolderType_SetMaxVolume(Hold_HolderType self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxVolume");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setMaxVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setMaxVolume' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderType.maxVolumeDisplayUnit

The display 
unit of the max volume.
  @param  Hold_HolderType self
  @param  ApiString value
**/
void *Hold_HolderType_SetMaxVolumeDisplayUnit(Hold_HolderType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxVolumeDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setMaxVolumeDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setMaxVolumeDisplayUnit' is not callable");
  
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
  @param  Hold_HolderType self
  @param  ApiString value
**/
void *Hold_HolderType_SetName(Hold_HolderType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns   the result
**/
ApiList Hold_HolderType_SortedHolderCategories(Hold_HolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'sortedHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'sortedHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.HolderType.holderTypePositions

child link to 
class HolderTypePosition
  @param  Hold_HolderType self
  @returns   the result
**/
ApiList Hold_HolderType_SortedHolderTypePositions(Hold_HolderType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderTypePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderType: cannot find method 'sortedHolderTypePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderType: method 'sortedHolderTypePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
