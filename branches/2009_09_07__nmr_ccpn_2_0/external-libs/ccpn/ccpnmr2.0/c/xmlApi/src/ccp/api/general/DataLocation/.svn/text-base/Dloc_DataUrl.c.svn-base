
#include "ccp.h"

/*
  Url descriptor for an absolute data location
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  Impl_ApplicationData value
**/
void *Dloc_DataUrl_AddApplicationData(Dloc_DataUrl self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean complete
**/
void *Dloc_DataUrl_CheckAllValid(Dloc_DataUrl self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean complete
**/
void *Dloc_DataUrl_CheckValid(Dloc_DataUrl self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllAnnotations(Dloc_DataUrl self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findAllAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllAnnotations_keyval0(Dloc_DataUrl self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllAnnotations_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllAnnotations_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllAnnotations_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
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
ApiSet Dloc_DataUrl_FindAllAnnotations_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataUrl_FindAllApplicationData(Dloc_DataUrl self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataUrl_FindAllApplicationData_keyval0(Dloc_DataUrl self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataUrl_FindAllApplicationData_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataUrl_FindAllApplicationData_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataUrl_FindAllApplicationData_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
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
ApiList Dloc_DataUrl_FindAllApplicationData_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllDataStores(Dloc_DataUrl self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findAllDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findAllDataStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllDataStores_keyval0(Dloc_DataUrl self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllDataStores_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllDataStores_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataUrl_FindAllDataStores_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
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
ApiSet Dloc_DataUrl_FindAllDataStores_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation(Dloc_DataUrl self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findFirstAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval0(Dloc_DataUrl self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
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
Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData(Dloc_DataUrl self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval0(Dloc_DataUrl self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
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
Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore(Dloc_DataUrl self, ApiMap conditions)
{
  
  Dloc_AbstractDataStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'findFirstDataStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'findFirstDataStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval0(Dloc_DataUrl self)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataUrl_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval1(Dloc_DataUrl self, char * key, ApiObject value)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataUrl_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataUrl_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataUrl_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
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
Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataUrl_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dloc_DataUrl_Get(Dloc_DataUrl self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataUrl self
  @returns   the result
**/
Acco_AccessObject Dloc_DataUrl_GetAccess(Dloc_DataUrl self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.annotations

Annotations stored 
at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiSet Dloc_DataUrl_GetAnnotations(Dloc_DataUrl self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getAnnotations' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiList Dloc_DataUrl_GetApplicationData(Dloc_DataUrl self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_DataUrl Dloc_DataUrl_GetByKey(Dloc_DataUrl self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getByKey' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiString Dloc_DataUrl_GetClassName(Dloc_DataUrl self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.dataLocationStore

parent link
  @param  Dloc_DataUrl self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_DataUrl_GetDataLocationStore(Dloc_DataUrl self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores 
stored at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiSet Dloc_DataUrl_GetDataStores(Dloc_DataUrl self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getDataStores' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiList Dloc_DataUrl_GetFieldNames(Dloc_DataUrl self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dloc_DataUrl_GetFullKey(Dloc_DataUrl self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getFullKey' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiBoolean Dloc_DataUrl_GetInConstructor(Dloc_DataUrl self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getInConstructor' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiBoolean Dloc_DataUrl_GetIsDeleted(Dloc_DataUrl self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @returns  Local object key
**/
ApiObject Dloc_DataUrl_GetLocalKey(Dloc_DataUrl self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.name

Name of DataUrl, to help 
distinguish to users
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiString Dloc_DataUrl_GetName(Dloc_DataUrl self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getName' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiString Dloc_DataUrl_GetPackageName(Dloc_DataUrl self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getPackageName' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiString Dloc_DataUrl_GetPackageShortName(Dloc_DataUrl self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.parent

link to parent object - 
synonym for dataLocationStore
  @param  Dloc_DataUrl self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_DataUrl_GetParent(Dloc_DataUrl self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getParent' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiString Dloc_DataUrl_GetQualifiedName(Dloc_DataUrl self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
Impl_MemopsRoot Dloc_DataUrl_GetRoot(Dloc_DataUrl self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiInteger Dloc_DataUrl_GetSerial(Dloc_DataUrl self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getSerial' is not callable");
  
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
  @param  Dloc_DataUrl self
  @returns   the result
**/
Impl_TopObject Dloc_DataUrl_GetTopObject(Dloc_DataUrl self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataUrl.url

Description of url.
  @param  Dloc_DataUrl self
  @returns   the result
**/
Impl_Url Dloc_DataUrl_GetUrl(Dloc_DataUrl self)
{
  
  Impl_Url obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'getUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'getUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_DataUrl Dloc_DataUrl_Init(Dloc_DataLocationStore parent, ApiMap attrlinks)
{
  
  return Dloc_DataLocationStore_NewDataUrl(parent, attrlinks);
}

/**
  Constructor for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore parent
  @param  Impl_Url url
  @returns  the new object
**/
Dloc_DataUrl Dloc_DataUrl_Init_reqd(Dloc_DataLocationStore parent, Impl_Url url)
{
  
  Dloc_DataUrl  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "url", url);
  
  obj = Dloc_DataUrl_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  Impl_ApplicationData value
**/
void *Dloc_DataUrl_RemoveApplicationData(Dloc_DataUrl self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dloc_DataUrl_Set(Dloc_DataUrl self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataUrl self
  @param  Acco_AccessObject value
**/
void *Dloc_DataUrl_SetAccess(Dloc_DataUrl self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataUrl.annotations

Annotations stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiSet values
**/
void *Dloc_DataUrl_SetAnnotations(Dloc_DataUrl self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setAnnotations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Dloc_DataUrl self
  @param  ApiList values
**/
void *Dloc_DataUrl_SetApplicationData(Dloc_DataUrl self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiSet values
**/
void *Dloc_DataUrl_SetDataStores(Dloc_DataUrl self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setDataStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataUrl.name

Name of DataUrl, to help 
distinguish to users
  @param  Dloc_DataUrl self
  @param  ApiString value
**/
void *Dloc_DataUrl_SetName(Dloc_DataUrl self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataUrl.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_DataUrl self
  @param  ApiInteger value
**/
void *Dloc_DataUrl_SetSerial(Dloc_DataUrl self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataUrl.url

Description of url.
  @param  Dloc_DataUrl self
  @param  Impl_Url value
**/
void *Dloc_DataUrl_SetUrl(Dloc_DataUrl self, Impl_Url value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'setUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'setUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiList Dloc_DataUrl_SortedAnnotations(Dloc_DataUrl self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
ApiList Dloc_DataUrl_SortedDataStores(Dloc_DataUrl self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataUrl: cannot find method 'sortedDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataUrl: method 'sortedDataStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
