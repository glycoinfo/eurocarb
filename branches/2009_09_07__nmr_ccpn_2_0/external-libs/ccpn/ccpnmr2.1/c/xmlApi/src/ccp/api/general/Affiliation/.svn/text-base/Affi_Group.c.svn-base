
#include "ccp.h"

/*
  A group of persons within an organisation.
*/

/* package ccp.api.general.Affiliation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  Impl_ApplicationData value
**/
void *Affi_Group_AddApplicationData(Affi_Group self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Affiliation.Group.experiments

Experiments carried 
out by group
  @param  Affi_Group self
  @param  Expe_Experiment value
**/
void *Affi_Group_AddExperiment(Affi_Group self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Affiliation.Group.nmrEntries

NMR entries originated 
by group
  @param  Affi_Group self
  @param  Entr_Entry value
**/
void *Affi_Group_AddNmrEntry(Affi_Group self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'addNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'addNmrEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  ApiBoolean complete
**/
void *Affi_Group_CheckAllValid(Affi_Group self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  ApiBoolean complete
**/
void *Affi_Group_CheckValid(Affi_Group self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'checkValid' is not callable");
  
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
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Group_FindAllApplicationData(Affi_Group self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findAllApplicationData' is not callable");
  
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
  @param  Affi_Group self
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Group_FindAllApplicationData_keyval0(Affi_Group self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Group_FindAllApplicationData_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Group_FindAllApplicationData_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Affi_Group_FindAllApplicationData_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
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
ApiList Affi_Group_FindAllApplicationData_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllExperiments(Affi_Group self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllExperiments_keyval0(Affi_Group self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllExperiments_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllExperiments_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllExperiments_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
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
ApiSet Affi_Group_FindAllExperiments_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllNmrEntries(Affi_Group self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findAllNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findAllNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllNmrEntries_keyval0(Affi_Group self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllNmrEntries_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllNmrEntries_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllNmrEntries_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
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
ApiSet Affi_Group_FindAllNmrEntries_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllPersonInGroups(Affi_Group self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPersonInGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findAllPersonInGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findAllPersonInGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllPersonInGroups_keyval0(Affi_Group self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindAllPersonInGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllPersonInGroups_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindAllPersonInGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllPersonInGroups_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindAllPersonInGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Affi_Group_FindAllPersonInGroups_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindAllPersonInGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
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
ApiSet Affi_Group_FindAllPersonInGroups_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindAllPersonInGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Group_FindFirstApplicationData(Affi_Group self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findFirstApplicationData' is not callable");
  
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
  @param  Affi_Group self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Group_FindFirstApplicationData_keyval0(Affi_Group self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Group_FindFirstApplicationData_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Group_FindFirstApplicationData_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Affi_Group_FindFirstApplicationData_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
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
Impl_ApplicationData Affi_Group_FindFirstApplicationData_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Affi_Group_FindFirstExperiment(Affi_Group self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Affi_Group_FindFirstExperiment_keyval0(Affi_Group self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Affi_Group_FindFirstExperiment_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Affi_Group_FindFirstExperiment_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Affi_Group_FindFirstExperiment_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
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
Expe_Experiment Affi_Group_FindFirstExperiment_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Affi_Group_FindFirstNmrEntry(Affi_Group self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findFirstNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findFirstNmrEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Affi_Group_FindFirstNmrEntry_keyval0(Affi_Group self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Affi_Group_FindFirstNmrEntry_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Affi_Group_FindFirstNmrEntry_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Affi_Group_FindFirstNmrEntry_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
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
Entr_Entry Affi_Group_FindFirstNmrEntry_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup(Affi_Group self, ApiMap conditions)
{
  
  Affi_PersonInGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPersonInGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'findFirstPersonInGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'findFirstPersonInGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @returns  the first value that satisfies the conditions 
**/
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup_keyval0(Affi_Group self)
{
  
  Affi_PersonInGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Affi_Group_FindFirstPersonInGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup_keyval1(Affi_Group self, char * key, ApiObject value)
{
  
  Affi_PersonInGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Affi_Group_FindFirstPersonInGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup_keyval2(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_PersonInGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Affi_Group_FindFirstPersonInGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup_keyval3(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_PersonInGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Affi_Group_FindFirstPersonInGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
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
Affi_PersonInGroup Affi_Group_FindFirstPersonInGroup_keyval4(Affi_Group self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_PersonInGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Affi_Group_FindFirstPersonInGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Affi_Group_Get(Affi_Group self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Group self
  @returns   the result
**/
Acco_AccessObject Affi_Group_GetAccess(Affi_Group self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getAccess' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
Acco_AccessObject Affi_Group_GetActiveAccess(Affi_Group self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getActiveAccess' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiList Affi_Group_GetApplicationData(Affi_Group self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Affi_Group Affi_Group_GetByKey(Affi_Group self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getByKey' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetClassName(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.experiments

Experiments carried 
out by group
  @param  Affi_Group self
  @returns   the result
**/
ApiSet Affi_Group_GetExperiments(Affi_Group self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getExperiments' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiList Affi_Group_GetFieldNames(Affi_Group self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Affi_Group_GetFullKey(Affi_Group self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getFullKey' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiBoolean Affi_Group_GetInConstructor(Affi_Group self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getInConstructor' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiBoolean Affi_Group_GetIsDeleted(Affi_Group self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @returns  Local object key
**/
ApiObject Affi_Group_GetLocalKey(Affi_Group self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.name

The name of the group.
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetName(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.nmrEntries

NMR entries originated 
by group
  @param  Affi_Group self
  @returns   the result
**/
ApiSet Affi_Group_GetNmrEntries(Affi_Group self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.organisation

The organisation to 
which the group belongs. e.g. 'University of Cambridge'.
  @param  Affi_Group self
  @returns   the result
**/
Affi_Organisation Affi_Group_GetOrganisation(Affi_Group self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganisation");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getOrganisation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getOrganisation' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetPackageName(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getPackageName' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetPackageShortName(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.parent

link to parent object - 
synonym for organisation
  @param  Affi_Group self
  @returns   the result
**/
Affi_Organisation Affi_Group_GetParent(Affi_Group self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.personInGroups

Persons in group, 
with address information etc.
  @param  Affi_Group self
  @returns   the result
**/
ApiSet Affi_Group_GetPersonInGroups(Affi_Group self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPersonInGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getPersonInGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getPersonInGroups' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetQualifiedName(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getQualifiedName' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
Impl_MemopsRoot Affi_Group_GetRoot(Affi_Group self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.serial

Unique identifier.
  @param  Affi_Group self
  @returns   the result
**/
ApiInteger Affi_Group_GetSerial(Affi_Group self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getSerial' is not callable");
  
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
  @param  Affi_Group self
  @returns   the result
**/
Impl_TopObject Affi_Group_GetTopObject(Affi_Group self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Affiliation.Group.url

The url of the group. e.g. 
'www.ccpn.ac.uk'.
  @param  Affi_Group self
  @returns   the result
**/
ApiString Affi_Group_GetUrl(Affi_Group self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'getUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'getUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Affiliation.Group
  @param  Affi_Organisation parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Affi_Group Affi_Group_Init(Affi_Organisation parent, ApiMap attrlinks)
{
  
  return Affi_Organisation_NewGroup(parent, attrlinks);
}

/**
  Constructor for ccp.general.Affiliation.Group
  @param  Affi_Organisation parent
  @returns  the new object
**/
Affi_Group Affi_Group_Init_reqd(Affi_Organisation parent)
{
  
  Affi_Group  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Affi_Group_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Group self
  @param  Impl_ApplicationData value
**/
void *Affi_Group_RemoveApplicationData(Affi_Group self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @param  Expe_Experiment value
**/
void *Affi_Group_RemoveExperiment(Affi_Group self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @param  Entr_Entry value
**/
void *Affi_Group_RemoveNmrEntry(Affi_Group self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'removeNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'removeNmrEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Affiliation.Group
  @param  Affi_Group self
  @param  ApiString name
  @param  ApiObject value
**/
void *Affi_Group_Set(Affi_Group self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Group self
  @param  Acco_AccessObject value
**/
void *Affi_Group_SetAccess(Affi_Group self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setAccess' is not callable");
  
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
  @param  Affi_Group self
  @param  ApiList values
**/
void *Affi_Group_SetApplicationData(Affi_Group self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.experiments

Experiments carried 
out by group
  @param  Affi_Group self
  @param  ApiSet values
**/
void *Affi_Group_SetExperiments(Affi_Group self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.name

The name of the group.
  @param  Affi_Group self
  @param  ApiString value
**/
void *Affi_Group_SetName(Affi_Group self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.nmrEntries

NMR entries originated 
by group
  @param  Affi_Group self
  @param  ApiSet values
**/
void *Affi_Group_SetNmrEntries(Affi_Group self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setNmrEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.personInGroups

Persons in group, 
with address information etc.
  @param  Affi_Group self
  @param  ApiSet values
**/
void *Affi_Group_SetPersonInGroups(Affi_Group self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPersonInGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setPersonInGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setPersonInGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.serial

Unique identifier.
  @param  Affi_Group self
  @param  ApiInteger value
**/
void *Affi_Group_SetSerial(Affi_Group self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Affiliation.Group.url

The url of the group. e.g. 
'www.ccpn.ac.uk'.
  @param  Affi_Group self
  @param  ApiString value
**/
void *Affi_Group_SetUrl(Affi_Group self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUrl");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'setUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'setUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Affiliation.Group.experiments

Experiments 
carried out by group
  @param  Affi_Group self
  @returns   the result
**/
ApiList Affi_Group_SortedExperiments(Affi_Group self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Affiliation.Group.nmrEntries

NMR entries 
originated by group
  @param  Affi_Group self
  @returns   the result
**/
ApiList Affi_Group_SortedNmrEntries(Affi_Group self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'sortedNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'sortedNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Affiliation.Group.personInGroups

Persons in 
group, with address information etc.
  @param  Affi_Group self
  @returns   the result
**/
ApiList Affi_Group_SortedPersonInGroups(Affi_Group self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPersonInGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Affiliation.Group: cannot find method 'sortedPersonInGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Affiliation.Group: method 'sortedPersonInGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
