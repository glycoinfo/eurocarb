
#include "ccp.h"

/*
  This is used to imply several input samples in one experiment and also one input sample in several experiments.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  Impl_ApplicationData value
**/
void *Expe_InputSample_AddApplicationData(Expe_InputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean complete
**/
void *Expe_InputSample_CheckAllValid(Expe_InputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean complete
**/
void *Expe_InputSample_CheckValid(Expe_InputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'checkValid' is not callable");
  
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
  @param  Expe_InputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_InputSample_FindAllApplicationData(Expe_InputSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Expe_InputSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_InputSample_FindAllApplicationData_keyval0(Expe_InputSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_InputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_InputSample_FindAllApplicationData_keyval1(Expe_InputSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_InputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_InputSample_FindAllApplicationData_keyval2(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_InputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_InputSample_FindAllApplicationData_keyval3(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_InputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
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
ApiList Expe_InputSample_FindAllApplicationData_keyval4(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_InputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData(Expe_InputSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expe_InputSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval0(Expe_InputSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_InputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval1(Expe_InputSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_InputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval2(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_InputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval3(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_InputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
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
Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval4(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_InputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expe_InputSample_Get(Expe_InputSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_InputSample self
  @returns   the result
**/
Acco_AccessObject Expe_InputSample_GetAccess(Expe_InputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getAccess' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
Acco_AccessObject Expe_InputSample_GetActiveAccess(Expe_InputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.amount

The amount of the sample 
used by the experiment.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiFloat Expe_InputSample_GetAmount(Expe_InputSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getAmount' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetAmountDisplayUnit(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getAmountDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetAmountUnit(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getAmountUnit' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiList Expe_InputSample_GetApplicationData(Expe_InputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expe_InputSample Expe_InputSample_GetByKey(Expe_InputSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expe_InputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getByKey' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetClassName(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.experiment

parent link
  @param  Expe_InputSample self
  @returns   the result
**/
Expe_Experiment Expe_InputSample_GetExperiment(Expe_InputSample self)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getExperiment' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiList Expe_InputSample_GetFieldNames(Expe_InputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expe_InputSample_GetFullKey(Expe_InputSample self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getFullKey' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiBoolean Expe_InputSample_GetInConstructor(Expe_InputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getInConstructor' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiBoolean Expe_InputSample_GetIsDeleted(Expe_InputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @returns  Local object key
**/
ApiObject Expe_InputSample_GetLocalKey(Expe_InputSample self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.name

The name to display for 
this InputSample.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetName(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getName' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetPackageName(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getPackageName' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetPackageShortName(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.parent

link to parent object - 
synonym for experiment
  @param  Expe_InputSample self
  @returns   the result
**/
Expe_Experiment Expe_InputSample_GetParent(Expe_InputSample self)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getParent' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetQualifiedName(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.refInputSample
  @param  Expe_InputSample self
  @returns   the result
**/
Prot_RefInputSample Expe_InputSample_GetRefInputSample(Expe_InputSample self)
{
  
  Prot_RefInputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getRefInputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiString Expe_InputSample_GetRole(Expe_InputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getRole' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
Impl_MemopsRoot Expe_InputSample_GetRoot(Expe_InputSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.sample

Sample involved as an 
input sample of an experiment.
  @param  Expe_InputSample self
  @returns   the result
**/
Sam_Sample Expe_InputSample_GetSample(Expe_InputSample self)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.InputSample.serial

Unique identifier.
  @param  Expe_InputSample self
  @returns   the result
**/
ApiInteger Expe_InputSample_GetSerial(Expe_InputSample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getSerial' is not callable");
  
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
  @param  Expe_InputSample self
  @returns   the result
**/
Impl_TopObject Expe_InputSample_GetTopObject(Expe_InputSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Experiment.InputSample
  @param  Expe_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_InputSample Expe_InputSample_Init(Expe_Experiment parent, ApiMap attrlinks)
{
  
  return Expe_Experiment_NewInputSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Experiment.InputSample
  @param  Expe_Experiment parent
  @returns  the new object
**/
Expe_InputSample Expe_InputSample_Init_reqd(Expe_Experiment parent)
{
  
  Expe_InputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Expe_InputSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  Impl_ApplicationData value
**/
void *Expe_InputSample_RemoveApplicationData(Expe_InputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expe_InputSample_Set(Expe_InputSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_InputSample self
  @param  Acco_AccessObject value
**/
void *Expe_InputSample_SetAccess(Expe_InputSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.amount

The amount of the sample 
used by the experiment.
  @param  Expe_InputSample self
  @param  ApiFloat value
**/
void *Expe_InputSample_SetAmount(Expe_InputSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setAmount' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_InputSample self
  @param  ApiString value
**/
void *Expe_InputSample_SetAmountDisplayUnit(Expe_InputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setAmountDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_InputSample self
  @param  ApiString value
**/
void *Expe_InputSample_SetAmountUnit(Expe_InputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setAmountUnit' is not callable");
  
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
  @param  Expe_InputSample self
  @param  ApiList values
**/
void *Expe_InputSample_SetApplicationData(Expe_InputSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.name

The name to display for 
this InputSample.
  @param  Expe_InputSample self
  @param  ApiString value
**/
void *Expe_InputSample_SetName(Expe_InputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.refInputSample
  @param  Expe_InputSample self
  @param  Prot_RefInputSample value
**/
void *Expe_InputSample_SetRefInputSample(Expe_InputSample self, Prot_RefInputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefInputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setRefInputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setRefInputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_InputSample self
  @param  ApiString value
**/
void *Expe_InputSample_SetRole(Expe_InputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.sample

Sample involved as an 
input sample of an experiment.
  @param  Expe_InputSample self
  @param  Sam_Sample value
**/
void *Expe_InputSample_SetSample(Expe_InputSample self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.InputSample.serial

Unique identifier.
  @param  Expe_InputSample self
  @param  ApiInteger value
**/
void *Expe_InputSample_SetSerial(Expe_InputSample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.InputSample: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.InputSample: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
