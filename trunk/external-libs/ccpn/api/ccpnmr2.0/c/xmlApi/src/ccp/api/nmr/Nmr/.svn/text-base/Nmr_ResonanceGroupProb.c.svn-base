
#include "ccp.h"

/*
  Link class for ResonanceGroup-to-ResonanceGroup link. Holds information about the kind of link and its probability. To calculate probabilities, weights are summed over all ResonanceGroupProbs belonging to the same resonance with the same linktype and the same sequenceOffset. sequenceOffset and the linktype are cooperative, so that e.g. linkType == 'basepaired', sequenceOffset == -1 means the base that is basepaired to the preceding base of the sequence. For non-polymers sequenceOffsets are strictly speaking meaningless, but as a special convention the sequenceOffset '1' is interpreted as 'directly bonded to current ResonanceGroup'. 
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  Impl_ApplicationData value
**/
void *Nmr_ResonanceGroupProb_AddApplicationData(Nmr_ResonanceGroupProb self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  ApiBoolean complete
**/
void *Nmr_ResonanceGroupProb_CheckAllValid(Nmr_ResonanceGroupProb self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  ApiBoolean complete
**/
void *Nmr_ResonanceGroupProb_CheckValid(Nmr_ResonanceGroupProb self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'checkValid' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData(Nmr_ResonanceGroupProb self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData_keyval0(Nmr_ResonanceGroupProb self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroupProb_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData_keyval1(Nmr_ResonanceGroupProb self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroupProb_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData_keyval2(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroupProb_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData_keyval3(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroupProb_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
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
ApiList Nmr_ResonanceGroupProb_FindAllApplicationData_keyval4(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroupProb_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData(Nmr_ResonanceGroupProb self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData_keyval0(Nmr_ResonanceGroupProb self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroupProb_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData_keyval1(Nmr_ResonanceGroupProb self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroupProb_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData_keyval2(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroupProb_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData_keyval3(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroupProb_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
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
Impl_ApplicationData Nmr_ResonanceGroupProb_FindFirstApplicationData_keyval4(Nmr_ResonanceGroupProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroupProb_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ResonanceGroupProb_Get(Nmr_ResonanceGroupProb self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Acco_AccessObject Nmr_ResonanceGroupProb_GetAccess(Nmr_ResonanceGroupProb self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getAccess' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiList Nmr_ResonanceGroupProb_GetApplicationData(Nmr_ResonanceGroupProb self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroupProb_GetByKey(Nmr_ResonanceGroupProb self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ResonanceGroupProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getByKey' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiString Nmr_ResonanceGroupProb_GetClassName(Nmr_ResonanceGroupProb self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getClassName' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiList Nmr_ResonanceGroupProb_GetFieldNames(Nmr_ResonanceGroupProb self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.ResonanceGroupProb.fromResonanceGroup

ResonanceGroup owning 
the ResonanceGroup link probability
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Nmr_ResonanceGroup Nmr_ResonanceGroupProb_GetFromResonanceGroup(Nmr_ResonanceGroupProb self)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFromResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getFromResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getFromResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ResonanceGroupProb_GetFullKey(Nmr_ResonanceGroupProb self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiBoolean Nmr_ResonanceGroupProb_GetInConstructor(Nmr_ResonanceGroupProb self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiBoolean Nmr_ResonanceGroupProb_GetIsDeleted(Nmr_ResonanceGroupProb self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroupProb.isSelected

if True signifies 
that this link is considered certain rather than merely probable. This 
allows the selection of links without removing the accumulated 
probability information. All other ResonanceGroupProbs with the same 
linkType and sequenceOffset (but only those) are then considered 
incorrect.
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiBoolean Nmr_ResonanceGroupProb_GetIsSelected(Nmr_ResonanceGroupProb self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSelected");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getIsSelected'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getIsSelected' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroupProb.linkType

Type of link between 
fromResonanceGroup and possibility
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiString Nmr_ResonanceGroupProb_GetLinkType(Nmr_ResonanceGroupProb self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getLinkType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getLinkType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @returns  Local object key
**/
ApiObject Nmr_ResonanceGroupProb_GetLocalKey(Nmr_ResonanceGroupProb self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiString Nmr_ResonanceGroupProb_GetPackageName(Nmr_ResonanceGroupProb self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiString Nmr_ResonanceGroupProb_GetPackageShortName(Nmr_ResonanceGroupProb self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroupProb.parent

link to parent object - 
synonym for fromResonanceGroup
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Nmr_ResonanceGroup Nmr_ResonanceGroupProb_GetParent(Nmr_ResonanceGroupProb self)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroupProb.possibility

Resonance group 
whose link probability is described.
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Nmr_ResonanceGroup Nmr_ResonanceGroupProb_GetPossibility(Nmr_ResonanceGroupProb self)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPossibility");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getPossibility'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getPossibility' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiString Nmr_ResonanceGroupProb_GetQualifiedName(Nmr_ResonanceGroupProb self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ResonanceGroupProb_GetRoot(Nmr_ResonanceGroupProb self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroupProb.sequenceOffset

The number of 
residues distant that the possibility is from the fromResonanceGroup. If 
it is thought that fromResonanceGroup is e.g. Ala-39 and possibility is 
Thr-38, the correct value for sequenceOffset is -1.
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiInteger Nmr_ResonanceGroupProb_GetSequenceOffset(Nmr_ResonanceGroupProb self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSequenceOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getSequenceOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getSequenceOffset' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
Impl_TopObject Nmr_ResonanceGroupProb_GetTopObject(Nmr_ResonanceGroupProb self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResonanceGroupProb self
  @returns   the result
**/
ApiFloat Nmr_ResonanceGroupProb_GetWeight(Nmr_ResonanceGroupProb self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroup parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroupProb_Init(Nmr_ResonanceGroup parent, ApiMap attrlinks)
{
  
  return Nmr_ResonanceGroup_NewResonanceGroupProb(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroup parent
  @param  char * linkType
  @param  Nmr_ResonanceGroup possibility
  @returns  the new object
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroupProb_Init_reqd(Nmr_ResonanceGroup parent, char * linkType, Nmr_ResonanceGroup possibility)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkType = ApiString_New(linkType);

  PyDict_SetItemString(attrlinks, "linkType", api__linkType);
  PyDict_SetItemString(attrlinks, "possibility", possibility);
  
  obj = Nmr_ResonanceGroupProb_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroupProb self
  @param  Impl_ApplicationData value
**/
void *Nmr_ResonanceGroupProb_RemoveApplicationData(Nmr_ResonanceGroupProb self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroupProb self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ResonanceGroupProb_Set(Nmr_ResonanceGroupProb self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResonanceGroupProb self
  @param  Acco_AccessObject value
**/
void *Nmr_ResonanceGroupProb_SetAccess(Nmr_ResonanceGroupProb self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setAccess' is not callable");
  
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
  @param  Nmr_ResonanceGroupProb self
  @param  ApiList values
**/
void *Nmr_ResonanceGroupProb_SetApplicationData(Nmr_ResonanceGroupProb self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroupProb.isSelected

if True signifies 
that this link is considered certain rather than merely probable. This 
allows the selection of links without removing the accumulated 
probability information. All other ResonanceGroupProbs with the same 
linkType and sequenceOffset (but only those) are then considered 
incorrect.
  @param  Nmr_ResonanceGroupProb self
  @param  ApiBoolean value
**/
void *Nmr_ResonanceGroupProb_SetIsSelected(Nmr_ResonanceGroupProb self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSelected");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setIsSelected'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setIsSelected' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroupProb.linkType

Type of link between 
fromResonanceGroup and possibility
  @param  Nmr_ResonanceGroupProb self
  @param  ApiString value
**/
void *Nmr_ResonanceGroupProb_SetLinkType(Nmr_ResonanceGroupProb self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinkType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setLinkType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setLinkType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroupProb.possibility

Resonance group 
whose link probability is described.
  @param  Nmr_ResonanceGroupProb self
  @param  Nmr_ResonanceGroup value
**/
void *Nmr_ResonanceGroupProb_SetPossibility(Nmr_ResonanceGroupProb self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPossibility");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setPossibility'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setPossibility' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroupProb.sequenceOffset

The number of 
residues distant that the possibility is from the fromResonanceGroup. If 
it is thought that fromResonanceGroup is e.g. Ala-39 and possibility is 
Thr-38, the correct value for sequenceOffset is -1.
  @param  Nmr_ResonanceGroupProb self
  @param  ApiInteger value
**/
void *Nmr_ResonanceGroupProb_SetSequenceOffset(Nmr_ResonanceGroupProb self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSequenceOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setSequenceOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setSequenceOffset' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResonanceGroupProb self
  @param  ApiFloat value
**/
void *Nmr_ResonanceGroupProb_SetWeight(Nmr_ResonanceGroupProb self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroupProb: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
