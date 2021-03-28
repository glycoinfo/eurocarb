
#include "ccp.h"

/*
  Database entry. This is a reference to an element in an outside database.
*/

/* package ccp.api.general.DbRef */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  Impl_ApplicationData value
**/
void *Dbr_Entry_AddApplicationData(Dbr_Entry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DbRef.Entry.molSystems

MolSystems that use this DB 
reference
  @param  Dbr_Entry self
  @param  Mols_MolSystem value
**/
void *Dbr_Entry_AddMolSystem(Dbr_Entry self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'addMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'addMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  Targ_Target value
**/
void *Dbr_Entry_AddTarget(Dbr_Entry self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  Targ_TargetGroup value
**/
void *Dbr_Entry_AddTargetGroup(Dbr_Entry self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'addTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'addTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiBoolean complete
**/
void *Dbr_Entry_CheckAllValid(Dbr_Entry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiBoolean complete
**/
void *Dbr_Entry_CheckValid(Dbr_Entry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllAlignments(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAlignments");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllAlignments_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllAlignments_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllAlignments_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllAlignments_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllAlignments_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dbr_Entry_FindAllApplicationData(Dbr_Entry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllApplicationData' is not callable");
  
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
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiList Dbr_Entry_FindAllApplicationData_keyval0(Dbr_Entry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dbr_Entry_FindAllApplicationData_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dbr_Entry_FindAllApplicationData_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dbr_Entry_FindAllApplicationData_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
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
ApiList Dbr_Entry_FindAllApplicationData_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllBlueprintDbRefs(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllBlueprintDbRefs_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllBlueprintDbRefs_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllBlueprintDbRefs_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllBlueprintDbRefs_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllBlueprintDbRefs_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllBlueprintDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllComponentDbRefs(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllComponentDbRefs_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllComponentDbRefs_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllComponentDbRefs_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllComponentDbRefs_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllComponentDbRefs_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllMolSystems(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllMolSystems_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllMolSystems_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllMolSystems_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllMolSystems_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllMolSystems_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargetGroups(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargetGroups_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargetGroups_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargetGroups_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargetGroups_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllTargetGroups_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargets(Dbr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargets_keyval0(Dbr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargets_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargets_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dbr_Entry_FindAllTargets_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
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
ApiSet Dbr_Entry_FindAllTargets_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Dbr_Entry_FindFirstAlignment(Dbr_Entry self, ApiMap conditions)
{
  
  Mole_Alignment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAlignment");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstAlignment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Dbr_Entry_FindFirstAlignment_keyval0(Dbr_Entry self)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Dbr_Entry_FindFirstAlignment_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Dbr_Entry_FindFirstAlignment_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Dbr_Entry_FindFirstAlignment_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.alignments

Molecule alignments 
using DbRef.Entry
  @param  Dbr_Entry self
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
Mole_Alignment Dbr_Entry_FindFirstAlignment_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData(Dbr_Entry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData_keyval0(Dbr_Entry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
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
Impl_ApplicationData Dbr_Entry_FindFirstApplicationData_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef(Dbr_Entry self, ApiMap conditions)
{
  
  Expb_BlueprintDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintDbRef");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstBlueprintDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstBlueprintDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef_keyval0(Dbr_Entry self)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.blueprintDbRefs

The 
BlueprintDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
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
Expb_BlueprintDbRef Dbr_Entry_FindFirstBlueprintDbRef_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstBlueprintDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef(Dbr_Entry self, ApiMap conditions)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstComponentDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef_keyval0(Dbr_Entry self)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.componentDbRefs

The 
ComponentDbRef list associated to a particular database reference.
  @param  Dbr_Entry self
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
Refs_ComponentDbRef Dbr_Entry_FindFirstComponentDbRef_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Dbr_Entry_FindFirstMolSystem(Dbr_Entry self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Dbr_Entry_FindFirstMolSystem_keyval0(Dbr_Entry self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Dbr_Entry_FindFirstMolSystem_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Dbr_Entry_FindFirstMolSystem_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Dbr_Entry_FindFirstMolSystem_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.molSystems

MolSystems that use 
this DB reference
  @param  Dbr_Entry self
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
Mols_MolSystem Dbr_Entry_FindFirstMolSystem_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Dbr_Entry_FindFirstTarget(Dbr_Entry self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup(Dbr_Entry self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup_keyval0(Dbr_Entry self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
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
Targ_TargetGroup Dbr_Entry_FindFirstTargetGroup_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Dbr_Entry_FindFirstTarget_keyval0(Dbr_Entry self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dbr_Entry_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Dbr_Entry_FindFirstTarget_keyval1(Dbr_Entry self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dbr_Entry_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Dbr_Entry_FindFirstTarget_keyval2(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dbr_Entry_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Dbr_Entry_FindFirstTarget_keyval3(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dbr_Entry_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
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
Targ_Target Dbr_Entry_FindFirstTarget_keyval4(Dbr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dbr_Entry_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dbr_Entry_Get(Dbr_Entry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dbr_Entry self
  @returns   the result
**/
Acco_AccessObject Dbr_Entry_GetAccess(Dbr_Entry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.alignments

Molecule alignments using 
DbRef.Entry
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetAlignments(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignments");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.altCode

ALternative identifier - the 
exact meaning would depend on the database.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetAltCode(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAltCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getAltCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getAltCode' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_GetApplicationData(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef list 
associated to a particular database reference.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetBlueprintDbRefs(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dbr_Entry Dbr_Entry_GetByKey(Dbr_Entry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dbr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getByKey' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetClassName(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.code

The database code that identifies 
the reference. e.g. 'Q12178'. Some databases have two-oart codes, in 
which cse the subCode holds teh second part. E.g. the PDB has accession 
code and chain code.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetCode(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef list 
associated to a particular database reference.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetComponentDbRefs(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.database

parent link
  @param  Dbr_Entry self
  @returns   the result
**/
Dbr_Database Dbr_Entry_GetDatabase(Dbr_Entry self)
{
  
  Dbr_Database obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDatabase");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getDatabase'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getDatabase' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.details

Detail field for comments.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetDetails(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getDetails' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_GetFieldNames(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dbr_Entry_GetFullKey(Dbr_Entry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getFullKey' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiBoolean Dbr_Entry_GetInConstructor(Dbr_Entry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getInConstructor' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiBoolean Dbr_Entry_GetIsDeleted(Dbr_Entry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @returns  Local object key
**/
ApiObject Dbr_Entry_GetLocalKey(Dbr_Entry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.molSystems

MolSystems that use this DB 
reference
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetMolSystems(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.name

Entry name, as used in the 
database.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetName(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getName' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetPackageName(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getPackageName' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetPackageShortName(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.parent

link to parent object - synonym 
for database
  @param  Dbr_Entry self
  @returns   the result
**/
Dbr_Database Dbr_Entry_GetParent(Dbr_Entry self)
{
  
  Dbr_Database obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getParent' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetQualifiedName(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.release

The database release.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetRelease(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRelease");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getRelease'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getRelease' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
Impl_MemopsRoot Dbr_Entry_GetRoot(Dbr_Entry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.serial

Unique identifier.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiInteger Dbr_Entry_GetSerial(Dbr_Entry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.subCode

Second part of database unique 
identifie, for databases that have two-part codes. For e.g. the PDB the 
code would be the accession number and the subCode would be the 
chainCode.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetSubCode(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getSubCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getSubCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetTargetGroups(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @returns   the result
**/
ApiSet Dbr_Entry_GetTargets(Dbr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getTargets' is not callable");
  
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
  @param  Dbr_Entry self
  @returns   the result
**/
Impl_TopObject Dbr_Entry_GetTopObject(Dbr_Entry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DbRef.Entry.url

The url of the database reference 
entry.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiString Dbr_Entry_GetUrl(Dbr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'getUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'getUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.DbRef.Entry
  @param  Dbr_Database parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dbr_Entry Dbr_Entry_Init(Dbr_Database parent, ApiMap attrlinks)
{
  
  return Dbr_Database_NewEntry(parent, attrlinks);
}

/**
  Constructor for ccp.general.DbRef.Entry
  @param  Dbr_Database parent
  @returns  the new object
**/
Dbr_Entry Dbr_Entry_Init_reqd(Dbr_Database parent)
{
  
  Dbr_Entry  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Dbr_Entry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dbr_Entry self
  @param  Impl_ApplicationData value
**/
void *Dbr_Entry_RemoveApplicationData(Dbr_Entry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @param  Mols_MolSystem value
**/
void *Dbr_Entry_RemoveMolSystem(Dbr_Entry self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'removeMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'removeMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  Targ_Target value
**/
void *Dbr_Entry_RemoveTarget(Dbr_Entry self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  Targ_TargetGroup value
**/
void *Dbr_Entry_RemoveTargetGroup(Dbr_Entry self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'removeTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'removeTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dbr_Entry_Set(Dbr_Entry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dbr_Entry self
  @param  Acco_AccessObject value
**/
void *Dbr_Entry_SetAccess(Dbr_Entry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.alignments

Molecule alignments using 
DbRef.Entry
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetAlignments(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignments");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setAlignments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.altCode

ALternative identifier - the 
exact meaning would depend on the database.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetAltCode(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAltCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setAltCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setAltCode' is not callable");
  
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
  @param  Dbr_Entry self
  @param  ApiList values
**/
void *Dbr_Entry_SetApplicationData(Dbr_Entry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef list 
associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetBlueprintDbRefs(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setBlueprintDbRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.code

The database code that identifies 
the reference. e.g. 'Q12178'. Some databases have two-oart codes, in 
which cse the subCode holds teh second part. E.g. the PDB has accession 
code and chain code.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetCode(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef list 
associated to a particular database reference.
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetComponentDbRefs(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setComponentDbRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.details

Detail field for comments.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetDetails(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.molSystems

MolSystems that use this DB 
reference
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetMolSystems(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setMolSystems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.name

Entry name, as used in the 
database.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetName(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.release

The database release.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetRelease(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRelease");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setRelease'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setRelease' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.serial

Unique identifier.
  @param  Dbr_Entry self
  @param  ApiInteger value
**/
void *Dbr_Entry_SetSerial(Dbr_Entry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.subCode

Second part of database unique 
identifie, for databases that have two-part codes. For e.g. the PDB the 
code would be the accession number and the subCode would be the 
chainCode.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetSubCode(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubCode");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setSubCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setSubCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetTargetGroups(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setTargetGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @param  ApiSet values
**/
void *Dbr_Entry_SetTargets(Dbr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DbRef.Entry.url

The url of the database reference 
entry.
  @param  Dbr_Entry self
  @param  ApiString value
**/
void *Dbr_Entry_SetUrl(Dbr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'setUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'setUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.alignments

Molecule alignments using 
DbRef.Entry
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedAlignments(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAlignments");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.blueprintDbRefs

The BlueprintDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedBlueprintDbRefs(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedBlueprintDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedBlueprintDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.componentDbRefs

The ComponentDbRef 
list associated to a particular database reference.
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedComponentDbRefs(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.molSystems

MolSystems that use this 
DB reference
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedMolSystems(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.targetGroups
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedTargetGroups(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DbRef.Entry.targets
  @param  Dbr_Entry self
  @returns   the result
**/
ApiList Dbr_Entry_SortedTargets(Dbr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.DbRef.Entry: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DbRef.Entry: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
