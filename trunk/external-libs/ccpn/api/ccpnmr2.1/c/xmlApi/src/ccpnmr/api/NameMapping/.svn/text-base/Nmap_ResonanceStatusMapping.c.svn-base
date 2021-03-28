
#include "ccp.h"

/*
  This allows linkResonances settings to be reapplied when linking the same data again.
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_ResonanceStatusMapping_AddApplicationData(Nmap_ResonanceStatusMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean complete
**/
void *Nmap_ResonanceStatusMapping_CheckAllValid(Nmap_ResonanceStatusMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean complete
**/
void *Nmap_ResonanceStatusMapping_CheckValid(Nmap_ResonanceStatusMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'checkValid' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData(Nmap_ResonanceStatusMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData_keyval0(Nmap_ResonanceStatusMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_ResonanceStatusMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData_keyval1(Nmap_ResonanceStatusMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_ResonanceStatusMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData_keyval2(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_ResonanceStatusMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData_keyval3(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_ResonanceStatusMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
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
ApiList Nmap_ResonanceStatusMapping_FindAllApplicationData_keyval4(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_ResonanceStatusMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData(Nmap_ResonanceStatusMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData_keyval0(Nmap_ResonanceStatusMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_ResonanceStatusMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData_keyval1(Nmap_ResonanceStatusMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_ResonanceStatusMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData_keyval2(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_ResonanceStatusMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData_keyval3(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_ResonanceStatusMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
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
Impl_ApplicationData Nmap_ResonanceStatusMapping_FindFirstApplicationData_keyval4(Nmap_ResonanceStatusMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_ResonanceStatusMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmap_ResonanceStatusMapping_Get(Nmap_ResonanceStatusMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_ResonanceStatusMapping_GetAccess(Nmap_ResonanceStatusMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getAccess' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_ResonanceStatusMapping_GetActiveAccess(Nmap_ResonanceStatusMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getActiveAccess' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiList Nmap_ResonanceStatusMapping_GetApplicationData(Nmap_ResonanceStatusMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmap_ResonanceStatusMapping Nmap_ResonanceStatusMapping_GetByKey(Nmap_ResonanceStatusMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmap_ResonanceStatusMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getByKey' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceStatusMapping_GetClassName(Nmap_ResonanceStatusMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getClassName' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiList Nmap_ResonanceStatusMapping_GetFieldNames(Nmap_ResonanceStatusMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmap_ResonanceStatusMapping_GetFullKey(Nmap_ResonanceStatusMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getFullKey' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceStatusMapping_GetInConstructor(Nmap_ResonanceStatusMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getInConstructor' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceStatusMapping_GetIsDeleted(Nmap_ResonanceStatusMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.isSinglePossEquiv

Is 
this resonance a single possibly equivalent proton? E.g. for an HD1 in a 
PHE residue, this flag is 0 when the HD2 proton is not equivalent, and 1 
when the HD2 proton is equivalent.
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceStatusMapping_GetIsSinglePossEquiv(Nmap_ResonanceStatusMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSinglePossEquiv");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getIsSinglePossEquiv'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getIsSinglePossEquiv' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.isSingleProchiral

Is 
this resonance a single prochiral? E.g. for an HB2 in an ASP residue, 
this flag is 1 when nothing is known about HB3, and 0 when the HB3 
carries the same information as the HB2.
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceStatusMapping_GetIsSingleProchiral(Nmap_ResonanceStatusMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSingleProchiral");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getIsSingleProchiral'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getIsSingleProchiral' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.isStereo

Is this 
resonance stereospecifically assigned?
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceStatusMapping_GetIsStereo(Nmap_ResonanceStatusMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsStereo");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getIsStereo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getIsStereo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @returns  Local object key
**/
ApiObject Nmap_ResonanceStatusMapping_GetLocalKey(Nmap_ResonanceStatusMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.nameMapping

parent 
link
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_ResonanceStatusMapping_GetNameMapping(Nmap_ResonanceStatusMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNameMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getNameMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getNameMapping' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceStatusMapping_GetPackageName(Nmap_ResonanceStatusMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getPackageName' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceStatusMapping_GetPackageShortName(Nmap_ResonanceStatusMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.parent

link to parent 
object - synonym for nameMapping
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_ResonanceStatusMapping_GetParent(Nmap_ResonanceStatusMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getParent' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceStatusMapping_GetQualifiedName(Nmap_ResonanceStatusMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.resonanceName

The 
resonance name for the specific format (e.g. 'A.11.HN')
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceStatusMapping_GetResonanceName(Nmap_ResonanceStatusMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getResonanceName' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Impl_MemopsRoot Nmap_ResonanceStatusMapping_GetRoot(Nmap_ResonanceStatusMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceStatusMapping.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
ApiInteger Nmap_ResonanceStatusMapping_GetSerial(Nmap_ResonanceStatusMapping self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getSerial' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @returns   the result
**/
Impl_TopObject Nmap_ResonanceStatusMapping_GetTopObject(Nmap_ResonanceStatusMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_ResonanceStatusMapping Nmap_ResonanceStatusMapping_Init(Nmap_NameMapping parent, ApiMap attrlinks)
{
  
  return Nmap_NameMapping_NewResonanceStatusMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping parent
  @param  char * resonanceName
  @returns  the new object
**/
Nmap_ResonanceStatusMapping Nmap_ResonanceStatusMapping_Init_reqd(Nmap_NameMapping parent, char * resonanceName)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__resonanceName = ApiString_New(resonanceName);

  PyDict_SetItemString(attrlinks, "resonanceName", api__resonanceName);
  
  obj = Nmap_ResonanceStatusMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__resonanceName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceStatusMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_ResonanceStatusMapping_RemoveApplicationData(Nmap_ResonanceStatusMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmap_ResonanceStatusMapping_Set(Nmap_ResonanceStatusMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceStatusMapping self
  @param  Acco_AccessObject value
**/
void *Nmap_ResonanceStatusMapping_SetAccess(Nmap_ResonanceStatusMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setAccess' is not callable");
  
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
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiList values
**/
void *Nmap_ResonanceStatusMapping_SetApplicationData(Nmap_ResonanceStatusMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceStatusMapping.isSinglePossEquiv

Is 
this resonance a single possibly equivalent proton? E.g. for an HD1 in a 
PHE residue, this flag is 0 when the HD2 proton is not equivalent, and 1 
when the HD2 proton is equivalent.
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean value
**/
void *Nmap_ResonanceStatusMapping_SetIsSinglePossEquiv(Nmap_ResonanceStatusMapping self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSinglePossEquiv");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setIsSinglePossEquiv'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setIsSinglePossEquiv' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceStatusMapping.isSingleProchiral

Is 
this resonance a single prochiral? E.g. for an HB2 in an ASP residue, 
this flag is 1 when nothing is known about HB3, and 0 when the HB3 
carries the same information as the HB2.
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean value
**/
void *Nmap_ResonanceStatusMapping_SetIsSingleProchiral(Nmap_ResonanceStatusMapping self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSingleProchiral");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setIsSingleProchiral'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setIsSingleProchiral' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceStatusMapping.isStereo

Is this 
resonance stereospecifically assigned?
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiBoolean value
**/
void *Nmap_ResonanceStatusMapping_SetIsStereo(Nmap_ResonanceStatusMapping self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsStereo");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setIsStereo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setIsStereo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceStatusMapping.resonanceName

The 
resonance name for the specific format (e.g. 'A.11.HN')
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiString value
**/
void *Nmap_ResonanceStatusMapping_SetResonanceName(Nmap_ResonanceStatusMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setResonanceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceStatusMapping.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceStatusMapping self
  @param  ApiInteger value
**/
void *Nmap_ResonanceStatusMapping_SetSerial(Nmap_ResonanceStatusMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceStatusMapping: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
