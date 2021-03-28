
#include "ccp.h"

/*
  The MolCompFeature is used to assign information to each part of the MolComponent sequence, as defined by a series of MolResidues with consecutive serials.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  Impl_ApplicationData value
**/
void *Refs_MolCompFeature_AddApplicationData(Refs_MolCompFeature self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean complete
**/
void *Refs_MolCompFeature_CheckAllValid(Refs_MolCompFeature self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean complete
**/
void *Refs_MolCompFeature_CheckValid(Refs_MolCompFeature self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'checkValid' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_MolCompFeature_FindAllApplicationData(Refs_MolCompFeature self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_MolCompFeature_FindAllApplicationData_keyval0(Refs_MolCompFeature self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_MolCompFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_MolCompFeature_FindAllApplicationData_keyval1(Refs_MolCompFeature self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_MolCompFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_MolCompFeature_FindAllApplicationData_keyval2(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_MolCompFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_MolCompFeature_FindAllApplicationData_keyval3(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_MolCompFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
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
ApiList Refs_MolCompFeature_FindAllApplicationData_keyval4(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_MolCompFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData(Refs_MolCompFeature self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval0(Refs_MolCompFeature self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_MolCompFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval1(Refs_MolCompFeature self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_MolCompFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval2(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_MolCompFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval3(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_MolCompFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
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
Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval4(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_MolCompFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_MolCompFeature_Get(Refs_MolCompFeature self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Acco_AccessObject Refs_MolCompFeature_GetAccess(Refs_MolCompFeature self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getAccess' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Acco_AccessObject Refs_MolCompFeature_GetActiveAccess(Refs_MolCompFeature self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getActiveAccess' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiList Refs_MolCompFeature_GetApplicationData(Refs_MolCompFeature self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_MolCompFeature Refs_MolCompFeature_GetByKey(Refs_MolCompFeature self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_MolCompFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getByKey' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetClassName(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.details

Detail field 
for comments.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetDetails(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.endSeqId

Residue 
number (MolResidue.serial) of the end sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiInteger Refs_MolCompFeature_GetEndSeqId(Refs_MolCompFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getEndSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getEndSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.featureType

The type 
of the feature e.g. 'tag', 'cleavage site', 'promoter', 'resistance', 
'marker', 'product',...
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetFeatureType(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFeatureType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getFeatureType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getFeatureType' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiList Refs_MolCompFeature_GetFieldNames(Refs_MolCompFeature self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_MolCompFeature_GetFullKey(Refs_MolCompFeature self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getFullKey' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiBoolean Refs_MolCompFeature_GetInConstructor(Refs_MolCompFeature self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getInConstructor' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiBoolean Refs_MolCompFeature_GetIsDeleted(Refs_MolCompFeature self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Getter for derived attribute length.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiInteger Refs_MolCompFeature_GetLength(Refs_MolCompFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLength");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @returns  Local object key
**/
ApiObject Refs_MolCompFeature_GetLocalKey(Refs_MolCompFeature self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.molComponent

parent 
link
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Refs_MolComponent Refs_MolCompFeature_GetMolComponent(Refs_MolCompFeature self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getMolComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.name

The name of the 
feature.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetName(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.ordering

Integer 
defining the ordering of MolCompFeatures. For when startSeqId and 
endSeqId are not known.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiInteger Refs_MolCompFeature_GetOrdering(Refs_MolCompFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrdering");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getOrdering'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getOrdering' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetPackageName(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getPackageName' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetPackageShortName(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.parent

link to 
parent object - synonym for molComponent
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Refs_MolComponent Refs_MolCompFeature_GetParent(Refs_MolCompFeature self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getParent' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetQualifiedName(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.refMolComponent
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Refs_MolComponent Refs_MolCompFeature_GetRefMolComponent(Refs_MolCompFeature self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getRefMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getRefMolComponent' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Impl_MemopsRoot Refs_MolCompFeature_GetRoot(Refs_MolCompFeature self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiInteger Refs_MolCompFeature_GetSerial(Refs_MolCompFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.startSeqId

Residue 
number (MolResidue.serial) of the start sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiInteger Refs_MolCompFeature_GetStartSeqId(Refs_MolCompFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getStartSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getStartSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.status

The status of 
the feature e.g. cut, uncut,...
  @param  Refs_MolCompFeature self
  @returns   the result
**/
ApiString Refs_MolCompFeature_GetStatus(Refs_MolCompFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getStatus' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @returns   the result
**/
Impl_TopObject Refs_MolCompFeature_GetTopObject(Refs_MolCompFeature self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_MolCompFeature Refs_MolCompFeature_Init(Refs_MolComponent parent, ApiMap attrlinks)
{
  
  return Refs_MolComponent_NewMolCompFeature(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent parent
  @param  char * featureType
  @param  char * name
  @returns  the new object
**/
Refs_MolCompFeature Refs_MolCompFeature_Init_reqd(Refs_MolComponent parent, char * featureType, char * name)
{
  
  Refs_MolCompFeature  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__featureType = ApiString_New(featureType);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "featureType", api__featureType);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_MolCompFeature_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__featureType);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  Impl_ApplicationData value
**/
void *Refs_MolCompFeature_RemoveApplicationData(Refs_MolCompFeature self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_MolCompFeature_Set(Refs_MolCompFeature self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolCompFeature self
  @param  Acco_AccessObject value
**/
void *Refs_MolCompFeature_SetAccess(Refs_MolCompFeature self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setAccess' is not callable");
  
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
  @param  Refs_MolCompFeature self
  @param  ApiList values
**/
void *Refs_MolCompFeature_SetApplicationData(Refs_MolCompFeature self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.details

Detail field 
for comments.
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
void *Refs_MolCompFeature_SetDetails(Refs_MolCompFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.endSeqId

Residue 
number (MolResidue.serial) of the end sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
void *Refs_MolCompFeature_SetEndSeqId(Refs_MolCompFeature self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setEndSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setEndSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.featureType

The type 
of the feature e.g. 'tag', 'cleavage site', 'promoter', 'resistance', 
'marker', 'product',...
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
void *Refs_MolCompFeature_SetFeatureType(Refs_MolCompFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFeatureType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setFeatureType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setFeatureType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.name

The name of the 
feature.
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
void *Refs_MolCompFeature_SetName(Refs_MolCompFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.ordering

Integer 
defining the ordering of MolCompFeatures. For when startSeqId and 
endSeqId are not known.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
void *Refs_MolCompFeature_SetOrdering(Refs_MolCompFeature self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrdering");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setOrdering'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setOrdering' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.refMolComponent
  @param  Refs_MolCompFeature self
  @param  Refs_MolComponent value
**/
void *Refs_MolCompFeature_SetRefMolComponent(Refs_MolCompFeature self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setRefMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setRefMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
void *Refs_MolCompFeature_SetSerial(Refs_MolCompFeature self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.startSeqId

Residue 
number (MolResidue.serial) of the start sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
void *Refs_MolCompFeature_SetStartSeqId(Refs_MolCompFeature self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setStartSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setStartSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.status

The status of 
the feature e.g. cut, uncut,...
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
void *Refs_MolCompFeature_SetStatus(Refs_MolCompFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.MolCompFeature: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
