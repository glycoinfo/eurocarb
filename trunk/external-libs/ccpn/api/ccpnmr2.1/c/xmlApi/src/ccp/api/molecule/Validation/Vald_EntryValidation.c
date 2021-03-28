
#include "ccp.h"

/*
  Validation results for the entire validation entry
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_EntryValidation_AddApplicationData(Vald_EntryValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Validation.EntryValidation
  @param  Vald_EntryValidation self
  @param  ApiBoolean complete
**/
void *Vald_EntryValidation_CheckAllValid(Vald_EntryValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Validation.EntryValidation
  @param  Vald_EntryValidation self
  @param  ApiBoolean complete
**/
void *Vald_EntryValidation_CheckValid(Vald_EntryValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'checkValid' is not callable");
  
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
  @param  Vald_EntryValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_EntryValidation_FindAllApplicationData(Vald_EntryValidation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_EntryValidation_FindAllApplicationData_keyval0(Vald_EntryValidation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_EntryValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_EntryValidation_FindAllApplicationData_keyval1(Vald_EntryValidation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_EntryValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_EntryValidation_FindAllApplicationData_keyval2(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_EntryValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_EntryValidation_FindAllApplicationData_keyval3(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_EntryValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
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
ApiList Vald_EntryValidation_FindAllApplicationData_keyval4(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_EntryValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData(Vald_EntryValidation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData_keyval0(Vald_EntryValidation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_EntryValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData_keyval1(Vald_EntryValidation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_EntryValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData_keyval2(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_EntryValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData_keyval3(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_EntryValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
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
Impl_ApplicationData Vald_EntryValidation_FindFirstApplicationData_keyval4(Vald_EntryValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_EntryValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Validation.EntryValidation
  @param  Vald_EntryValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_EntryValidation_Get(Vald_EntryValidation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_EntryValidation self
  @returns   the result
**/
Acco_AccessObject Vald_EntryValidation_GetAccess(Vald_EntryValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getAccess' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
Acco_AccessObject Vald_EntryValidation_GetActiveAccess(Vald_EntryValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getActiveAccess' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiList Vald_EntryValidation_GetApplicationData(Vald_EntryValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiBoolean Vald_EntryValidation_GetBooleanValue(Vald_EntryValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Validation.EntryValidation
  @param  Vald_EntryValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_EntryValidation Vald_EntryValidation_GetByKey(Vald_EntryValidation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Vald_EntryValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getByKey' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetClassName(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetContext(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getContext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetDetails(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getDetails' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiList Vald_EntryValidation_GetFieldNames(Vald_EntryValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiFloat Vald_EntryValidation_GetFigOfMerit(Vald_EntryValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiFloat Vald_EntryValidation_GetFloatValue(Vald_EntryValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getFloatValue' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiBoolean Vald_EntryValidation_GetInConstructor(Vald_EntryValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiInteger Vald_EntryValidation_GetIntValue(Vald_EntryValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getIntValue' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiBoolean Vald_EntryValidation_GetIsDeleted(Vald_EntryValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetKeyword(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_EntryValidation self
  @returns   the result
**/
Kwdf_KeywordDefinition Vald_EntryValidation_GetKeywordDefinition(Vald_EntryValidation self)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getKeywordDefinition' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetPackageName(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getPackageName' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetPackageShortName(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_EntryValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_EntryValidation_GetParent(Vald_EntryValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getParent' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetQualifiedName(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
Impl_MemopsRoot Vald_EntryValidation_GetRoot(Vald_EntryValidation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiInteger Vald_EntryValidation_GetSerial(Vald_EntryValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_EntryValidation self
  @returns   the result
**/
ApiString Vald_EntryValidation_GetTextValue(Vald_EntryValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getTextValue' is not callable");
  
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
  @param  Vald_EntryValidation self
  @returns   the result
**/
Impl_TopObject Vald_EntryValidation_GetTopObject(Vald_EntryValidation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_EntryValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_EntryValidation_GetValidationStore(Vald_EntryValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Validation.EntryValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_EntryValidation Vald_EntryValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks)
{
  
  return Vald_ValidationStore_NewEntryValidation(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Validation.EntryValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_EntryValidation Vald_EntryValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword)
{
  
  Vald_EntryValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_EntryValidation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_EntryValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_EntryValidation_RemoveApplicationData(Vald_EntryValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Validation.EntryValidation
  @param  Vald_EntryValidation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_EntryValidation_Set(Vald_EntryValidation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_EntryValidation self
  @param  Acco_AccessObject value
**/
void *Vald_EntryValidation_SetAccess(Vald_EntryValidation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setAccess' is not callable");
  
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
  @param  Vald_EntryValidation self
  @param  ApiList values
**/
void *Vald_EntryValidation_SetApplicationData(Vald_EntryValidation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_EntryValidation self
  @param  ApiBoolean value
**/
void *Vald_EntryValidation_SetBooleanValue(Vald_EntryValidation self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_EntryValidation self
  @param  ApiString value
**/
void *Vald_EntryValidation_SetContext(Vald_EntryValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_EntryValidation self
  @param  ApiString value
**/
void *Vald_EntryValidation_SetDetails(Vald_EntryValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_EntryValidation self
  @param  ApiFloat value
**/
void *Vald_EntryValidation_SetFigOfMerit(Vald_EntryValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_EntryValidation self
  @param  ApiFloat value
**/
void *Vald_EntryValidation_SetFloatValue(Vald_EntryValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_EntryValidation self
  @param  ApiInteger value
**/
void *Vald_EntryValidation_SetIntValue(Vald_EntryValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_EntryValidation self
  @param  ApiString value
**/
void *Vald_EntryValidation_SetKeyword(Vald_EntryValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_EntryValidation self
  @param  ApiInteger value
**/
void *Vald_EntryValidation_SetSerial(Vald_EntryValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_EntryValidation self
  @param  ApiString value
**/
void *Vald_EntryValidation_SetTextValue(Vald_EntryValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.EntryValidation: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.EntryValidation: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
