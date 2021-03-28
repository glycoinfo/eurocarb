
#include "ccp.h"

/*
  The person as member of a group includes position and contact information.
*/

/* package ccp.api.general.Affiliation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  Impl_ApplicationData value
**/
void *Affi_PersonInGroup_AddApplicationData(Affi_PersonInGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Affiliation.PersonInGroup.phoneNumbers

List of 
telephone numbers of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_AddPhoneNumber(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPhoneNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'addPhoneNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'addPhoneNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  ApiBoolean complete
**/
void *Affi_PersonInGroup_CheckAllValid(Affi_PersonInGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  ApiBoolean complete
**/
void *Affi_PersonInGroup_CheckValid(Affi_PersonInGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'checkValid' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_PersonInGroup_FindAllApplicationData(Affi_PersonInGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_PersonInGroup_FindAllApplicationData_keyval0(Affi_PersonInGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_PersonInGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_PersonInGroup_FindAllApplicationData_keyval1(Affi_PersonInGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_PersonInGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_PersonInGroup_FindAllApplicationData_keyval2(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_PersonInGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_PersonInGroup_FindAllApplicationData_keyval3(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_PersonInGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
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
ApiList Affi_PersonInGroup_FindAllApplicationData_keyval4(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_PersonInGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData(Affi_PersonInGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData_keyval0(Affi_PersonInGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_PersonInGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData_keyval1(Affi_PersonInGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_PersonInGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData_keyval2(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_PersonInGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData_keyval3(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_PersonInGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
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
Impl_ApplicationData Affi_PersonInGroup_FindFirstApplicationData_keyval4(Affi_PersonInGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_PersonInGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Affi_PersonInGroup_Get(Affi_PersonInGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Acco_AccessObject Affi_PersonInGroup_GetAccess(Affi_PersonInGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getAccess' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Acco_AccessObject Affi_PersonInGroup_GetActiveAccess(Affi_PersonInGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getActiveAccess' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiList Affi_PersonInGroup_GetApplicationData(Affi_PersonInGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Affi_PersonInGroup Affi_PersonInGroup_GetByKey(Affi_PersonInGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Affi_PersonInGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getByKey' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetClassName(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.deliveryAddress

Delivery 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetDeliveryAddress(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDeliveryAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getDeliveryAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getDeliveryAddress' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.emailAddress

Email 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetEmailAddress(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEmailAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getEmailAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getEmailAddress' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.endDate

The date from 
which the contact data is not valid.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetEndDate(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndDate");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getEndDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.faxNumber

Fax number of 
the person within a certain group.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetFaxNumber(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFaxNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getFaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getFaxNumber' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiList Affi_PersonInGroup_GetFieldNames(Affi_PersonInGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Affi_PersonInGroup_GetFullKey(Affi_PersonInGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.group

Group that the 
PersonInGroup belongs to.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Affi_Group Affi_PersonInGroup_GetGroup(Affi_PersonInGroup self)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getGroup' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiBoolean Affi_PersonInGroup_GetInConstructor(Affi_PersonInGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getInConstructor' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiBoolean Affi_PersonInGroup_GetIsDeleted(Affi_PersonInGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @returns  Local object key
**/
ApiObject Affi_PersonInGroup_GetLocalKey(Affi_PersonInGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.mailingAddress

Mailing 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetMailingAddress(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMailingAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getMailingAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getMailingAddress' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetPackageName(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getPackageName' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetPackageShortName(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.parent

link to parent 
object - synonym for person
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Affi_Person Affi_PersonInGroup_GetParent(Affi_PersonInGroup self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.person

parent link
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Affi_Person Affi_PersonInGroup_GetPerson(Affi_PersonInGroup self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getPerson' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.phoneNumbers

List of 
telephone numbers of the person within a certain group.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiList Affi_PersonInGroup_GetPhoneNumbers(Affi_PersonInGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhoneNumbers");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getPhoneNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getPhoneNumbers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.position

Job position.
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetPosition(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosition");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getPosition' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiString Affi_PersonInGroup_GetQualifiedName(Affi_PersonInGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Impl_MemopsRoot Affi_PersonInGroup_GetRoot(Affi_PersonInGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.PersonInGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Affi_PersonInGroup self
  @returns   the result
**/
ApiInteger Affi_PersonInGroup_GetSerial(Affi_PersonInGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getSerial' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @returns   the result
**/
Impl_TopObject Affi_PersonInGroup_GetTopObject(Affi_PersonInGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Affiliation.PersonInGroup
  @param  Affi_Person parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Affi_PersonInGroup Affi_PersonInGroup_Init(Affi_Person parent, ApiMap attrlinks)
{
  
  return Affi_Person_NewPersonInGroup(parent, attrlinks);
}

/**
  Constructor for ccp.general.Affiliation.PersonInGroup
  @param  Affi_Person parent
  @param  Affi_Group group
  @returns  the new object
**/
Affi_PersonInGroup Affi_PersonInGroup_Init_reqd(Affi_Person parent, Affi_Group group)
{
  
  Affi_PersonInGroup  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "group", group);
  
  obj = Affi_PersonInGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_PersonInGroup self
  @param  Impl_ApplicationData value
**/
void *Affi_PersonInGroup_RemoveApplicationData(Affi_PersonInGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Affiliation.PersonInGroup.phoneNumbers

List of 
telephone numbers of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_RemovePhoneNumber(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePhoneNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'removePhoneNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'removePhoneNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Affiliation.PersonInGroup
  @param  Affi_PersonInGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Affi_PersonInGroup_Set(Affi_PersonInGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_PersonInGroup self
  @param  Acco_AccessObject value
**/
void *Affi_PersonInGroup_SetAccess(Affi_PersonInGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setAccess' is not callable");
  
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
  @param  Affi_PersonInGroup self
  @param  ApiList values
**/
void *Affi_PersonInGroup_SetApplicationData(Affi_PersonInGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.deliveryAddress

Delivery 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetDeliveryAddress(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDeliveryAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setDeliveryAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setDeliveryAddress' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.emailAddress

Email 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetEmailAddress(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEmailAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setEmailAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setEmailAddress' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.endDate

The date from 
which the contact data is not valid.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetEndDate(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndDate");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setEndDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.faxNumber

Fax number of 
the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetFaxNumber(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFaxNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setFaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setFaxNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.group

Group that the 
PersonInGroup belongs to.
  @param  Affi_PersonInGroup self
  @param  Affi_Group value
**/
void *Affi_PersonInGroup_SetGroup(Affi_PersonInGroup self, Affi_Group value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.mailingAddress

Mailing 
address of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetMailingAddress(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMailingAddress");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setMailingAddress'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setMailingAddress' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.phoneNumbers

List of 
telephone numbers of the person within a certain group.
  @param  Affi_PersonInGroup self
  @param  ApiList values
**/
void *Affi_PersonInGroup_SetPhoneNumbers(Affi_PersonInGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhoneNumbers");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setPhoneNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setPhoneNumbers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.position

Job position.
  @param  Affi_PersonInGroup self
  @param  ApiString value
**/
void *Affi_PersonInGroup_SetPosition(Affi_PersonInGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPosition");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.PersonInGroup.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Affi_PersonInGroup self
  @param  ApiInteger value
**/
void *Affi_PersonInGroup_SetSerial(Affi_PersonInGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.PersonInGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
