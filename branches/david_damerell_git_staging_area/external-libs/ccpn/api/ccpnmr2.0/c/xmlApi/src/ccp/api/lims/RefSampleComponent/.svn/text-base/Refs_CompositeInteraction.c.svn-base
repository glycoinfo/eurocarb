
#include "ccp.h"

/*
  The interaction between two composite elements.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  Impl_ApplicationData value
**/
void *Refs_CompositeInteraction_AddApplicationData(Refs_CompositeInteraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean complete
**/
void *Refs_CompositeInteraction_CheckAllValid(Refs_CompositeInteraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean complete
**/
void *Refs_CompositeInteraction_CheckValid(Refs_CompositeInteraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'checkValid' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeInteraction_FindAllApplicationData(Refs_CompositeInteraction self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval0(Refs_CompositeInteraction self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
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
ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeInteraction_FindAllElements(Refs_CompositeInteraction self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'findAllElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'findAllElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeInteraction_FindAllElements_keyval0(Refs_CompositeInteraction self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeInteraction_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeInteraction_FindAllElements_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeInteraction_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeInteraction_FindAllElements_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeInteraction_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_CompositeInteraction_FindAllElements_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeInteraction_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
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
ApiSet Refs_CompositeInteraction_FindAllElements_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeInteraction_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData(Refs_CompositeInteraction self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval0(Refs_CompositeInteraction self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
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
Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement(Refs_CompositeInteraction self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'findFirstElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'findFirstElement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval0(Refs_CompositeInteraction self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_CompositeInteraction_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_CompositeInteraction_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_CompositeInteraction_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_CompositeInteraction_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
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
Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_CompositeInteraction_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_CompositeInteraction_Get(Refs_CompositeInteraction self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
Acco_AccessObject Refs_CompositeInteraction_GetAccess(Refs_CompositeInteraction self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.affinity

The 
dissociation constant K of the complex, in units of M (moles/liter) to 
the appropriate power, according to the formula 
K=[A][B][C]/[ABC] 
Here 
in units of M-squared (for a ternary complex).
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiFloat Refs_CompositeInteraction_GetAffinity(Refs_CompositeInteraction self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAffinity");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getAffinity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getAffinity' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiList Refs_CompositeInteraction_GetApplicationData(Refs_CompositeInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.assessmentMethod

The 
assessment method used to define this interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetAssessmentMethod(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAssessmentMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getAssessmentMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getAssessmentMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_CompositeInteraction Refs_CompositeInteraction_GetByKey(Refs_CompositeInteraction self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_CompositeInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getByKey' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetClassName(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.composite

parent link
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
Refs_Composite Refs_CompositeInteraction_GetComposite(Refs_CompositeInteraction self)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComposite");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getComposite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getComposite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.details

Detail 
field for comments.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetDetails(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiSet Refs_CompositeInteraction_GetElements(Refs_CompositeInteraction self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getElements' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiList Refs_CompositeInteraction_GetFieldNames(Refs_CompositeInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_CompositeInteraction_GetFullKey(Refs_CompositeInteraction self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getFullKey' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiBoolean Refs_CompositeInteraction_GetInConstructor(Refs_CompositeInteraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.interactionType

The 
type of the interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetInteractionType(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInteractionType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getInteractionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getInteractionType' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiBoolean Refs_CompositeInteraction_GetIsDeleted(Refs_CompositeInteraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @returns  Local object key
**/
ApiObject Refs_CompositeInteraction_GetLocalKey(Refs_CompositeInteraction self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getLocalKey' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetPackageName(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getPackageName' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetPackageShortName(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.parent

link to 
parent object - synonym for composite
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
Refs_Composite Refs_CompositeInteraction_GetParent(Refs_CompositeInteraction self)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getParent' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiString Refs_CompositeInteraction_GetQualifiedName(Refs_CompositeInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
Impl_MemopsRoot Refs_CompositeInteraction_GetRoot(Refs_CompositeInteraction self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.serial

Unique 
identifier.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiInteger Refs_CompositeInteraction_GetSerial(Refs_CompositeInteraction self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getSerial' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
Impl_TopObject Refs_CompositeInteraction_GetTopObject(Refs_CompositeInteraction self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_CompositeInteraction Refs_CompositeInteraction_Init(Refs_Composite parent, ApiMap attrlinks)
{
  
  return Refs_Composite_NewCompositeInteraction(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite parent
  @param  ApiSet elements
  @param  char * interactionType
  @returns  the new object
**/
Refs_CompositeInteraction Refs_CompositeInteraction_Init_reqd(Refs_Composite parent, ApiSet elements, char * interactionType)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__interactionType = ApiString_New(interactionType);

  PyDict_SetItemString(attrlinks, "elements", elements);
  PyDict_SetItemString(attrlinks, "interactionType", api__interactionType);
  
  obj = Refs_CompositeInteraction_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__interactionType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  Impl_ApplicationData value
**/
void *Refs_CompositeInteraction_RemoveApplicationData(Refs_CompositeInteraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_CompositeInteraction_Set(Refs_CompositeInteraction self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeInteraction self
  @param  Acco_AccessObject value
**/
void *Refs_CompositeInteraction_SetAccess(Refs_CompositeInteraction self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.affinity

The 
dissociation constant K of the complex, in units of M (moles/liter) to 
the appropriate power, according to the formula 
K=[A][B][C]/[ABC] 
Here 
in units of M-squared (for a ternary complex).
  @param  Refs_CompositeInteraction self
  @param  ApiFloat value
**/
void *Refs_CompositeInteraction_SetAffinity(Refs_CompositeInteraction self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAffinity");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setAffinity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setAffinity' is not callable");
  
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
  @param  Refs_CompositeInteraction self
  @param  ApiList values
**/
void *Refs_CompositeInteraction_SetApplicationData(Refs_CompositeInteraction self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeInteraction.assessmentMethod

The 
assessment method used to define this interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
void *Refs_CompositeInteraction_SetAssessmentMethod(Refs_CompositeInteraction self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAssessmentMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setAssessmentMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setAssessmentMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.details

Detail 
field for comments.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
void *Refs_CompositeInteraction_SetDetails(Refs_CompositeInteraction self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiSet values
**/
void *Refs_CompositeInteraction_SetElements(Refs_CompositeInteraction self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setElements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeInteraction.interactionType

The 
type of the interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
void *Refs_CompositeInteraction_SetInteractionType(Refs_CompositeInteraction self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInteractionType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setInteractionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setInteractionType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.serial

Unique 
identifier.
  @param  Refs_CompositeInteraction self
  @param  ApiInteger value
**/
void *Refs_CompositeInteraction_SetSerial(Refs_CompositeInteraction self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
ApiList Refs_CompositeInteraction_SortedElements(Refs_CompositeInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: cannot find method 'sortedElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.CompositeInteraction: method 'sortedElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
