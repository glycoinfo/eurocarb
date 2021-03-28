
#include "ccp.h"

/*
  OutputSamples attach a Sample to an Experiment as the product of that Experiment.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  Impl_ApplicationData value
**/
void *Expe_OutputSample_AddApplicationData(Expe_OutputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  ApiBoolean complete
**/
void *Expe_OutputSample_CheckAllValid(Expe_OutputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  ApiBoolean complete
**/
void *Expe_OutputSample_CheckValid(Expe_OutputSample self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'checkValid' is not callable");
  
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
  @param  Expe_OutputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_OutputSample_FindAllApplicationData(Expe_OutputSample self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'findAllApplicationData' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_OutputSample_FindAllApplicationData_keyval0(Expe_OutputSample self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_OutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_OutputSample_FindAllApplicationData_keyval1(Expe_OutputSample self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_OutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_OutputSample_FindAllApplicationData_keyval2(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_OutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expe_OutputSample_FindAllApplicationData_keyval3(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_OutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
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
ApiList Expe_OutputSample_FindAllApplicationData_keyval4(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_OutputSample_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData(Expe_OutputSample self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData_keyval0(Expe_OutputSample self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expe_OutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData_keyval1(Expe_OutputSample self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expe_OutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData_keyval2(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expe_OutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData_keyval3(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expe_OutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
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
Impl_ApplicationData Expe_OutputSample_FindFirstApplicationData_keyval4(Expe_OutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expe_OutputSample_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expe_OutputSample_Get(Expe_OutputSample self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_OutputSample self
  @returns   the result
**/
Acco_AccessObject Expe_OutputSample_GetAccess(Expe_OutputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getAccess' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
Acco_AccessObject Expe_OutputSample_GetActiveAccess(Expe_OutputSample self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.amount

The amount of the 
sample used by the experiment.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiFloat Expe_OutputSample_GetAmount(Expe_OutputSample self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getAmount' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetAmountDisplayUnit(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getAmountDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetAmountUnit(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getAmountUnit' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiList Expe_OutputSample_GetApplicationData(Expe_OutputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expe_OutputSample Expe_OutputSample_GetByKey(Expe_OutputSample self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expe_OutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getByKey' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetClassName(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.experiment

parent link
  @param  Expe_OutputSample self
  @returns   the result
**/
Expe_Experiment Expe_OutputSample_GetExperiment(Expe_OutputSample self)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getExperiment' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiList Expe_OutputSample_GetFieldNames(Expe_OutputSample self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expe_OutputSample_GetFullKey(Expe_OutputSample self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getFullKey' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiBoolean Expe_OutputSample_GetInConstructor(Expe_OutputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getInConstructor' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiBoolean Expe_OutputSample_GetIsDeleted(Expe_OutputSample self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @returns  Local object key
**/
ApiObject Expe_OutputSample_GetLocalKey(Expe_OutputSample self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.name

The name to display for 
this InputSample.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetName(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getName' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetPackageName(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getPackageName' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetPackageShortName(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.parent

link to parent object - 
synonym for experiment
  @param  Expe_OutputSample self
  @returns   the result
**/
Expe_Experiment Expe_OutputSample_GetParent(Expe_OutputSample self)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getParent' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetQualifiedName(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.refOutputSample
  @param  Expe_OutputSample self
  @returns   the result
**/
Prot_RefOutputSample Expe_OutputSample_GetRefOutputSample(Expe_OutputSample self)
{
  
  Prot_RefOutputSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getRefOutputSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiString Expe_OutputSample_GetRole(Expe_OutputSample self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getRole' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
Impl_MemopsRoot Expe_OutputSample_GetRoot(Expe_OutputSample self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.sample

Sample involved as an 
output sample of an experiment.
  @param  Expe_OutputSample self
  @returns   the result
**/
Sam_Sample Expe_OutputSample_GetSample(Expe_OutputSample self)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Experiment.OutputSample.serial

Unique identifier.
  @param  Expe_OutputSample self
  @returns   the result
**/
ApiInteger Expe_OutputSample_GetSerial(Expe_OutputSample self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getSerial' is not callable");
  
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
  @param  Expe_OutputSample self
  @returns   the result
**/
Impl_TopObject Expe_OutputSample_GetTopObject(Expe_OutputSample self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Experiment.OutputSample
  @param  Expe_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expe_OutputSample Expe_OutputSample_Init(Expe_Experiment parent, ApiMap attrlinks)
{
  
  return Expe_Experiment_NewOutputSample(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Experiment.OutputSample
  @param  Expe_Experiment parent
  @returns  the new object
**/
Expe_OutputSample Expe_OutputSample_Init_reqd(Expe_Experiment parent)
{
  
  Expe_OutputSample  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Expe_OutputSample_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_OutputSample self
  @param  Impl_ApplicationData value
**/
void *Expe_OutputSample_RemoveApplicationData(Expe_OutputSample self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Experiment.OutputSample
  @param  Expe_OutputSample self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expe_OutputSample_Set(Expe_OutputSample self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_OutputSample self
  @param  Acco_AccessObject value
**/
void *Expe_OutputSample_SetAccess(Expe_OutputSample self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.amount

The amount of the 
sample used by the experiment.
  @param  Expe_OutputSample self
  @param  ApiFloat value
**/
void *Expe_OutputSample_SetAmount(Expe_OutputSample self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmount");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setAmount'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setAmount' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_OutputSample self
  @param  ApiString value
**/
void *Expe_OutputSample_SetAmountDisplayUnit(Expe_OutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setAmountDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setAmountDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_OutputSample self
  @param  ApiString value
**/
void *Expe_OutputSample_SetAmountUnit(Expe_OutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAmountUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setAmountUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setAmountUnit' is not callable");
  
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
  @param  Expe_OutputSample self
  @param  ApiList values
**/
void *Expe_OutputSample_SetApplicationData(Expe_OutputSample self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.name

The name to display for 
this InputSample.
  @param  Expe_OutputSample self
  @param  ApiString value
**/
void *Expe_OutputSample_SetName(Expe_OutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.refOutputSample
  @param  Expe_OutputSample self
  @param  Prot_RefOutputSample value
**/
void *Expe_OutputSample_SetRefOutputSample(Expe_OutputSample self, Prot_RefOutputSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefOutputSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setRefOutputSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setRefOutputSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_OutputSample self
  @param  ApiString value
**/
void *Expe_OutputSample_SetRole(Expe_OutputSample self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.sample

Sample involved as an 
output sample of an experiment.
  @param  Expe_OutputSample self
  @param  Sam_Sample value
**/
void *Expe_OutputSample_SetSample(Expe_OutputSample self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Experiment.OutputSample.serial

Unique identifier.
  @param  Expe_OutputSample self
  @param  ApiInteger value
**/
void *Expe_OutputSample_SetSerial(Expe_OutputSample self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Experiment.OutputSample: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Experiment.OutputSample: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
