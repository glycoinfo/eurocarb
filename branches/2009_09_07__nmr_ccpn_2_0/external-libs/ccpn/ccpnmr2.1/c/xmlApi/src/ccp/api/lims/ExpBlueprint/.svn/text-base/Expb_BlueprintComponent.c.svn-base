
#include "ccp.h"

/*
  The contents of the ExpBlueprint.
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintComponent_AddApplicationData(Expb_BlueprintComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  Sam_SampleComponent value
**/
void *Expb_BlueprintComponent_AddSampleComponent(Expb_BlueprintComponent self, Sam_SampleComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'addSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'addSampleComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
void *Expb_BlueprintComponent_AddTrialMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTrialMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'addTrialMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'addTrialMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintComponent_CheckAllValid(Expb_BlueprintComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintComponent_CheckValid(Expb_BlueprintComponent self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'checkValid' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintComponent_FindAllApplicationData(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findAllApplicationData' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval0(Expb_BlueprintComponent self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
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
ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllSampleComponents(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findAllSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findAllSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval0(Expb_BlueprintComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
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
ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindAllSampleComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTrialMolComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findAllTrialMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findAllTrialMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval0(Expb_BlueprintComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindAllTrialMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindAllTrialMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindAllTrialMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindAllTrialMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
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
ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindAllTrialMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval0(Expb_BlueprintComponent self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
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
Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  Sam_SampleComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findFirstSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findFirstSampleComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval0(Expb_BlueprintComponent self)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
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
Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_SampleComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindFirstSampleComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent(Expb_BlueprintComponent self, ApiMap conditions)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTrialMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'findFirstTrialMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'findFirstTrialMolComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval0(Expb_BlueprintComponent self)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintComponent_FindFirstTrialMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintComponent_FindFirstTrialMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintComponent_FindFirstTrialMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintComponent_FindFirstTrialMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
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
Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintComponent_FindFirstTrialMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expb_BlueprintComponent_Get(Expb_BlueprintComponent self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Acco_AccessObject Expb_BlueprintComponent_GetAccess(Expb_BlueprintComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getAccess' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Acco_AccessObject Expb_BlueprintComponent_GetActiveAccess(Expb_BlueprintComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.alwaysIncluded

Is this 
NonPolyBlueprintComp included all times in the experiments?
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiBoolean Expb_BlueprintComponent_GetAlwaysIncluded(Expb_BlueprintComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlwaysIncluded");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getAlwaysIncluded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getAlwaysIncluded' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiList Expb_BlueprintComponent_GetApplicationData(Expb_BlueprintComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.approxBeginSeqId

The 
approxBeginSeqId is the approximative residue number that gives the 
residue begining position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiInteger Expb_BlueprintComponent_GetApproxBeginSeqId(Expb_BlueprintComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApproxBeginSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getApproxBeginSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getApproxBeginSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.approxEndSeqId

The 
approxEndSeqId is the approximative residue number that gives the 
residue ending position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiInteger Expb_BlueprintComponent_GetApproxEndSeqId(Expb_BlueprintComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApproxEndSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getApproxEndSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getApproxEndSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expb_BlueprintComponent Expb_BlueprintComponent_GetByKey(Expb_BlueprintComponent self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getByKey' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetClassName(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.componentType

Type of 
the blueprint component. e.g. 'PolyBlueprintComp' or 
'NonPolyBlueprintComp'
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetComponentType(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentType");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getComponentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getComponentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.details

Detail field 
for comments.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetDetails(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.domain

The name of the 
target domain used to define the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetDomain(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDomain");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getDomain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getDomain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.expBlueprint

The trial 
to which this component belongs.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintComponent_GetExpBlueprint(Expb_BlueprintComponent self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getExpBlueprint' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiList Expb_BlueprintComponent_GetFieldNames(Expb_BlueprintComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expb_BlueprintComponent_GetFullKey(Expb_BlueprintComponent self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getFullKey' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiBoolean Expb_BlueprintComponent_GetInConstructor(Expb_BlueprintComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getInConstructor' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiBoolean Expb_BlueprintComponent_GetIsDeleted(Expb_BlueprintComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @returns  Local object key
**/
ApiObject Expb_BlueprintComponent_GetLocalKey(Expb_BlueprintComponent self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.molComponent
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Refs_MolComponent Expb_BlueprintComponent_GetMolComponent(Expb_BlueprintComponent self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getMolComponent' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetPackageName(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getPackageName' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetPackageShortName(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.parent

link to parent 
object - synonym for expBlueprint
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintComponent_GetParent(Expb_BlueprintComponent self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getParent' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetQualifiedName(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getQualifiedName' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Impl_MemopsRoot Expb_BlueprintComponent_GetRoot(Expb_BlueprintComponent self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiSet Expb_BlueprintComponent_GetSampleComponents(Expb_BlueprintComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.serial

Unique 
identifier.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiInteger Expb_BlueprintComponent_GetSerial(Expb_BlueprintComponent self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.status

The status of 
the blueprint component.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetStatus(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.target

The target 
associated to the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Targ_Target Expb_BlueprintComponent_GetTarget(Expb_BlueprintComponent self)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getTarget' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
Impl_TopObject Expb_BlueprintComponent_GetTopObject(Expb_BlueprintComponent self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiSet Expb_BlueprintComponent_GetTrialMolComponents(Expb_BlueprintComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTrialMolComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getTrialMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getTrialMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.whyChosen

Details of 
the basis for the selection of this BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiString Expb_BlueprintComponent_GetWhyChosen(Expb_BlueprintComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWhyChosen");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'getWhyChosen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'getWhyChosen' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintComponent Expb_BlueprintComponent_Init(Expb_ExpBlueprint parent, ApiMap attrlinks)
{
  
  return Expb_ExpBlueprint_NewBlueprintComponent(parent, attrlinks);
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint parent
  @param  char * componentType
  @param  char * whyChosen
  @returns  the new object
**/
Expb_BlueprintComponent Expb_BlueprintComponent_Init_reqd(Expb_ExpBlueprint parent, char * componentType, char * whyChosen)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__componentType = ApiString_New(componentType);
  ApiString api__whyChosen = ApiString_New(whyChosen);

  PyDict_SetItemString(attrlinks, "componentType", api__componentType);
  PyDict_SetItemString(attrlinks, "whyChosen", api__whyChosen);
  
  obj = Expb_BlueprintComponent_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__componentType);
  Py_DECREF(api__whyChosen);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintComponent_RemoveApplicationData(Expb_BlueprintComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  Sam_SampleComponent value
**/
void *Expb_BlueprintComponent_RemoveSampleComponent(Expb_BlueprintComponent self, Sam_SampleComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSampleComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'removeSampleComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'removeSampleComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
void *Expb_BlueprintComponent_RemoveTrialMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTrialMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'removeTrialMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'removeTrialMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expb_BlueprintComponent_Set(Expb_BlueprintComponent self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintComponent self
  @param  Acco_AccessObject value
**/
void *Expb_BlueprintComponent_SetAccess(Expb_BlueprintComponent self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.alwaysIncluded

Is this 
NonPolyBlueprintComp included all times in the experiments?
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean value
**/
void *Expb_BlueprintComponent_SetAlwaysIncluded(Expb_BlueprintComponent self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlwaysIncluded");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setAlwaysIncluded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setAlwaysIncluded' is not callable");
  
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
  @param  Expb_BlueprintComponent self
  @param  ApiList values
**/
void *Expb_BlueprintComponent_SetApplicationData(Expb_BlueprintComponent self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.approxBeginSeqId

The 
approxBeginSeqId is the approximative residue number that gives the 
residue begining position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
void *Expb_BlueprintComponent_SetApproxBeginSeqId(Expb_BlueprintComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApproxBeginSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setApproxBeginSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setApproxBeginSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.approxEndSeqId

The 
approxEndSeqId is the approximative residue number that gives the 
residue ending position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
void *Expb_BlueprintComponent_SetApproxEndSeqId(Expb_BlueprintComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApproxEndSeqId");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setApproxEndSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setApproxEndSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.componentType

Type of 
the blueprint component. e.g. 'PolyBlueprintComp' or 
'NonPolyBlueprintComp'
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
void *Expb_BlueprintComponent_SetComponentType(Expb_BlueprintComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComponentType");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setComponentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setComponentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.details

Detail field 
for comments.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
void *Expb_BlueprintComponent_SetDetails(Expb_BlueprintComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.domain

The name of the 
target domain used to define the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
void *Expb_BlueprintComponent_SetDomain(Expb_BlueprintComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDomain");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setDomain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setDomain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.molComponent
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
void *Expb_BlueprintComponent_SetMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiSet values
**/
void *Expb_BlueprintComponent_SetSampleComponents(Expb_BlueprintComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setSampleComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.serial

Unique 
identifier.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
void *Expb_BlueprintComponent_SetSerial(Expb_BlueprintComponent self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.status

The status of 
the blueprint component.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
void *Expb_BlueprintComponent_SetStatus(Expb_BlueprintComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.target

The target 
associated to the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  Targ_Target value
**/
void *Expb_BlueprintComponent_SetTarget(Expb_BlueprintComponent self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiSet values
**/
void *Expb_BlueprintComponent_SetTrialMolComponents(Expb_BlueprintComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTrialMolComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setTrialMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setTrialMolComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.whyChosen

Details of 
the basis for the selection of this BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
void *Expb_BlueprintComponent_SetWhyChosen(Expb_BlueprintComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWhyChosen");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'setWhyChosen'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'setWhyChosen' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiList Expb_BlueprintComponent_SortedSampleComponents(Expb_BlueprintComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'sortedSampleComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'sortedSampleComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
ApiList Expb_BlueprintComponent_SortedTrialMolComponents(Expb_BlueprintComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTrialMolComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: cannot find method 'sortedTrialMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintComponent: method 'sortedTrialMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
