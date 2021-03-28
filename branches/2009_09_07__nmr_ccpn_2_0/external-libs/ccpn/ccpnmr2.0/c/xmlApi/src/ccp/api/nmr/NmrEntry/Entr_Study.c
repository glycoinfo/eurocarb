
#include "ccp.h"

/*
  Group of Entries that belong together.
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  Impl_ApplicationData value
**/
void *Entr_Study_AddApplicationData(Entr_Study self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Study.entries

Entries that are part of Study
  @param  Entr_Study self
  @param  Entr_Entry value
**/
void *Entr_Study_AddEntry(Entr_Study self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Study.keywords

Keywords for searching on Study
  @param  Entr_Study self
  @param  ApiString value
**/
void *Entr_Study_AddKeyword(Entr_Study self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  ApiBoolean complete
**/
void *Entr_Study_CheckAllValid(Entr_Study self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  ApiBoolean complete
**/
void *Entr_Study_CheckValid(Entr_Study self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'checkValid' is not callable");
  
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
  @param  Entr_Study self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Study_FindAllApplicationData(Entr_Study self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'findAllApplicationData' is not callable");
  
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
  @param  Entr_Study self
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Study_FindAllApplicationData_keyval0(Entr_Study self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Study_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Study_FindAllApplicationData_keyval1(Entr_Study self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Study_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Study_FindAllApplicationData_keyval2(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Study_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Study_FindAllApplicationData_keyval3(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Study_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
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
ApiList Entr_Study_FindAllApplicationData_keyval4(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Study_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Study_FindAllEntries(Entr_Study self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Study_FindAllEntries_keyval0(Entr_Study self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Study_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Study_FindAllEntries_keyval1(Entr_Study self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Study_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Study_FindAllEntries_keyval2(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Study_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Study_FindAllEntries_keyval3(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Study_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
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
ApiSet Entr_Study_FindAllEntries_keyval4(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Study_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Study_FindFirstApplicationData(Entr_Study self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'findFirstApplicationData' is not callable");
  
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
  @param  Entr_Study self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Study_FindFirstApplicationData_keyval0(Entr_Study self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Study_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Study_FindFirstApplicationData_keyval1(Entr_Study self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Study_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Study_FindFirstApplicationData_keyval2(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Study_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Study_FindFirstApplicationData_keyval3(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Study_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
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
Impl_ApplicationData Entr_Study_FindFirstApplicationData_keyval4(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Study_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Entr_Study_FindFirstEntry(Entr_Study self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Entr_Study_FindFirstEntry_keyval0(Entr_Study self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Study_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Entr_Study_FindFirstEntry_keyval1(Entr_Study self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Study_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Entr_Study_FindFirstEntry_keyval2(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Study_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Entr_Study_FindFirstEntry_keyval3(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Study_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
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
Entr_Entry Entr_Study_FindFirstEntry_keyval4(Entr_Study self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Study_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Entr_Study_Get(Entr_Study self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Study self
  @returns   the result
**/
Acco_AccessObject Entr_Study_GetAccess(Entr_Study self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getAccess' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiList Entr_Study_GetApplicationData(Entr_Study self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Entr_Study Entr_Study_GetByKey(Entr_Study self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Entr_Study obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getByKey' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetClassName(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetDetails(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.entries

Entries that are part of Study
  @param  Entr_Study self
  @returns   the result
**/
ApiSet Entr_Study_GetEntries(Entr_Study self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getEntries' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiList Entr_Study_GetFieldNames(Entr_Study self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Entr_Study_GetFullKey(Entr_Study self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getFullKey' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiBoolean Entr_Study_GetInConstructor(Entr_Study self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getInConstructor' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiBoolean Entr_Study_GetIsDeleted(Entr_Study self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.keywords

Keywords for searching on Study
  @param  Entr_Study self
  @returns   the result
**/
ApiList Entr_Study_GetKeywords(Entr_Study self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getKeywords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @returns  Local object key
**/
ApiObject Entr_Study_GetLocalKey(Entr_Study self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.name

name of Study
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetName(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.nmrEntryStore

parent link
  @param  Entr_Study self
  @returns   the result
**/
Entr_NmrEntryStore Entr_Study_GetNmrEntryStore(Entr_Study self)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntryStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getNmrEntryStore' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetPackageName(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getPackageName' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetPackageShortName(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.parent

link to parent object - synonym 
for nmrEntryStore
  @param  Entr_Study self
  @returns   the result
**/
Entr_NmrEntryStore Entr_Study_GetParent(Entr_Study self)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getParent' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetQualifiedName(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getQualifiedName' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
Impl_MemopsRoot Entr_Study_GetRoot(Entr_Study self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Study.studyType

Type of Study. NB We need to 
get the allowed values from BMRB.
  @param  Entr_Study self
  @returns   the result
**/
ApiString Entr_Study_GetStudyType(Entr_Study self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStudyType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getStudyType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getStudyType' is not callable");
  
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
  @param  Entr_Study self
  @returns   the result
**/
Impl_TopObject Entr_Study_GetTopObject(Entr_Study self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrEntry.Study
  @param  Entr_NmrEntryStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_Study Entr_Study_Init(Entr_NmrEntryStore parent, ApiMap attrlinks)
{
  
  return Entr_NmrEntryStore_NewStudy(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrEntry.Study
  @param  Entr_NmrEntryStore parent
  @param  char * name
  @returns  the new object
**/
Entr_Study Entr_Study_Init_reqd(Entr_NmrEntryStore parent, char * name)
{
  
  Entr_Study  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Entr_Study_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Study self
  @param  Impl_ApplicationData value
**/
void *Entr_Study_RemoveApplicationData(Entr_Study self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @param  Entr_Entry value
**/
void *Entr_Study_RemoveEntry(Entr_Study self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Study.keywords

Keywords for searching on 
Study
  @param  Entr_Study self
  @param  ApiString value
**/
void *Entr_Study_RemoveKeyword(Entr_Study self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrEntry.Study
  @param  Entr_Study self
  @param  ApiString name
  @param  ApiObject value
**/
void *Entr_Study_Set(Entr_Study self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Study self
  @param  Acco_AccessObject value
**/
void *Entr_Study_SetAccess(Entr_Study self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setAccess' is not callable");
  
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
  @param  Entr_Study self
  @param  ApiList values
**/
void *Entr_Study_SetApplicationData(Entr_Study self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Study.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Study self
  @param  ApiString value
**/
void *Entr_Study_SetDetails(Entr_Study self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Study.entries

Entries that are part of Study
  @param  Entr_Study self
  @param  ApiSet values
**/
void *Entr_Study_SetEntries(Entr_Study self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Study.keywords

Keywords for searching on Study
  @param  Entr_Study self
  @param  ApiList values
**/
void *Entr_Study_SetKeywords(Entr_Study self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setKeywords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Study.name

name of Study
  @param  Entr_Study self
  @param  ApiString value
**/
void *Entr_Study_SetName(Entr_Study self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Study.studyType

Type of Study. NB We need to 
get the allowed values from BMRB.
  @param  Entr_Study self
  @param  ApiString value
**/
void *Entr_Study_SetStudyType(Entr_Study self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStudyType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'setStudyType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'setStudyType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Study.entries

Entries that are part of 
Study
  @param  Entr_Study self
  @returns   the result
**/
ApiList Entr_Study_SortedEntries(Entr_Study self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Study: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Study: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
