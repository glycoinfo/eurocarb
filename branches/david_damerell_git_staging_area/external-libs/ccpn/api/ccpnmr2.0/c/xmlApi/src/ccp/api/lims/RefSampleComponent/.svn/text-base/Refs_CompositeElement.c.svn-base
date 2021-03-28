
#include "ccp.h"

/*
  One element of the composite.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  Impl_ApplicationData value
**/
void *Refs_CompositeElement_AddApplicationData(Refs_CompositeElement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean complete
**/
void *Refs_CompositeElement_CheckAllValid(Refs_CompositeElement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean complete
**/
void *Refs_CompositeElement_CheckValid(Refs_CompositeElement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'checkValid' is not callable");
  
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
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeElement_FindAllApplicationData(Refs_CompositeElement self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeElement_FindAllApplicationData_keyval0(Refs_CompositeElement self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeElement_FindAllApplicationData_keyval1(Refs_CompositeElement self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeElement_FindAllApplicationData_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeElement_FindAllApplicationData_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
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
ApiList Refs_CompositeElement_FindAllApplicationData_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeElement_FindAllInteractions(Refs_CompositeElement self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'findAllInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'findAllInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeElement_FindAllInteractions_keyval0(Refs_CompositeElement self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeElement_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeElement_FindAllInteractions_keyval1(Refs_CompositeElement self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeElement_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeElement_FindAllInteractions_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeElement_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeElement_FindAllInteractions_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeElement_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
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
ApiSet Refs_CompositeElement_FindAllInteractions_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeElement_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData(Refs_CompositeElement self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval0(Refs_CompositeElement self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval1(Refs_CompositeElement self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
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
Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction(Refs_CompositeElement self, ApiMap conditions)
{
  
  Refs_CompositeInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInteraction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'findFirstInteraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'findFirstInteraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval0(Refs_CompositeElement self)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeElement_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval1(Refs_CompositeElement self, char * key, ApiObject value)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeElement_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeElement_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeElement_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
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
Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeElement_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_CompositeElement_Get(Refs_CompositeElement self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeElement self
  @returns   the result
**/
Acco_AccessObject Refs_CompositeElement_GetAccess(Refs_CompositeElement self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getAccess' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiList Refs_CompositeElement_GetApplicationData(Refs_CompositeElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_CompositeElement Refs_CompositeElement_GetByKey(Refs_CompositeElement self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getByKey' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiString Refs_CompositeElement_GetClassName(Refs_CompositeElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeElement.component

Component 
involved as an element in a composite.
  @param  Refs_CompositeElement self
  @returns   the result
**/
Refs_AbstractComponent Refs_CompositeElement_GetComponent(Refs_CompositeElement self)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.composite

parent 
link
  @param  Refs_CompositeElement self
  @returns   the result
**/
Refs_Composite Refs_CompositeElement_GetComposite(Refs_CompositeElement self)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComposite");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getComposite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getComposite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.details

Detail 
field for comments.
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiString Refs_CompositeElement_GetDetails(Refs_CompositeElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getDetails' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiList Refs_CompositeElement_GetFieldNames(Refs_CompositeElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_CompositeElement_GetFullKey(Refs_CompositeElement self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getFullKey' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiBoolean Refs_CompositeElement_GetInConstructor(Refs_CompositeElement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiSet Refs_CompositeElement_GetInteractions(Refs_CompositeElement self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getInteractions' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiBoolean Refs_CompositeElement_GetIsDeleted(Refs_CompositeElement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @returns  Local object key
**/
ApiObject Refs_CompositeElement_GetLocalKey(Refs_CompositeElement self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getLocalKey' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiString Refs_CompositeElement_GetPackageName(Refs_CompositeElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getPackageName' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiString Refs_CompositeElement_GetPackageShortName(Refs_CompositeElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.parent

link to 
parent object - synonym for composite
  @param  Refs_CompositeElement self
  @returns   the result
**/
Refs_Composite Refs_CompositeElement_GetParent(Refs_CompositeElement self)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getParent' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiString Refs_CompositeElement_GetQualifiedName(Refs_CompositeElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
Impl_MemopsRoot Refs_CompositeElement_GetRoot(Refs_CompositeElement self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.serial

Unique 
identifier.
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiInteger Refs_CompositeElement_GetSerial(Refs_CompositeElement self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.stoichiometry

The 
stoichiometry is the number of this element involved in the composit.
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiInteger Refs_CompositeElement_GetStoichiometry(Refs_CompositeElement self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStoichiometry");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getStoichiometry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getStoichiometry' is not callable");
  
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
  @param  Refs_CompositeElement self
  @returns   the result
**/
Impl_TopObject Refs_CompositeElement_GetTopObject(Refs_CompositeElement self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_CompositeElement Refs_CompositeElement_Init(Refs_Composite parent, ApiMap attrlinks)
{
  
  return Refs_Composite_NewCompositeElement(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite parent
  @param  Refs_AbstractComponent component
  @returns  the new object
**/
Refs_CompositeElement Refs_CompositeElement_Init_reqd(Refs_Composite parent, Refs_AbstractComponent component)
{
  
  Refs_CompositeElement  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "component", component);
  
  obj = Refs_CompositeElement_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  Impl_ApplicationData value
**/
void *Refs_CompositeElement_RemoveApplicationData(Refs_CompositeElement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_CompositeElement_Set(Refs_CompositeElement self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeElement self
  @param  Acco_AccessObject value
**/
void *Refs_CompositeElement_SetAccess(Refs_CompositeElement self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setAccess' is not callable");
  
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
  @param  Refs_CompositeElement self
  @param  ApiList values
**/
void *Refs_CompositeElement_SetApplicationData(Refs_CompositeElement self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeElement.component

Component 
involved as an element in a composite.
  @param  Refs_CompositeElement self
  @param  Refs_AbstractComponent value
**/
void *Refs_CompositeElement_SetComponent(Refs_CompositeElement self, Refs_AbstractComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.details

Detail 
field for comments.
  @param  Refs_CompositeElement self
  @param  ApiString value
**/
void *Refs_CompositeElement_SetDetails(Refs_CompositeElement self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiSet values
**/
void *Refs_CompositeElement_SetInteractions(Refs_CompositeElement self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setInteractions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.serial

Unique 
identifier.
  @param  Refs_CompositeElement self
  @param  ApiInteger value
**/
void *Refs_CompositeElement_SetSerial(Refs_CompositeElement self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.stoichiometry

The 
stoichiometry is the number of this element involved in the composit.
  @param  Refs_CompositeElement self
  @param  ApiInteger value
**/
void *Refs_CompositeElement_SetStoichiometry(Refs_CompositeElement self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStoichiometry");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'setStoichiometry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'setStoichiometry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns   the result
**/
ApiList Refs_CompositeElement_SortedInteractions(Refs_CompositeElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: cannot find method 'sortedInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeElement: method 'sortedInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
