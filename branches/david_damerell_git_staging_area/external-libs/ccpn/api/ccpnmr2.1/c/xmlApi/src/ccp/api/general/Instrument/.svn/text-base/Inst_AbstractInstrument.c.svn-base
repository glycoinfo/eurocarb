
#include "ccp.h"

/*
  The details about the instrument system used to collect data for this experiment.
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  Impl_ApplicationData value
**/
void *Inst_AbstractInstrument_AddApplicationData(Inst_AbstractInstrument self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'addApplicationData' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_AbstractInstrument_FindAllApplicationData(Inst_AbstractInstrument self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'findAllApplicationData' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval0(Inst_AbstractInstrument self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_AbstractInstrument_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval1(Inst_AbstractInstrument self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_AbstractInstrument_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval2(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_AbstractInstrument_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval3(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_AbstractInstrument_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
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
ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval4(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_AbstractInstrument_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData(Inst_AbstractInstrument self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'findFirstApplicationData' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval0(Inst_AbstractInstrument self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Inst_AbstractInstrument_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval1(Inst_AbstractInstrument self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Inst_AbstractInstrument_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval2(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Inst_AbstractInstrument_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval3(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Inst_AbstractInstrument_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
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
Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval4(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Inst_AbstractInstrument_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Acco_AccessObject Inst_AbstractInstrument_GetAccess(Inst_AbstractInstrument self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getAccess' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Acco_AccessObject Inst_AbstractInstrument_GetActiveAccess(Inst_AbstractInstrument self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getActiveAccess' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiList Inst_AbstractInstrument_GetApplicationData(Inst_AbstractInstrument self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Inst_AbstractInstrument Inst_AbstractInstrument_GetByKey(Inst_AbstractInstrument self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Inst_AbstractInstrument obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getByKey' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetClassName(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Affi_Person Inst_AbstractInstrument_GetContactPerson(Inst_AbstractInstrument self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getContactPerson' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetDetails(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getDetails' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiList Inst_AbstractInstrument_GetFieldNames(Inst_AbstractInstrument self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Inst_AbstractInstrument_GetFullKey(Inst_AbstractInstrument self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getFullKey' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiBoolean Inst_AbstractInstrument_GetInConstructor(Inst_AbstractInstrument self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Inst_InstrumentStore Inst_AbstractInstrument_GetInstrumentStore(Inst_AbstractInstrument self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentStore");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getInstrumentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getInstrumentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.instrumentType

The 
type of the instrument. Should be an open enumeration.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetInstrumentType(Inst_AbstractInstrument self)
{
}

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiBoolean Inst_AbstractInstrument_GetIsDeleted(Inst_AbstractInstrument self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @returns  Local object key
**/
ApiObject Inst_AbstractInstrument_GetLocalKey(Inst_AbstractInstrument self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Affi_Organisation Inst_AbstractInstrument_GetManufacturer(Inst_AbstractInstrument self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getManufacturer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetModel(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetName(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getName' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetPackageName(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getPackageName' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetPackageShortName(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Inst_InstrumentStore Inst_AbstractInstrument_GetParent(Inst_AbstractInstrument self)
{
  
  Inst_InstrumentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getParent' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetQualifiedName(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getQualifiedName' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Impl_MemopsRoot Inst_AbstractInstrument_GetRoot(Inst_AbstractInstrument self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiInteger Inst_AbstractInstrument_GetSerial(Inst_AbstractInstrument self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
ApiString Inst_AbstractInstrument_GetSerialNumber(Inst_AbstractInstrument self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getSerialNumber' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
Impl_TopObject Inst_AbstractInstrument_GetTopObject(Inst_AbstractInstrument self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'getTopObject' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @param  Impl_ApplicationData value
**/
void *Inst_AbstractInstrument_RemoveApplicationData(Inst_AbstractInstrument self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'removeApplicationData' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @param  Acco_AccessObject value
**/
void *Inst_AbstractInstrument_SetAccess(Inst_AbstractInstrument self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setAccess' is not callable");
  
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
  @param  Inst_AbstractInstrument self
  @param  ApiList values
**/
void *Inst_AbstractInstrument_SetApplicationData(Inst_AbstractInstrument self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_AbstractInstrument self
  @param  Affi_Person value
**/
void *Inst_AbstractInstrument_SetContactPerson(Inst_AbstractInstrument self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContactPerson");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setContactPerson' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
void *Inst_AbstractInstrument_SetDetails(Inst_AbstractInstrument self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.instrumentType

The 
type of the instrument. Should be an open enumeration.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
void *Inst_AbstractInstrument_SetInstrumentType(Inst_AbstractInstrument self, ApiString value)
{
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_AbstractInstrument self
  @param  Affi_Organisation value
**/
void *Inst_AbstractInstrument_SetManufacturer(Inst_AbstractInstrument self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setManufacturer");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setManufacturer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setManufacturer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
void *Inst_AbstractInstrument_SetModel(Inst_AbstractInstrument self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModel");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setModel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
void *Inst_AbstractInstrument_SetName(Inst_AbstractInstrument self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_AbstractInstrument self
  @param  ApiInteger value
**/
void *Inst_AbstractInstrument_SetSerial(Inst_AbstractInstrument self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
void *Inst_AbstractInstrument_SetSerialNumber(Inst_AbstractInstrument self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerialNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: cannot find method 'setSerialNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Instrument.AbstractInstrument: method 'setSerialNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
