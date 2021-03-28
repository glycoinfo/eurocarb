
#include "ccp.h"

/*
  The information on the sample component. One component is one element of the contents of the sample.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  Impl_ApplicationData value
**/
void *Sam_SampleComponent_AddApplicationData(Sam_SampleComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Sample.SampleComponent.contents

List of sub component 
contained in another component. This is the contents of a component.
  @param  Sam_SampleComponent self
  @param  Sam_SampleComponent value
**/
void *Sam_SampleComponent_AddContent(Sam_SampleComponent self, Sam_SampleComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'addContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'addContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  ApiBoolean complete
**/
void *Sam_SampleComponent_CheckAllValid(Sam_SampleComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  ApiBoolean complete
**/
void *Sam_SampleComponent_CheckValid(Sam_SampleComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'checkValid' is not callable");
  
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
  @param  Sam_SampleComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_SampleComponent_FindAllApplicationData(Sam_SampleComponent self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'findAllApplicationData' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_SampleComponent_FindAllApplicationData_keyval0(Sam_SampleComponent self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_SampleComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_SampleComponent_FindAllApplicationData_keyval1(Sam_SampleComponent self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_SampleComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_SampleComponent_FindAllApplicationData_keyval2(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_SampleComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_SampleComponent_FindAllApplicationData_keyval3(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_SampleComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
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
ApiList Sam_SampleComponent_FindAllApplicationData_keyval4(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_SampleComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_SampleComponent_FindAllContents(Sam_SampleComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'findAllContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'findAllContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_SampleComponent_FindAllContents_keyval0(Sam_SampleComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_SampleComponent_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_SampleComponent_FindAllContents_keyval1(Sam_SampleComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_SampleComponent_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_SampleComponent_FindAllContents_keyval2(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_SampleComponent_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Sam_SampleComponent_FindAllContents_keyval3(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_SampleComponent_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
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
ApiSet Sam_SampleComponent_FindAllContents_keyval4(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_SampleComponent_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData(Sam_SampleComponent self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'findFirstApplicationData' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData_keyval0(Sam_SampleComponent self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_SampleComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData_keyval1(Sam_SampleComponent self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_SampleComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData_keyval2(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_SampleComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData_keyval3(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_SampleComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
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
Impl_ApplicationData Sam_SampleComponent_FindFirstApplicationData_keyval4(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_SampleComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_SampleComponent_FindFirstContent(Sam_SampleComponent self, ApiMap conditions)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'findFirstContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'findFirstContent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_SampleComponent_FindFirstContent_keyval0(Sam_SampleComponent self)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_SampleComponent_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_SampleComponent_FindFirstContent_keyval1(Sam_SampleComponent self, char * key, ApiObject value)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_SampleComponent_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_SampleComponent_FindFirstContent_keyval2(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_SampleComponent_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Sam_SampleComponent_FindFirstContent_keyval3(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_SampleComponent_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
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
Sam_SampleComponent Sam_SampleComponent_FindFirstContent_keyval4(Sam_SampleComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_SampleComponent_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Sam_SampleComponent_Get(Sam_SampleComponent self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for ccp.lims.Sample.SampleComponent.abstractSample

parent link
  @param  Sam_SampleComponent self
  @returns   the result
**/
Sam_AbstractSample Sam_SampleComponent_GetAbstractSample(Sam_SampleComponent self)
{
  
  Sam_AbstractSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAbstractSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getAbstractSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getAbstractSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_SampleComponent self
  @returns   the result
**/
Acco_AccessObject Sam_SampleComponent_GetAccess(Sam_SampleComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getAccess' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
Acco_AccessObject Sam_SampleComponent_GetActiveAccess(Sam_SampleComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getActiveAccess' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiList Sam_SampleComponent_GetApplicationData(Sam_SampleComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.blueprintComponent
  @param  Sam_SampleComponent self
  @returns   the result
**/
Expb_BlueprintComponent Sam_SampleComponent_GetBlueprintComponent(Sam_SampleComponent self)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getBlueprintComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Sam_SampleComponent Sam_SampleComponent_GetByKey(Sam_SampleComponent self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getByKey' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetClassName(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.concDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetConcDisplayUnit(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConcDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getConcDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getConcDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.concentration

Concentration of 
the component in the sample.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiFloat Sam_SampleComponent_GetConcentration(Sam_SampleComponent self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConcentration");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getConcentration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getConcentration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.concentrationError

The 
concentration error.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiFloat Sam_SampleComponent_GetConcentrationError(Sam_SampleComponent self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConcentrationError");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getConcentrationError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getConcentrationError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.concentrationUnit

The 
concentration unit that should be one of these units: kg/m3 for mass 
density, mol/L (M) for amount-of-substance concentration, m3/m3 for 
volume fraction, mol/mol for amount of substance fraction and kg/kg for 
mass fraction.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetConcentrationUnit(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConcentrationUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getConcentrationUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getConcentrationUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.container

The container 
component to which the sub components belong.
  @param  Sam_SampleComponent self
  @returns   the result
**/
Sam_SampleComponent Sam_SampleComponent_GetContainer(Sam_SampleComponent self)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContainer");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getContainer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getContainer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.contents

List of sub component 
contained in another component. This is the contents of a component.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiSet Sam_SampleComponent_GetContents(Sam_SampleComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetDetails(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getDetails' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiList Sam_SampleComponent_GetFieldNames(Sam_SampleComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Sam_SampleComponent_GetFullKey(Sam_SampleComponent self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getFullKey' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiBoolean Sam_SampleComponent_GetInConstructor(Sam_SampleComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getInConstructor' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiBoolean Sam_SampleComponent_GetIsDeleted(Sam_SampleComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @returns  Local object key
**/
ApiObject Sam_SampleComponent_GetLocalKey(Sam_SampleComponent self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getLocalKey' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetPackageName(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getPackageName' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetPackageShortName(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.parent

link to parent object - 
synonym for abstractSample
  @param  Sam_SampleComponent self
  @returns   the result
**/
Sam_AbstractSample Sam_SampleComponent_GetParent(Sam_SampleComponent self)
{
  
  Sam_AbstractSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.purity

The value of the sample 
component purity.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiFloat Sam_SampleComponent_GetPurity(Sam_SampleComponent self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPurity");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getPurity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getPurity' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiString Sam_SampleComponent_GetQualifiedName(Sam_SampleComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.refComponent

The component used 
as a reference associated to a SampleComponent.
  @param  Sam_SampleComponent self
  @returns   the result
**/
Refs_AbstractComponent Sam_SampleComponent_GetRefComponent(Sam_SampleComponent self)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getRefComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getRefComponent' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
Impl_MemopsRoot Sam_SampleComponent_GetRoot(Sam_SampleComponent self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.SampleComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiInteger Sam_SampleComponent_GetSerial(Sam_SampleComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getSerial' is not callable");
  
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
  @param  Sam_SampleComponent self
  @returns   the result
**/
Impl_TopObject Sam_SampleComponent_GetTopObject(Sam_SampleComponent self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Sample.SampleComponent
  @param  Sam_AbstractSample parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_SampleComponent Sam_SampleComponent_Init(Sam_AbstractSample parent, ApiMap attrlinks)
{
  
  return Sam_AbstractSample_NewSampleComponent(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Sample.SampleComponent
  @param  Sam_AbstractSample parent
  @param  Refs_AbstractComponent refComponent
  @returns  the new object
**/
Sam_SampleComponent Sam_SampleComponent_Init_reqd(Sam_AbstractSample parent, Refs_AbstractComponent refComponent)
{
  
  Sam_SampleComponent  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "refComponent", refComponent);
  
  obj = Sam_SampleComponent_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleComponent self
  @param  Impl_ApplicationData value
**/
void *Sam_SampleComponent_RemoveApplicationData(Sam_SampleComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @param  Sam_SampleComponent value
**/
void *Sam_SampleComponent_RemoveContent(Sam_SampleComponent self, Sam_SampleComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'removeContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'removeContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Sample.SampleComponent
  @param  Sam_SampleComponent self
  @param  ApiString name
  @param  ApiObject value
**/
void *Sam_SampleComponent_Set(Sam_SampleComponent self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_SampleComponent self
  @param  Acco_AccessObject value
**/
void *Sam_SampleComponent_SetAccess(Sam_SampleComponent self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setAccess' is not callable");
  
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
  @param  Sam_SampleComponent self
  @param  ApiList values
**/
void *Sam_SampleComponent_SetApplicationData(Sam_SampleComponent self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.blueprintComponent
  @param  Sam_SampleComponent self
  @param  Expb_BlueprintComponent value
**/
void *Sam_SampleComponent_SetBlueprintComponent(Sam_SampleComponent self, Expb_BlueprintComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setBlueprintComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.concDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Sam_SampleComponent self
  @param  ApiString value
**/
void *Sam_SampleComponent_SetConcDisplayUnit(Sam_SampleComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConcDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setConcDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setConcDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.concentration

Concentration of 
the component in the sample.
  @param  Sam_SampleComponent self
  @param  ApiFloat value
**/
void *Sam_SampleComponent_SetConcentration(Sam_SampleComponent self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConcentration");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setConcentration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setConcentration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.concentrationError

The 
concentration error.
  @param  Sam_SampleComponent self
  @param  ApiFloat value
**/
void *Sam_SampleComponent_SetConcentrationError(Sam_SampleComponent self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConcentrationError");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setConcentrationError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setConcentrationError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.concentrationUnit

The 
concentration unit that should be one of these units: kg/m3 for mass 
density, mol/L (M) for amount-of-substance concentration, m3/m3 for 
volume fraction, mol/mol for amount of substance fraction and kg/kg for 
mass fraction.
  @param  Sam_SampleComponent self
  @param  ApiString value
**/
void *Sam_SampleComponent_SetConcentrationUnit(Sam_SampleComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConcentrationUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setConcentrationUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setConcentrationUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.container

The container 
component to which the sub components belong.
  @param  Sam_SampleComponent self
  @param  Sam_SampleComponent value
**/
void *Sam_SampleComponent_SetContainer(Sam_SampleComponent self, Sam_SampleComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContainer");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setContainer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setContainer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.contents

List of sub component 
contained in another component. This is the contents of a component.
  @param  Sam_SampleComponent self
  @param  ApiSet values
**/
void *Sam_SampleComponent_SetContents(Sam_SampleComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setContents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_SampleComponent self
  @param  ApiString value
**/
void *Sam_SampleComponent_SetDetails(Sam_SampleComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.purity

The value of the sample 
component purity.
  @param  Sam_SampleComponent self
  @param  ApiFloat value
**/
void *Sam_SampleComponent_SetPurity(Sam_SampleComponent self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPurity");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setPurity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setPurity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.refComponent

The component used 
as a reference associated to a SampleComponent.
  @param  Sam_SampleComponent self
  @param  Refs_AbstractComponent value
**/
void *Sam_SampleComponent_SetRefComponent(Sam_SampleComponent self, Refs_AbstractComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setRefComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setRefComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.SampleComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Sam_SampleComponent self
  @param  ApiInteger value
**/
void *Sam_SampleComponent_SetSerial(Sam_SampleComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Sample.SampleComponent.contents

List of sub 
component contained in another component. This is the contents of a 
component.
  @param  Sam_SampleComponent self
  @returns   the result
**/
ApiList Sam_SampleComponent_SortedContents(Sam_SampleComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.SampleComponent: cannot find method 'sortedContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.SampleComponent: method 'sortedContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
