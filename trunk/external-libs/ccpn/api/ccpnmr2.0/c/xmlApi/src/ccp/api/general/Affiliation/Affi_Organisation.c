
#include "ccp.h"

/*
  Organisation, public institute or private company.
*/

/* package ccp.api.general.Affiliation */

/**
  Add for ccp.general.Affiliation.Organisation.addresses

The address of 
the organisation. e.g. '80 Tennis Court Road'. It can be stored as a 
list for multiple line address.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_AddAddress(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'addAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'addAddress' is not callable");
  
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
  @param  Affi_Organisation self
  @param  Impl_ApplicationData value
**/
void *Affi_Organisation_AddApplicationData(Affi_Organisation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  ApiBoolean complete
**/
void *Affi_Organisation_CheckAllValid(Affi_Organisation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  ApiBoolean complete
**/
void *Affi_Organisation_CheckValid(Affi_Organisation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'checkValid' is not callable");
  
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
  @param  Affi_Organisation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Organisation_FindAllApplicationData(Affi_Organisation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'findAllApplicationData' is not callable");
  
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
  @param  Affi_Organisation self
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Organisation_FindAllApplicationData_keyval0(Affi_Organisation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Organisation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Organisation_FindAllApplicationData_keyval1(Affi_Organisation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Organisation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Organisation_FindAllApplicationData_keyval2(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Organisation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Organisation_FindAllApplicationData_keyval3(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Organisation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
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
ApiList Affi_Organisation_FindAllApplicationData_keyval4(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Organisation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Organisation_FindAllGroups(Affi_Organisation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'findAllGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'findAllGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Organisation_FindAllGroups_keyval0(Affi_Organisation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Organisation_FindAllGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Organisation_FindAllGroups_keyval1(Affi_Organisation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Organisation_FindAllGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Organisation_FindAllGroups_keyval2(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Organisation_FindAllGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Organisation_FindAllGroups_keyval3(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Organisation_FindAllGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
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
ApiSet Affi_Organisation_FindAllGroups_keyval4(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Organisation_FindAllGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData(Affi_Organisation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Affi_Organisation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData_keyval0(Affi_Organisation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Organisation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData_keyval1(Affi_Organisation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Organisation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData_keyval2(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Organisation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData_keyval3(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Organisation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Organisation self
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
Impl_ApplicationData Affi_Organisation_FindFirstApplicationData_keyval4(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Organisation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Affi_Organisation_FindFirstGroup(Affi_Organisation self, ApiMap conditions)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'findFirstGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'findFirstGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Affi_Organisation_FindFirstGroup_keyval0(Affi_Organisation self)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Organisation_FindFirstGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Affi_Organisation_FindFirstGroup_keyval1(Affi_Organisation self, char * key, ApiObject value)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Organisation_FindFirstGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Affi_Organisation_FindFirstGroup_keyval2(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Organisation_FindFirstGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Affi_Organisation_FindFirstGroup_keyval3(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Organisation_FindFirstGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
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
Affi_Group Affi_Organisation_FindFirstGroup_keyval4(Affi_Organisation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Organisation_FindFirstGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Affi_Organisation_Get(Affi_Organisation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Organisation self
  @returns   the result
**/
Acco_AccessObject Affi_Organisation_GetAccess(Affi_Organisation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.addresses

The address of 
the organisation. e.g. '80 Tennis Court Road'. It can be stored as a 
list for multiple line address.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiList Affi_Organisation_GetAddresses(Affi_Organisation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAddresses");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getAddresses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getAddresses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.affiliationStore

parent 
link
  @param  Affi_Organisation self
  @returns   the result
**/
Affi_AffiliationStore Affi_Organisation_GetAffiliationStore(Affi_Organisation self)
{
  
  Affi_AffiliationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAffiliationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getAffiliationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getAffiliationStore' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiList Affi_Organisation_GetApplicationData(Affi_Organisation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Affi_Organisation Affi_Organisation_GetByKey(Affi_Organisation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.city

The city of the 
organisation. e.g. 'Cambridge'.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetCity(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCity");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getCity' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetClassName(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.country

The country of the 
organisation. e.g. 'UK'.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetCountry(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getCountry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.emailAddress

Email address 
of the organisation.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetEmailAddress(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEmailAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getEmailAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getEmailAddress' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.faxNumber

The fax number.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetFaxNumber(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFaxNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getFaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getFaxNumber' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiList Affi_Organisation_GetFieldNames(Affi_Organisation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Affi_Organisation_GetFullKey(Affi_Organisation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.groups

child link to class 
Group
  @param  Affi_Organisation self
  @returns   the result
**/
ApiSet Affi_Organisation_GetGroups(Affi_Organisation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getGroups' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiBoolean Affi_Organisation_GetInConstructor(Affi_Organisation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getInConstructor' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiBoolean Affi_Organisation_GetIsDeleted(Affi_Organisation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @returns  Local object key
**/
ApiObject Affi_Organisation_GetLocalKey(Affi_Organisation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.name

The name of 
organisation.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetName(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.organisationType

The type 
of organisation, can be 'home laboratory', 'other laboratory', 'reagent 
supplier', 'instrument supplier',...
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetOrganisationType(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganisationType");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getOrganisationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getOrganisationType' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetPackageName(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getPackageName' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetPackageShortName(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.parent

link to parent 
object - synonym for affiliationStore
  @param  Affi_Organisation self
  @returns   the result
**/
Affi_AffiliationStore Affi_Organisation_GetParent(Affi_Organisation self)
{
  
  Affi_AffiliationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.phoneNumber

The telephone 
number.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetPhoneNumber(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhoneNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getPhoneNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getPhoneNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.postalCode

The postal code 
 e.g. 'CB2 1GA'.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetPostalCode(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPostalCode");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getPostalCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getPostalCode' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetQualifiedName(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getQualifiedName' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
Impl_MemopsRoot Affi_Organisation_GetRoot(Affi_Organisation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Affi_Organisation self
  @returns   the result
**/
ApiInteger Affi_Organisation_GetSerial(Affi_Organisation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getSerial' is not callable");
  
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
  @param  Affi_Organisation self
  @returns   the result
**/
Impl_TopObject Affi_Organisation_GetTopObject(Affi_Organisation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Organisation.url

The url of the 
organisation web site.
  @param  Affi_Organisation self
  @returns   the result
**/
ApiString Affi_Organisation_GetUrl(Affi_Organisation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'getUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'getUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Affiliation.Organisation
  @param  Affi_AffiliationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Affi_Organisation Affi_Organisation_Init(Affi_AffiliationStore parent, ApiMap attrlinks)
{
  
  return Affi_AffiliationStore_NewOrganisation(parent, attrlinks);
}

/**
  Constructor for ccp.general.Affiliation.Organisation
  @param  Affi_AffiliationStore parent
  @param  char * name
  @returns  the new object
**/
Affi_Organisation Affi_Organisation_Init_reqd(Affi_AffiliationStore parent, char * name)
{
  
  Affi_Organisation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Affi_Organisation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Affiliation.Group
  @param  Affi_Organisation self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Affi_Group Affi_Organisation_NewGroup(Affi_Organisation self, ApiMap attrlinks)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'newGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'newGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Affiliation.Group
  @param  Affi_Organisation self
  @returns  the new object
**/
Affi_Group Affi_Organisation_NewGroup_reqd(Affi_Organisation self)
{
  
  Affi_Group  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Affi_Organisation_NewGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for ccp.general.Affiliation.Organisation.addresses

The address 
of the organisation. e.g. '80 Tennis Court Road'. It can be stored as a 
list for multiple line address.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_RemoveAddress(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'removeAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'removeAddress' is not callable");
  
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
  @param  Affi_Organisation self
  @param  Impl_ApplicationData value
**/
void *Affi_Organisation_RemoveApplicationData(Affi_Organisation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Affiliation.Organisation
  @param  Affi_Organisation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Affi_Organisation_Set(Affi_Organisation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Organisation self
  @param  Acco_AccessObject value
**/
void *Affi_Organisation_SetAccess(Affi_Organisation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.addresses

The address of 
the organisation. e.g. '80 Tennis Court Road'. It can be stored as a 
list for multiple line address.
  @param  Affi_Organisation self
  @param  ApiList values
**/
void *Affi_Organisation_SetAddresses(Affi_Organisation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAddresses");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setAddresses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setAddresses' is not callable");
  
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
  @param  Affi_Organisation self
  @param  ApiList values
**/
void *Affi_Organisation_SetApplicationData(Affi_Organisation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.city

The city of the 
organisation. e.g. 'Cambridge'.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetCity(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCity");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setCity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.country

The country of the 
organisation. e.g. 'UK'.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetCountry(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setCountry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.emailAddress

Email address 
of the organisation.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetEmailAddress(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEmailAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setEmailAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setEmailAddress' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.faxNumber

The fax number.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetFaxNumber(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFaxNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setFaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setFaxNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.name

The name of 
organisation.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetName(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.organisationType

The type 
of organisation, can be 'home laboratory', 'other laboratory', 'reagent 
supplier', 'instrument supplier',...
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetOrganisationType(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrganisationType");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setOrganisationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setOrganisationType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.phoneNumber

The telephone 
number.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetPhoneNumber(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhoneNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setPhoneNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setPhoneNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.postalCode

The postal code 
 e.g. 'CB2 1GA'.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetPostalCode(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPostalCode");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setPostalCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setPostalCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Affi_Organisation self
  @param  ApiInteger value
**/
void *Affi_Organisation_SetSerial(Affi_Organisation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Organisation.url

The url of the 
organisation web site.
  @param  Affi_Organisation self
  @param  ApiString value
**/
void *Affi_Organisation_SetUrl(Affi_Organisation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'setUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'setUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Affiliation.Organisation.groups

child link to 
class Group
  @param  Affi_Organisation self
  @returns   the result
**/
ApiList Affi_Organisation_SortedGroups(Affi_Organisation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Organisation: cannot find method 'sortedGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Organisation: method 'sortedGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
