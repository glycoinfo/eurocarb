
#include "ccp.h"

/*
  The feature is an annotation on a residue. The feature is a modification, a mutation,... made in comparison to the wild type sequence, or a simple comment for a particular residue.
*/

/* package ccp.api.general.Annotation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  Impl_ApplicationData value
**/
void *Anno_MolFeature_AddApplicationData(Anno_MolFeature self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean complete
**/
void *Anno_MolFeature_CheckAllValid(Anno_MolFeature self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean complete
**/
void *Anno_MolFeature_CheckValid(Anno_MolFeature self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'checkValid' is not callable");
  
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
  @param  Anno_MolFeature self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_MolFeature_FindAllApplicationData(Anno_MolFeature self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'findAllApplicationData' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_MolFeature_FindAllApplicationData_keyval0(Anno_MolFeature self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_MolFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_MolFeature_FindAllApplicationData_keyval1(Anno_MolFeature self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_MolFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_MolFeature_FindAllApplicationData_keyval2(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_MolFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_MolFeature_FindAllApplicationData_keyval3(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_MolFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
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
ApiList Anno_MolFeature_FindAllApplicationData_keyval4(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_MolFeature_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData(Anno_MolFeature self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval0(Anno_MolFeature self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_MolFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval1(Anno_MolFeature self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_MolFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval2(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_MolFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval3(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_MolFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
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
Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval4(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_MolFeature_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anno_MolFeature_Get(Anno_MolFeature self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_MolFeature self
  @returns   the result
**/
Acco_AccessObject Anno_MolFeature_GetAccess(Anno_MolFeature self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.annotationStore

parent link
  @param  Anno_MolFeature self
  @returns   the result
**/
Anno_AnnotationStore Anno_MolFeature_GetAnnotationStore(Anno_MolFeature self)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getAnnotationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getAnnotationStore' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiList Anno_MolFeature_GetApplicationData(Anno_MolFeature self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anno_MolFeature Anno_MolFeature_GetByKey(Anno_MolFeature self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anno_MolFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getByKey' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetClassName(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.details

Detail field for 
comments.
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetDetails(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.featureType

The type of the 
feature. e.g. 'Selenomethionated', 'Oxidised', 'Reduced', 
'Phosphorylated', 'Methylated', 'Glycosylated', 'Ubiquitinated', 
'Hydroxyprolinated', 'Gammacarboxybutylated', 'Myristolated', 
'Sulfonated'.
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetFeatureType(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFeatureType");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getFeatureType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getFeatureType' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiList Anno_MolFeature_GetFieldNames(Anno_MolFeature self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anno_MolFeature_GetFullKey(Anno_MolFeature self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getFullKey' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiBoolean Anno_MolFeature_GetInConstructor(Anno_MolFeature self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getInConstructor' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiBoolean Anno_MolFeature_GetIsDeleted(Anno_MolFeature self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @returns  Local object key
**/
ApiObject Anno_MolFeature_GetLocalKey(Anno_MolFeature self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.molResidue

The MolResidue who 
has the different features.
  @param  Anno_MolFeature self
  @returns   the result
**/
Mole_MolResidue Anno_MolFeature_GetMolResidue(Anno_MolFeature self)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResidue");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getMolResidue' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetPackageName(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getPackageName' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetPackageShortName(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.parent

link to parent object 
- synonym for annotationStore
  @param  Anno_MolFeature self
  @returns   the result
**/
Anno_AnnotationStore Anno_MolFeature_GetParent(Anno_MolFeature self)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for position attribute.
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiInteger Anno_MolFeature_GetPosition(Anno_MolFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosition");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getPosition' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiString Anno_MolFeature_GetQualifiedName(Anno_MolFeature self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getQualifiedName' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
Impl_MemopsRoot Anno_MolFeature_GetRoot(Anno_MolFeature self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.MolFeature.serial

Unique identifier.
  @param  Anno_MolFeature self
  @returns   the result
**/
ApiInteger Anno_MolFeature_GetSerial(Anno_MolFeature self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getSerial' is not callable");
  
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
  @param  Anno_MolFeature self
  @returns   the result
**/
Impl_TopObject Anno_MolFeature_GetTopObject(Anno_MolFeature self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_MolFeature Anno_MolFeature_Init(Anno_AnnotationStore parent, ApiMap attrlinks)
{
  
  return Anno_AnnotationStore_NewMolFeature(parent, attrlinks);
}

/**
  Constructor for ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore parent
  @param  char * featureType
  @param  Mole_MolResidue molResidue
  @returns  the new object
**/
Anno_MolFeature Anno_MolFeature_Init_reqd(Anno_AnnotationStore parent, char * featureType, Mole_MolResidue molResidue)
{
  
  Anno_MolFeature  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__featureType = ApiString_New(featureType);

  PyDict_SetItemString(attrlinks, "featureType", api__featureType);
  PyDict_SetItemString(attrlinks, "molResidue", molResidue);
  
  obj = Anno_MolFeature_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__featureType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  Impl_ApplicationData value
**/
void *Anno_MolFeature_RemoveApplicationData(Anno_MolFeature self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anno_MolFeature_Set(Anno_MolFeature self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_MolFeature self
  @param  Acco_AccessObject value
**/
void *Anno_MolFeature_SetAccess(Anno_MolFeature self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setAccess' is not callable");
  
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
  @param  Anno_MolFeature self
  @param  ApiList values
**/
void *Anno_MolFeature_SetApplicationData(Anno_MolFeature self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.MolFeature.details

Detail field for 
comments.
  @param  Anno_MolFeature self
  @param  ApiString value
**/
void *Anno_MolFeature_SetDetails(Anno_MolFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.MolFeature.featureType

The type of the 
feature. e.g. 'Selenomethionated', 'Oxidised', 'Reduced', 
'Phosphorylated', 'Methylated', 'Glycosylated', 'Ubiquitinated', 
'Hydroxyprolinated', 'Gammacarboxybutylated', 'Myristolated', 
'Sulfonated'.
  @param  Anno_MolFeature self
  @param  ApiString value
**/
void *Anno_MolFeature_SetFeatureType(Anno_MolFeature self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFeatureType");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setFeatureType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setFeatureType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.MolFeature.molResidue

The MolResidue who 
has the different features.
  @param  Anno_MolFeature self
  @param  Mole_MolResidue value
**/
void *Anno_MolFeature_SetMolResidue(Anno_MolFeature self, Mole_MolResidue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolResidue");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setMolResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.MolFeature.serial

Unique identifier.
  @param  Anno_MolFeature self
  @param  ApiInteger value
**/
void *Anno_MolFeature_SetSerial(Anno_MolFeature self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.MolFeature: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.MolFeature: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
